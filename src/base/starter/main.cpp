#include <windows.h>

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
    switch (ul_reason_for_call) {
        case DLL_PROCESS_ATTACH:
            // INIT
            break;
        case DLL_PROCESS_DETACH:
            // DESTRUCT
            break;
    }
    return true;
}

extern "C" __declspec(dllexport) void __stdcall RVExtension(char *output, int outputSize, const char *function);

void __stdcall RVExtension(char *output, int outputSize, const char *function) {
    strncpy_s(output, outputSize, "IT WORKS!", _TRUNCATE);
};