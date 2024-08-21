/*
 * Copyright (c) Atmosphère-NX
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

namespace nn::settings {

    enum SetLanguage {
        SetLanguage_JA =    0,   ///< Japanese
        SetLanguage_ENUS =  1,   ///< US English ("AmericanEnglish")
        SetLanguage_FR =    2,   ///< French
        SetLanguage_DE =    3,   ///< German
        SetLanguage_IT =    4,   ///< Italian
        SetLanguage_ES =    5,   ///< Spanish
        SetLanguage_ZHCN =  6,   ///< Simplified Chinese ("Chinese")
        SetLanguage_KO =    7,   ///< Korean
        SetLanguage_NL =    8,   ///< Dutch
        SetLanguage_PT =    9,   ///< Portuguese
        SetLanguage_RU =    10,  ///< Russian
        SetLanguage_ZHTW =  11,  ///< Traditional Chinese ("Taiwanese")
        SetLanguage_ENGB =  12,  ///< GB English ("BritishEnglish")
        SetLanguage_FRCA =  13,  ///< CA French ("CanadianFrench")
        SetLanguage_ES419 = 14,  ///< "LatinAmericanSpanish"
        SetLanguage_ZHHANS = 15, ///< [4.0.0+] ChineseSimplified
        SetLanguage_ZHHANT = 16, ///< [4.0.0+] ChineseTraditional
        SetLanguage_PTBR   = 17, ///< [10.1.0+] "BrazilianPortuguese"
        SetLanguage_Total,       ///< Total languages supported by this enum.
    };

    struct LanguageCode { // https://switchbrew.org/wiki/Settings_services#LanguageCode
        char code[0x8];
    };

};
