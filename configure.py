#!/usr/bin/env python3

###
# Generates build files for the project.
# This file also includes the project configuration,
# such as compiler flags and the object matching status.
#
# Usage:
#   python3 configure.py
#   ninja
#
# Append --help to see available options.
###

import argparse
import sys
from pathlib import Path
from typing import Any, Dict, List

from tools.project import (
    Object,
    ProgressCategory,
    ProjectConfig,
    calculate_progress,
    generate_build,
    is_windows,
)

# Game versions
DEFAULT_VERSION = 0
VERSIONS = [
    "GP8EAF",  # 0
]

parser = argparse.ArgumentParser()
parser.add_argument(
    "mode",
    choices=["configure", "progress"],
    default="configure",
    help="script mode (default: configure)",
    nargs="?",
)
parser.add_argument(
    "-v",
    "--version",
    choices=VERSIONS,
    type=str.upper,
    default=VERSIONS[DEFAULT_VERSION],
    help="version to build",
)
parser.add_argument(
    "--build-dir",
    metavar="DIR",
    type=Path,
    default=Path("build"),
    help="base build directory (default: build)",
)
parser.add_argument(
    "--binutils",
    metavar="BINARY",
    type=Path,
    help="path to binutils (optional)",
)
parser.add_argument(
    "--compilers",
    metavar="DIR",
    type=Path,
    help="path to compilers (optional)",
)
parser.add_argument(
    "--map",
    action="store_true",
    help="generate map file(s)",
)
parser.add_argument(
    "--debug",
    action="store_true",
    help="build with debug info (non-matching)",
)
if not is_windows():
    parser.add_argument(
        "--wrapper",
        metavar="BINARY",
        type=Path,
        help="path to wibo or wine (optional)",
    )
parser.add_argument(
    "--dtk",
    metavar="BINARY | DIR",
    type=Path,
    help="path to decomp-toolkit binary or source (optional)",
)
parser.add_argument(
    "--objdiff",
    metavar="BINARY | DIR",
    type=Path,
    help="path to objdiff-cli binary or source (optional)",
)
parser.add_argument(
    "--sjiswrap",
    metavar="EXE",
    type=Path,
    help="path to sjiswrap.exe (optional)",
)
parser.add_argument(
    "--ninja",
    metavar="BINARY",
    type=Path,
    help="path to ninja binary (optional)",
)
parser.add_argument(
    "--verbose",
    action="store_true",
    help="print verbose output",
)
parser.add_argument(
    "--non-matching",
    dest="non_matching",
    action="store_true",
    help="builds equivalent (but non-matching) or modded objects",
)
parser.add_argument(
    "--warn",
    dest="warn",
    type=str,
    choices=["all", "off", "error"],
    help="how to handle warnings",
)
parser.add_argument(
    "--no-progress",
    dest="progress",
    action="store_false",
    help="disable progress calculation",
)
args = parser.parse_args()

config = ProjectConfig()
config.version = str(args.version)
version_num = VERSIONS.index(config.version)

# Apply arguments
config.build_dir = args.build_dir
config.dtk_path = args.dtk
config.objdiff_path = args.objdiff
config.binutils_path = args.binutils
config.compilers_path = args.compilers
config.generate_map = args.map
config.non_matching = args.non_matching
config.sjiswrap_path = args.sjiswrap
config.ninja_path = args.ninja
config.progress = args.progress
if not is_windows():
    config.wrapper = args.wrapper
# Don't build asm unless we're --non-matching
if not config.non_matching:
    config.asm_dir = None

# Tool versions
config.binutils_tag = "2.42-1"
config.compilers_tag = "20251015"
config.dtk_tag = "v1.8.3"
config.objdiff_tag = "v3.7.0"
config.sjiswrap_tag = "v1.2.2"
config.wibo_tag = "1.1.0"

# Project
ldscript_path = Path("config") / config.version / "ldscript.ld"
keep_list_path = Path("config") / config.version / "keep.lst"
config.config_path = Path("config") / config.version / "config.yml"
config.check_sha_path = Path("config") / config.version / "build.sha1"
config.asflags = [
    "-mgekko",
    "--strip-local-absolute",
    "-I include",
    f"-I build/{config.version}/include",
    f"--defsym BUILD_VERSION={version_num}",
]

