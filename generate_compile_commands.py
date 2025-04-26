import os
import subprocess

current_dir = os.path.dirname(os.path.abspath(__file__))
build_dir = os.path.join(current_dir, "build")

command = f'vs_export.exe -c "Release|x64" -s "{os.path.join(build_dir, "OblivionPlugins.sln")}"'
os.system(command)

compile_commands_file = os.path.join(current_dir, "compile_commands.json")

content = ""
with open(compile_commands_file, "r") as f:
    content = f.read()
    content = content.replace("clang-cl.exe", "clangd.exe -std=c++23").replace(
        r"-ID:\\dev\\obliviondev\\common\\include", r"-ID:\\dev\\obliviondev\\common\\include -ID:\\dev\\obliviondev\\build\\vcpkg_installed\\x64-windows-static\\include")

with open(compile_commands_file, "w") as f:
    f.write(content)


'''
[
    {
        "directory": "d:\\dev\\obliviondev\\build\\plugins\\BundleDLCUnlocker",
        "command": "clangd.exe -std=c++23 -DWIN32 -D_WINDOWS -DNDEBUG -D_CRT_SECURE_NO_WARNINGS -DSPDLOG_FMT_EXTERNAL -DCMAKE_INTDIR=\"Release\" -DBundleDLCUnlocker_EXPORTS  -ID:\\dev\\obliviondev\\plugins\\BundleDLCUnlocker\\include -ID:\\dev\\obliviondev\\plugins\\BundleDLCUnlocker\\include\\safetyhook -ID:\\dev\\obliviondev\\plugins\\BundleDLCUnlocker\\src -ID:\\dev\\obliviondev\\plugins\\BundleDLCUnlocker\\src\\safetyhook -ID:\\dev\\obliviondev\\common\\include -ID:\\dev\\obliviondev\\common\\include\\sol2\\single\\include -ID:\\dev\\obliviondev\\common\\include\\common -ID:\\dev\\obliviondev\\build\\vcpkg_installed\\x64-windows-static\\include -I.  -c D:\\dev\\obliviondev\\plugins\\BundleDLCUnlocker\\main.cpp",
        "file": "D:\\dev\\obliviondev\\plugins\\BundleDLCUnlocker\\main.cpp"
    },
    {
        "directory": "d:\\dev\\obliviondev\\build\\plugins\\HighlightCrossFlatformPlayer",
        "command": "clangd.exe -std=c++23 -DWIN32 -D_WINDOWS -DNDEBUG -D_CRT_SECURE_NO_WARNINGS -DSPDLOG_FMT_EXTERNAL -DCMAKE_INTDIR=\"Release\" -DHighlightCrossFlatformPlayer_EXPORTS  -ID:\\dev\\obliviondev\\plugins\\HighlightCrossFlatformPlayer\\include -ID:\\dev\\obliviondev\\plugins\\HighlightCrossFlatformPlayer\\include\\safetyhook -ID:\\dev\\obliviondev\\plugins\\HighlightCrossFlatformPlayer\\src -ID:\\dev\\obliviondev\\plugins\\HighlightCrossFlatformPlayer\\src\\safetyhook -ID:\\dev\\obliviondev\\common\\include -ID:\\dev\\obliviondev\\common\\include\\sol2\\single\\include -ID:\\dev\\obliviondev\\common\\include\\common -ID:\\dev\\obliviondev\\build\\vcpkg_installed\\x64-windows-static\\include -I.  -c D:\\dev\\obliviondev\\plugins\\HighlightCrossFlatformPlayer\\main.cpp",
        "file": "D:\\dev\\obliviondev\\plugins\\HighlightCrossFlatformPlayer\\main.cpp"
    },
    {
        "directory": "d:\\dev\\obliviondev\\build\\plugins\\HighlightMonsterScar",
        "command": "clangd.exe -std=c++23 -DWIN32 -D_WINDOWS -DNDEBUG -D_CRT_SECURE_NO_WARNINGS -DSPDLOG_FMT_EXTERNAL -DCMAKE_INTDIR=\"Release\" -DHighlightMonsterScar_EXPORTS  -ID:\\dev\\obliviondev\\plugins\\HighlightMonsterScar\\include -ID:\\dev\\obliviondev\\plugins\\HighlightMonsterScar\\include\\safetyhook -ID:\\dev\\obliviondev\\plugins\\HighlightMonsterScar\\src -ID:\\dev\\obliviondev\\plugins\\HighlightMonsterScar\\src\\safetyhook -ID:\\dev\\obliviondev\\common\\include -ID:\\dev\\obliviondev\\common\\include\\sol2\\single\\include -ID:\\dev\\obliviondev\\common\\include\\common -ID:\\dev\\obliviondev\\build\\vcpkg_installed\\x64-windows-static\\include -I.  -c D:\\dev\\obliviondev\\plugins\\HighlightMonsterScar\\main.cpp",
        "file": "D:\\dev\\obliviondev\\plugins\\HighlightMonsterScar\\main.cpp"
    },
    {
        "directory": "d:\\dev\\obliviondev\\build\\plugins\\InstantCampRebuild",
        "command": "clangd.exe -std=c++23 -DWIN32 -D_WINDOWS -DNDEBUG -D_CRT_SECURE_NO_WARNINGS -DSPDLOG_FMT_EXTERNAL -DCMAKE_INTDIR=\"Release\" -DInstantCampRebuild_EXPORTS  -ID:\\dev\\obliviondev\\plugins\\InstantCampRebuild\\include -ID:\\dev\\obliviondev\\plugins\\InstantCampRebuild\\include\\safetyhook -ID:\\dev\\obliviondev\\plugins\\InstantCampRebuild\\src -ID:\\dev\\obliviondev\\plugins\\InstantCampRebuild\\src\\safetyhook -ID:\\dev\\obliviondev\\common\\include -ID:\\dev\\obliviondev\\common\\include\\sol2\\single\\include -ID:\\dev\\obliviondev\\common\\include\\common -ID:\\dev\\obliviondev\\build\\vcpkg_installed\\x64-windows-static\\include -I.  -c D:\\dev\\obliviondev\\plugins\\InstantCampRebuild\\main.cpp",
        "file": "D:\\dev\\obliviondev\\plugins\\InstantCampRebuild\\main.cpp"
    },
    {
        "directory": "d:\\dev\\obliviondev\\build\\plugins\\PersistentEventQuest",
        "command": "clangd.exe -std=c++23 -DWIN32 -D_WINDOWS -DNDEBUG -D_CRT_SECURE_NO_WARNINGS -DSPDLOG_FMT_EXTERNAL -DCMAKE_INTDIR=\"Release\" -DPersistentEventQuest_EXPORTS  -ID:\\dev\\obliviondev\\plugins\\PersistentEventQuest\\include -ID:\\dev\\obliviondev\\plugins\\PersistentEventQuest\\include\\safetyhook -ID:\\dev\\obliviondev\\plugins\\PersistentEventQuest\\src -ID:\\dev\\obliviondev\\plugins\\PersistentEventQuest\\src\\safetyhook -ID:\\dev\\obliviondev\\common\\include -ID:\\dev\\obliviondev\\common\\include\\sol2\\single\\include -ID:\\dev\\obliviondev\\common\\include\\common -ID:\\dev\\obliviondev\\build\\vcpkg_installed\\x64-windows-static\\include -I.  -c D:\\dev\\obliviondev\\plugins\\PersistentEventQuest\\main.cpp",
        "file": "D:\\dev\\obliviondev\\plugins\\PersistentEventQuest\\main.cpp"
    },
    {
        "directory": "d:\\dev\\obliviondev\\build\\common",
        "command": "clangd.exe -std=c++23 -DWIN32 -D_WINDOWS -DNDEBUG -D_CRT_SECURE_NO_WARNINGS -DSPDLOG_FMT_EXTERNAL -DCMAKE_INTDIR=\"Release\"  -ID:\\dev\\obliviondev\\common\\include -ID:\\dev\\obliviondev\\common\\include\\sol2\\single\\include -ID:\\dev\\obliviondev\\common\\src -I.  -c D:\\dev\\obliviondev\\common\\src\\BranchTrampoline.cpp",
        "file": "D:\\dev\\obliviondev\\common\\src\\BranchTrampoline.cpp"
    },
    {
        "directory": "d:\\dev\\obliviondev\\build\\common",
        "command": "clangd.exe -std=c++23 -DWIN32 -D_WINDOWS -DNDEBUG -D_CRT_SECURE_NO_WARNINGS -DSPDLOG_FMT_EXTERNAL -DCMAKE_INTDIR=\"Release\"  -ID:\\dev\\obliviondev\\common\\include -ID:\\dev\\obliviondev\\common\\include\\sol2\\single\\include -ID:\\dev\\obliviondev\\common\\src -I.  -c D:\\dev\\obliviondev\\common\\src\\FileUtils.cpp",
        "file": "D:\\dev\\obliviondev\\common\\src\\FileUtils.cpp"
    },
    {
        "directory": "d:\\dev\\obliviondev\\build\\common",
        "command": "clangd.exe -std=c++23 -DWIN32 -D_WINDOWS -DNDEBUG -D_CRT_SECURE_NO_WARNINGS -DSPDLOG_FMT_EXTERNAL -DCMAKE_INTDIR=\"Release\"  -ID:\\dev\\obliviondev\\common\\include -ID:\\dev\\obliviondev\\common\\include\\sol2\\single\\include -ID:\\dev\\obliviondev\\common\\src -I.  -c D:\\dev\\obliviondev\\common\\src\\GameTypes.cpp",
        "file": "D:\\dev\\obliviondev\\common\\src\\GameTypes.cpp"
    },
    {
        "directory": "d:\\dev\\obliviondev\\build\\common",
        "command": "clangd.exe -std=c++23 -DWIN32 -D_WINDOWS -DNDEBUG -D_CRT_SECURE_NO_WARNINGS -DSPDLOG_FMT_EXTERNAL -DCMAKE_INTDIR=\"Release\"  -ID:\\dev\\obliviondev\\common\\include -ID:\\dev\\obliviondev\\common\\include\\sol2\\single\\include -ID:\\dev\\obliviondev\\common\\src -I.  -c D:\\dev\\obliviondev\\common\\src\\HookUtils.cpp",
        "file": "D:\\dev\\obliviondev\\common\\src\\HookUtils.cpp"
    },
    {
        "directory": "d:\\dev\\obliviondev\\build\\common",
        "command": "clangd.exe -std=c++23 -DWIN32 -D_WINDOWS -DNDEBUG -D_CRT_SECURE_NO_WARNINGS -DSPDLOG_FMT_EXTERNAL -DCMAKE_INTDIR=\"Release\"  -ID:\\dev\\obliviondev\\common\\include -ID:\\dev\\obliviondev\\common\\include\\sol2\\single\\include -ID:\\dev\\obliviondev\\common\\src -I.  -c D:\\dev\\obliviondev\\common\\src\\LightningScanner\\Avx2.cpp",
        "file": "D:\\dev\\obliviondev\\common\\src\\LightningScanner\\Avx2.cpp"
    },
    {
        "directory": "d:\\dev\\obliviondev\\build\\common",
        "command": "clangd.exe -std=c++23 -DWIN32 -D_WINDOWS -DNDEBUG -D_CRT_SECURE_NO_WARNINGS -DSPDLOG_FMT_EXTERNAL -DCMAKE_INTDIR=\"Release\"  -ID:\\dev\\obliviondev\\common\\include -ID:\\dev\\obliviondev\\common\\include\\sol2\\single\\include -ID:\\dev\\obliviondev\\common\\src -I.  -c D:\\dev\\obliviondev\\common\\src\\LightningScanner\\CpuInfo.cpp",
        "file": "D:\\dev\\obliviondev\\common\\src\\LightningScanner\\CpuInfo.cpp"
    },
    {
        "directory": "d:\\dev\\obliviondev\\build\\common",
        "command": "clangd.exe -std=c++23 -DWIN32 -D_WINDOWS -DNDEBUG -D_CRT_SECURE_NO_WARNINGS -DSPDLOG_FMT_EXTERNAL -DCMAKE_INTDIR=\"Release\"  -ID:\\dev\\obliviondev\\common\\include -ID:\\dev\\obliviondev\\common\\include\\sol2\\single\\include -ID:\\dev\\obliviondev\\common\\src -I.  -c D:\\dev\\obliviondev\\common\\src\\LightningScanner\\Scalar.cpp",
        "file": "D:\\dev\\obliviondev\\common\\src\\LightningScanner\\Scalar.cpp"
    },
    {
        "directory": "d:\\dev\\obliviondev\\build\\common",
        "command": "clangd.exe -std=c++23 -DWIN32 -D_WINDOWS -DNDEBUG -D_CRT_SECURE_NO_WARNINGS -DSPDLOG_FMT_EXTERNAL -DCMAKE_INTDIR=\"Release\"  -ID:\\dev\\obliviondev\\common\\include -ID:\\dev\\obliviondev\\common\\include\\sol2\\single\\include -ID:\\dev\\obliviondev\\common\\src -I.  -c D:\\dev\\obliviondev\\common\\src\\LightningScanner\\Sse42.cpp",
        "file": "D:\\dev\\obliviondev\\common\\src\\LightningScanner\\Sse42.cpp"
    },
    {
        "directory": "d:\\dev\\obliviondev\\build\\common",
        "command": "clangd.exe -std=c++23 -DWIN32 -D_WINDOWS -DNDEBUG -D_CRT_SECURE_NO_WARNINGS -DSPDLOG_FMT_EXTERNAL -DCMAKE_INTDIR=\"Release\"  -ID:\\dev\\obliviondev\\common\\include -ID:\\dev\\obliviondev\\common\\include\\sol2\\single\\include -ID:\\dev\\obliviondev\\common\\src -I.  -c D:\\dev\\obliviondev\\common\\src\\LogUtils.cpp",
        "file": "D:\\dev\\obliviondev\\common\\src\\LogUtils.cpp"
    },
    {
        "directory": "d:\\dev\\obliviondev\\build\\common",
        "command": "clangd.exe -std=c++23 -DWIN32 -D_WINDOWS -DNDEBUG -D_CRT_SECURE_NO_WARNINGS -DSPDLOG_FMT_EXTERNAL -DCMAKE_INTDIR=\"Release\"  -ID:\\dev\\obliviondev\\common\\include -ID:\\dev\\obliviondev\\common\\include\\sol2\\single\\include -ID:\\dev\\obliviondev\\common\\src -I.  -c D:\\dev\\obliviondev\\common\\src\\Zydis.c",
        "file": "D:\\dev\\obliviondev\\common\\src\\Zydis.c"
    },
    {
        "directory": "d:\\dev\\obliviondev\\build\\common",
        "command": "clangd.exe -std=c++23 -DWIN32 -D_WINDOWS -DNDEBUG -D_CRT_SECURE_NO_WARNINGS -DSPDLOG_FMT_EXTERNAL -DCMAKE_INTDIR=\"Release\"  -ID:\\dev\\obliviondev\\common\\include -ID:\\dev\\obliviondev\\common\\include\\sol2\\single\\include -ID:\\dev\\obliviondev\\common\\src -I.  -c D:\\dev\\obliviondev\\common\\src\\safetyhook.cpp",
        "file": "D:\\dev\\obliviondev\\common\\src\\safetyhook.cpp"
    }
]
'''