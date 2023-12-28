#!/usr/bin/env python
import os
import sys

env = SConscript("godot-cpp/SConstruct")

# For reference:
# - CCFLAGS are compilation flags shared between C and C++
# - CFLAGS are for C-specific compilation flags
# - CXXFLAGS are for C++-specific compilation flags
# - CPPFLAGS are for pre-processor flags
# - CPPDEFINES are for pre-processor defines
# - LINKFLAGS are for linking flags


# env_modules = __import__('env_modules')

# env_native_webview = env_modules.Clone()
# env_native_webview.disable_warnings()

# env_native_webview.add_source_files(env.modules_sources, "register_types.cpp")
# env_native_webview.add_source_files(env.modules_sources, "gdexample.cpp")

# tweak this if you want to use different folders, or more folders, to store your source code in.
env.Append(CPPPATH=["src/"])
sources = Glob("src/*.cpp")

if env["platform"] == "macos":
    env.Append(LINKFLAGS=["-framework", "WebKit"])
    # env.add_source_files(env.modules_sources, "webkit_demo.mm")

    # env_native_webview.add_source_files(env.modules_sources, "webkit_demo.mm")
    library = env.SharedLibrary(
        "demo/bin/libgdexample.{}.{}.framework/libgdexample.{}.{}".format(
            env["platform"], env["target"], env["platform"], env["target"]
        ),
        source=sources,
    )

else:
    library = env.SharedLibrary(
        "demo/bin/libgdexample{}{}".format(env["suffix"], env["SHLIBSUFFIX"]),
        source=sources,
    )

Default(library)