config.ldflags = [
    "-strip-unused-data",
    "-keep",
    str(keep_list_path),
    "-report-unused",
    "-T",
    str(ldscript_path),
]

# Use for any additional files that should cause a re-configure when modified
config.reconfig_deps = []

# Optional numeric ID for decomp.me preset
# Can be overridden in libraries or objects
config.scratch_preset_id = None

dolphinsdk_root = "lib/dolphin"

cflags_base_mwcc = [
    "-nodefaults",
    "-proc gekko",
    "-align powerpc",
    "-enum int",
    "-fp hardware",
    "-Cpp_exceptions off",
    "-O4,p",
    "-inline auto",
    '-pragma "cats off"',
    '-pragma "warn_notinlined off"',
    "-maxerrors 1",
    "-nosyspath",
    "-RTTI off",
    "-fp_contract on",
    "-str reuse",
    "-D__GEKKO__",
    "-multibyte",  # For Wii compilers, replace with `-enc SJIS`
    f"-i build/{config.version}/include",
    f"-DBUILD_VERSION={version_num}",
    f"-DVERSION_{config.version}",
]

cflags_base_prodg = [
    "-O2",
    "-gdwarf+",
    "-DGEKKO",
    f"-I {dolphinsdk_root}/include",
    f"-I {dolphinsdk_root}/include/libc"
]

cflags_libc = [
    "-O2",
    "-DGEKKO",
    f"-I {dolphinsdk_root}/include",
    f"-I {dolphinsdk_root}/include/libc"
]

cflags_libsn = [
    "-O2",
    "-DGEKKO",
    f"-I {dolphinsdk_root}/include",
    f"-I {dolphinsdk_root}/include/libc"
]

# Debug flags
if args.debug:
    # Or -sym dwarf-2 for Wii compilers
    cflags_base_prodg.append("-DDEBUG=1")
else:
    cflags_base_prodg.append("-DNDEBUG=1")

# Warning flags
#if args.warn == "all":
#    cflags_base.append("-W all")
#elif args.warn == "off":
#    cflags_base.append("-W off")
#elif args.warn == "error":
#    cflags_base.append("-W error")

cflags_runtime = [*cflags_base_mwcc]

cflags_dolphin = [
    *cflags_base_mwcc,
    f"-i {dolphinsdk_root}/include",
    f"-i {dolphinsdk_root}/include/libc",
    "-char unsigned",
    "-warn pragmas",
    "-requireprotos",
    "-DSDK_REVISION=2",
    "-DSDK_YEAR=2003",
    f"-ir {dolphinsdk_root}/src"
]

cflags_babel = [
    *cflags_base_prodg,
    "-I src/Babel/Common/Include",
    "-I src/Babel/GameCube/Include"
]

cflags_flare = [
    *cflags_base_prodg,
    "-I src/Babel/Common/Include",
    "-I src/Flare/FlareEngine/Common/Include"
]

#cflags_runtime = [
#    *cflags_base,
#    "-use_lmw_stmw on",
#    "-str reuse,pool,readonly",
#    "-gccinc",
#    "-common off",
#    "-inline auto",
#]

config.linker_version = "ProDG/3.9.3"


# Helper function for Dolphin libraries
def DolphinLib(lib_name: str, objects: List[Object]) -> Dict[str, Any]:
    return {
        "lib": lib_name,
        "toolchain_version": "GC/1.2.5n",
        "cflags": cflags_dolphin,
        "progress_category": "sdk",
        "objects": objects,
        "src_dir": "lib"
    }


Matching = True                   # Object matches and should be linked
NonMatching = False               # Object does not match and should not be linked
Equivalent = config.non_matching  # Object should be linked when configured with --non-matching


# Object is only matching for specific versions
def MatchingFor(*versions):
    return config.version in versions


