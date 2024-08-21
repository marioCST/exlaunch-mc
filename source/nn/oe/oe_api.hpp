#pragma once

#include "oe_types.hpp"
#include "../set/set_types.hpp"

namespace nn::oe {

    void Initialize();
    nn::settings::LanguageCode GetDesiredLanguage();
    void GetDisplayVersion(DisplayVersion*);
    void GetDefaultDisplayResolution(u32 * width, u32 * height);

};
