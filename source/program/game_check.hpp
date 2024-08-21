#pragma once

#include "lib/nx/kernel/svc.h"
#include "nn/oe.hpp"
#include <string>
#include <cstring>

inline std::string get_version() {
    nn::oe::DisplayVersion display_version;
    nn::oe::GetDisplayVersion(&display_version);
    return display_version.name;
}

inline bool is_version(const char* version) {
    nn::oe::DisplayVersion display_version;
    nn::oe::GetDisplayVersion(&display_version);
    return strcmp(display_version.name, version) == 0;
}
