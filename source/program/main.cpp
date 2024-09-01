#include "lib.hpp"

#include "game_check.hpp"

HOOK_DEFINE_TRAMPOLINE(Social_XboxLiveIdentity_isSignInInProgressHook) {
    static bool Callback(void* _this) {
        return false;
    }
};

HOOK_DEFINE_TRAMPOLINE(Social_XboxLiveUser_isInitialSignInCompleteHook) {
    static bool Callback(void* _this) {
        return true;
    }
};

extern "C" void exl_main(void* x0, void* x1) {
    exl::hook::Initialize();

    if (is_version("1.21.20") || is_version("1.21.21")) {
        Social_XboxLiveIdentity_isSignInInProgressHook::InstallAtOffset(0x23415B0);
        Social_XboxLiveUser_isInitialSignInCompleteHook::InstallAtOffset(0x265B348);
    }
    else if (is_version("1.21.22")) {
        Social_XboxLiveIdentity_isSignInInProgressHook::InstallAtOffset(0x23416E0);
        Social_XboxLiveUser_isInitialSignInCompleteHook::InstallAtOffset(0x265B518);
    }
}

extern "C" NORETURN void exl_exception_entry() {
    EXL_ABORT(0x420);
}