config.warn_missing_config = True
config.warn_missing_source = False
config.libs = [
    DolphinLib(
        "base",
        [
            Object(Matching, "dolphin/src/base/PPCArch.c"),
        ],
    ),
    DolphinLib(
        "os",
        [
            Object(Matching, "dolphin/src/os/__ppc_eabi_init.c"),
            Object(Matching, "dolphin/src/os/OS.c"),
            Object(Matching, "dolphin/src/os/OSError.c"),
            Object(Matching, "dolphin/src/os/OSInterrupt.c"),
            Object(Matching, "dolphin/src/os/OSAlarm.c"),
            Object(Matching, "dolphin/src/os/OSArena.c"),
            Object(Matching, "dolphin/src/os/OSAudioSystem.c"),
            Object(Matching, "dolphin/src/os/OSCache.c"),
            Object(Matching, "dolphin/src/os/OSContext.c"),
            Object(Matching, "dolphin/src/os/OSLink.c"),
            Object(Matching, "dolphin/src/os/OSMemory.c"),
            Object(NonMatching, "dolphin/src/os/OSReset.c"),
            Object(Matching, "dolphin/src/os/OSResetSW.c"),
            Object(Matching, "dolphin/src/os/OSRtc.c"),
            Object(Matching, "dolphin/src/os/OSSync.c"),
            Object(Matching, "dolphin/src/os/OSThread.c"),
            Object(Matching, "dolphin/src/os/OSTime.c"),
            Object(Matching, "dolphin/src/os/OSMutex.c"),
            Object(NonMatching, "dolphin/src/os/OSReboot.c"),
            Object(Matching, "dolphin/src/os/OSAlloc.c"),
            Object(NonMatching, "dolphin/src/os/OSFont.c"),
            Object(NonMatching, "dolphin/src/os/OSMessage.c"),
        ],
    ),
    DolphinLib(
        "dvd",
        [
            Object(NonMatching, "dolphin/src/dvd/dvd.c"),
            Object(NonMatching, "dolphin/src/dvd/dvdfs.c"),
            Object(Matching, "dolphin/src/dvd/dvdqueue.c"),
            Object(NonMatching, "dolphin/src/dvd/dvderror.c"),
            Object(NonMatching, "dolphin/src/dvd/dvdidutils.c"),
            Object(NonMatching, "dolphin/src/dvd/dvdFatal.c"),
            Object(NonMatching, "dolphin/src/dvd/fstload.c"),
            Object(Matching, "dolphin/src/dvd/dvdlow.c"),
        ]
    ),
    DolphinLib(
        "vi",
        [
            Object(NonMatching, "dolphin/src/vi/vi.c"),
        ]
    ),
    DolphinLib(
        "pad",
        [
            Object(Matching, "dolphin/src/pad/Pad.c"),
            Object(NonMatching, "dolphin/src/pad/Padclamp.c"),
        ]
    ),
    DolphinLib(
        "gx",
        [
            Object(NonMatching, "dolphin/src/gx/GXInit.c"),
            Object(NonMatching, "dolphin/src/gx/GXFifo.c"),
            Object(NonMatching, "dolphin/src/gx/GXAttr.c"),
            Object(NonMatching, "dolphin/src/gx/GXMisc.c"),
            Object(NonMatching, "dolphin/src/gx/GXGeometry.c"),
            Object(NonMatching, "dolphin/src/gx/GXFrameBuf.c"),
            Object(NonMatching, "dolphin/src/gx/GXLight.c"),
            Object(NonMatching, "dolphin/src/gx/GXTexture.c"),
            Object(NonMatching, "dolphin/src/gx/GXBump.c"),
            Object(NonMatching, "dolphin/src/gx/GXTev.c"),
            Object(NonMatching, "dolphin/src/gx/GXPixel.c"),
            Object(NonMatching, "dolphin/src/gx/GXDisplayList.c"),
            Object(NonMatching, "dolphin/src/gx/GXTransform.c"),
            Object(NonMatching, "dolphin/src/gx/GXPerf.c"),
        ]
    ),
    DolphinLib(
        "gd",
        [
            Object(NonMatching, "dolphin/src/gd/GDBase.c"),
            Object(NonMatching, "dolphin/src/gd/GDTexture.c"),
        ]
    ),
    {
        "lib": "libc",
        "cflags": cflags_libc,
        "progress_category": "sdk",
        "objects": [
            Object(NonMatching, "libc/src/vfscanf.c"),
            Object(NonMatching, "libc/src/sscanf.c"),
            Object(NonMatching, "libc/src/vsprintf.c"),
            Object(NonMatching, "libc/src/ctype_.c"),
            Object(NonMatching, "libc/src/locale.c"),
            Object(NonMatching, "libc/src/ctype-info.c"),
            Object(NonMatching, "libc/src/C-ctype.c"),
        ],
        "src_dir": "lib"
    },
    {
        "lib": "libsn",
        "cflags": cflags_libsn,
        "progress_category": "sdk",
        "objects": [
            Object(Matching, "libsn/src/crt0.s"),
            Object(NonMatching, "libsn/src/ppcdown.s"),
            Object(NonMatching, "libsn/src/dummy.c"),
            Object(NonMatching, "libsn/src/fileserver.c"),
        ],
        "src_dir": "lib"
    },
    {
        "lib": "Babel",
        "cflags": cflags_babel,
        "progress_category": "babel",
        "objects": [
            Object(NonMatching, "Units/gamesave.cpp"),
            Object(NonMatching, "Units/savemenu.cpp"),
            Object(NonMatching, "Units/gcSave.cpp"),
            Object(NonMatching, "Units/heap.cpp"),
            Object(NonMatching, "Units/bKernelSourceFiles.cpp"),
            Object(NonMatching, "Units/bActorSourceFiles.cpp"),
            Object(NonMatching, "Units/bCollisionSourceFiles.cpp"),
            Object(NonMatching, "Units/bDisplaySourceFiles.cpp"),
            Object(NonMatching, "Units/bInputSourceFiles.cpp"),
            Object(NonMatching, "Units/bMathsSourceFiles.cpp"),
            Object(NonMatching, "Units/bSoundSourceFiles.cpp"),
        ]
    },
    {
        "lib": "Flare",
        "cflags": cflags_flare,
        "progress_category": "flare",
        "objects": [
            Object(NonMatching, "Units/core.cpp"),
            Object(NonMatching, "Units/feCoreSourceFiles.cpp"),
            Object(NonMatching, "Units/fEffectsSourceFiles.cpp"),
            Object(NonMatching, "Units/CFSystemGamecube.cpp"),
            Object(NonMatching, "Units/frRuntimeSourceFiles.cpp"),
        ]
    },
    {
        "lib": "PMA",
        "cflags": cflags_flare,
        "progress_category": "game",
        "objects": [
            Object(NonMatching, "Units/Main.cpp"),
            Object(NonMatching, "Units/PMASourceFiles.cpp"),
        ]
    }
]


