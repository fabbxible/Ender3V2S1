/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

////////////////////////////
// VENDOR VERSION EXAMPLE //
////////////////////////////

/**
 * Marlin release version identifier
 */
#if ENABLED(ENDER3)
    #define var0 "Ender-3 Evo"
    #define var1 "e3"
#elif ENABLED(ENDER3MAX)
    #define var0 "Ender-3 Max"
    #define var1 "e3m"
#elif ENABLED(ENDER3V2)
    #define var0 "Ender-3 V2"
    #define var1 "e3v2"
#elif ENABLED(ENDER3S1)
    #define var0 "Ender-3 S1"
    #define var1 "e3s1"
#elif ENABLED(ENDER5)
    #define var0 "Ender-5 Evo"
    #define var1 "e5"
#elif ENABLED(ENDER2)
    #define var0 "Ender-2 Evo"
    #define var1 "e2"
#else
    #error "unknown machine selected."
#endif

#if MOTHERBOARD == BOARD_CREALITY_V4
    #define var2 "_422"
#elif MOTHERBOARD == BOARD_CREALITY_V427
    #define var2 "_427"
#elif MOTHERBOARD == BOARD_CREALITY_V423
    #define var2 "_423"
#else
    #error "unknown mainboard used."
#endif

#if ENABLED(BL)
    #define var3 "bl"
#else
    #define var3 ""
#endif

#if ENABLED(TI)
    #define var4 "ti"
#elif ENABLED(DG)
    #define var4 "dg"
#else
    #define var4 ""
#endif

#if ENABLED(AM)
    #define var5 "ht"
#else
    #define var5 ""
#endif

#define SHORT_BUILD_VERSION var1 var2 var3 var4 var5
/**
 * Verbose version identifier which should contain a reference to the location
 * from where the binary was downloaded or the source code was compiled.
 */
#define DETAILED_BUILD_VERSION SHORT_BUILD_VERSION "-Marlin 2.0.9.2"

/**
 * The STRING_DISTRIBUTION_DATE represents when the binary file was built,
 * here we define this default string as the date where the latest release
 * version was tagged.
 */
#define STRING_DISTRIBUTION_DATE __DATE__

//#define STRING_DISTRIBUTION_DATE __DATE__
//#define STRING_DISTRIBUTION_TIME __TIME__

/**
 * Defines a generic printer name to be output to the LCD after booting Marlin.
 */
#define DEFAULT_MACHINE_NAME var0
//#define MACHINE_NAME
/**
 * The SOURCE_CODE_URL is the location where users will find the Marlin Source
 * Code which is installed on the device. In most cases —unless the manufacturer
 * has a distinct Github fork— the Source Code URL should just be the main
 * Marlin repository.
 */
#define SOURCE_CODE_URL "fabbxible@gmail.com"

/**
 * Default generic printer UUID.
 */
//#define DEFAULT_MACHINE_UUID "cede2a2f-41a2-4748-9b12-c55c62f367ff"

/**
 * The WEBSITE_URL is the location where users can get more information such as
 * documentation about a specific Marlin release.
 */
#define WEBSITE_URL SOURCE_CODE_URL

/**
 * Set the vendor info the serial USB interface, if changable
 * Currently only supported by DUE platform
 */
//#define USB_DEVICE_VENDOR_ID           0x0000
//#define USB_DEVICE_PRODUCT_ID          0x0000
//#define USB_DEVICE_MANUFACTURE_NAME    WEBSITE_URL
