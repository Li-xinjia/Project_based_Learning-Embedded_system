from os.path import isdir, join
Import("env")

TIVAWARE_DIR = join(env['PROJECT_DIR'], "../TivaWare_C_Series-1.0") # HAL directory
assert isdir(TIVAWARE_DIR)

env.Append(
    CPPDEFINES=[
        ("PART_TM4C123GE6PM", ""),
        ("TARGET_IS_BLIZZARD_RB1", ""),
        ("gcc", "")
    ],

    CCFLAGS=[
        "-mfpu=fpv4-sp-d16",
        "-mfloat-abi=hard",
        "-mabi=aapcs",
        "-MD",
        "-Wall",
        "--param",
        "max-inline-insns-single=500",
        "-std=c99"
    ],

    LINKFLAGS=[
        "-entry=ResetISR",
        "-Wl,--check-sections",
        "-Wl,--gc-sections",
        "-Wl,--unresolved-symbols=report-all",
        "-Wl,--warn-common",
        "-Wl,--warn-section-align",
        "-Tscripts/linker.ld", # linker script
        "-mfloat-abi=hard",
        "-mfpu=fpv4-sp-d16",
        "-fsingle-precision-constant"
    ],
    LIBS=["libc", "driverlib"],
    CPPPATH=[
        TIVAWARE_DIR,
        join(TIVAWARE_DIR, "inc"),
        join(TIVAWARE_DIR, "driverlib"),
        join(TIVAWARE_DIR, "utils"),
    ],
    LIBSOURCE_DIRS=[
        join(TIVAWARE_DIR, "driverlib")
    ]
)

libs = []
libs.append(
    env.BuildLibrary(
        join("$BUILD_DIR", "driverlib"), # library destination
        join(TIVAWARE_DIR, "driverlib"))) # library source

env.Prepend(LIBS=libs)