# Optional callback to adjust link order. This can be used to add, remove, or reorder objects.
# This is called once per module, with the module ID and the current link order.
#
# For example, this adds "dummy.c" to the end of the DOL link order if configured with --non-matching.
# "dummy.c" *must* be configured as a Matching (or Equivalent) object in order to be linked.
def link_order_callback(module_id: int, objects: List[str]) -> List[str]:
    # Don't modify the link order for matching builds
    if not config.non_matching:
        return objects
    if module_id == 0:  # DOL
        return objects + ["dummy.c"]
    return objects


# Uncomment to enable the link order callback.
# config.link_order_callback = link_order_callback


# Optional extra categories for progress tracking
# Adjust as desired for your project
config.progress_categories = [
    ProgressCategory("sdk", "SDK Code"),
    ProgressCategory("babel", "Babel (Low-level Engine)"),
    ProgressCategory("flare", "Flare (High-level Engine)"),
    ProgressCategory("game", "Game Code"),
]
config.progress_each_module = args.verbose
# Optional extra arguments to `objdiff-cli report generate`
config.progress_report_args = [
    # Marks relocations as mismatching if the target value is different
    # Default is "functionRelocDiffs=none", which is most lenient
    # "--config functionRelocDiffs=data_value",
]

if args.mode == "configure":
    # Write build.ninja and objdiff.json
    generate_build(config)
elif args.mode == "progress":
    # Print progress information
    calculate_progress(config)
else:
    sys.exit("Unknown mode: " + args.mode)
