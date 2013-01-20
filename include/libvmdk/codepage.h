/*
 * Codepage definitions for libvmdk
 *
 * Copyright (c) 2009-2013, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _LIBVMDK_CODEPAGE_H )
#define _LIBVMDK_CODEPAGE_H

#include <libvmdk/types.h>

#if defined( __cplusplus )
extern "C" {
#endif

/* The codepage definitions
 */
enum LIBVMDK_CODEPAGE
{
	LIBVMDK_CODEPAGE_ASCII				= 20127,

	LIBVMDK_CODEPAGE_ISO_8859_1			= 28591,
	LIBVMDK_CODEPAGE_ISO_8859_2			= 28592,
	LIBVMDK_CODEPAGE_ISO_8859_3			= 28593,
	LIBVMDK_CODEPAGE_ISO_8859_4			= 28594,
	LIBVMDK_CODEPAGE_ISO_8859_5			= 28595,
	LIBVMDK_CODEPAGE_ISO_8859_6			= 28596,
	LIBVMDK_CODEPAGE_ISO_8859_7			= 28597,
	LIBVMDK_CODEPAGE_ISO_8859_8			= 28598,
	LIBVMDK_CODEPAGE_ISO_8859_9			= 28599,
	LIBVMDK_CODEPAGE_ISO_8859_10			= 28600,
	LIBVMDK_CODEPAGE_ISO_8859_11			= 28601,
	LIBVMDK_CODEPAGE_ISO_8859_13			= 28603,
	LIBVMDK_CODEPAGE_ISO_8859_14			= 28604,
	LIBVMDK_CODEPAGE_ISO_8859_15			= 28605,
	LIBVMDK_CODEPAGE_ISO_8859_16			= 28606,

	LIBVMDK_CODEPAGE_KOI8_R				= 20866,
	LIBVMDK_CODEPAGE_KOI8_U				= 21866,

	LIBVMDK_CODEPAGE_WINDOWS_874			= 874,
	LIBVMDK_CODEPAGE_WINDOWS_932			= 932,
	LIBVMDK_CODEPAGE_WINDOWS_936			= 936,
	LIBVMDK_CODEPAGE_WINDOWS_949			= 949,
	LIBVMDK_CODEPAGE_WINDOWS_950			= 950,
	LIBVMDK_CODEPAGE_WINDOWS_1250			= 1250,
	LIBVMDK_CODEPAGE_WINDOWS_1251			= 1251,
	LIBVMDK_CODEPAGE_WINDOWS_1252			= 1252,
	LIBVMDK_CODEPAGE_WINDOWS_1253			= 1253,
	LIBVMDK_CODEPAGE_WINDOWS_1254			= 1254,
	LIBVMDK_CODEPAGE_WINDOWS_1255			= 1255,
	LIBVMDK_CODEPAGE_WINDOWS_1256			= 1256,
	LIBVMDK_CODEPAGE_WINDOWS_1257			= 1257,
	LIBVMDK_CODEPAGE_WINDOWS_1258			= 1258
};

#define LIBVMDK_CODEPAGE_US_ASCII			LIBVMDK_CODEPAGE_ASCII

#define LIBVMDK_CODEPAGE_ISO_WESTERN_EUROPEAN		LIBVMDK_CODEPAGE_ISO_8859_1
#define LIBVMDK_CODEPAGE_ISO_CENTRAL_EUROPEAN		LIBVMDK_CODEPAGE_ISO_8859_2
#define LIBVMDK_CODEPAGE_ISO_SOUTH_EUROPEAN		LIBVMDK_CODEPAGE_ISO_8859_3
#define LIBVMDK_CODEPAGE_ISO_NORTH_EUROPEAN		LIBVMDK_CODEPAGE_ISO_8859_4
#define LIBVMDK_CODEPAGE_ISO_CYRILLIC			LIBVMDK_CODEPAGE_ISO_8859_5
#define LIBVMDK_CODEPAGE_ISO_ARABIC			LIBVMDK_CODEPAGE_ISO_8859_6
#define LIBVMDK_CODEPAGE_ISO_GREEK			LIBVMDK_CODEPAGE_ISO_8859_7
#define LIBVMDK_CODEPAGE_ISO_HEBREW			LIBVMDK_CODEPAGE_ISO_8859_8
#define LIBVMDK_CODEPAGE_ISO_TURKISH			LIBVMDK_CODEPAGE_ISO_8859_9
#define LIBVMDK_CODEPAGE_ISO_NORDIC			LIBVMDK_CODEPAGE_ISO_8859_10
#define LIBVMDK_CODEPAGE_ISO_THAI			LIBVMDK_CODEPAGE_ISO_8859_11
#define LIBVMDK_CODEPAGE_ISO_BALTIC			LIBVMDK_CODEPAGE_ISO_8859_13
#define LIBVMDK_CODEPAGE_ISO_CELTIC			LIBVMDK_CODEPAGE_ISO_8859_14

#define LIBVMDK_CODEPAGE_ISO_LATIN_1			LIBVMDK_CODEPAGE_ISO_8859_1
#define LIBVMDK_CODEPAGE_ISO_LATIN_2			LIBVMDK_CODEPAGE_ISO_8859_2
#define LIBVMDK_CODEPAGE_ISO_LATIN_3			LIBVMDK_CODEPAGE_ISO_8859_3
#define LIBVMDK_CODEPAGE_ISO_LATIN_4			LIBVMDK_CODEPAGE_ISO_8859_4
#define LIBVMDK_CODEPAGE_ISO_LATIN_5			LIBVMDK_CODEPAGE_ISO_8859_9
#define LIBVMDK_CODEPAGE_ISO_LATIN_6			LIBVMDK_CODEPAGE_ISO_8859_10
#define LIBVMDK_CODEPAGE_ISO_LATIN_7			LIBVMDK_CODEPAGE_ISO_8859_13
#define LIBVMDK_CODEPAGE_ISO_LATIN_8			LIBVMDK_CODEPAGE_ISO_8859_14
#define LIBVMDK_CODEPAGE_ISO_LATIN_9			LIBVMDK_CODEPAGE_ISO_8859_15
#define LIBVMDK_CODEPAGE_ISO_LATIN_10			LIBVMDK_CODEPAGE_ISO_8859_16

#define LIBVMDK_CODEPAGE_KOI8_RUSSIAN			LIBVMDK_CODEPAGE_KOI8_R
#define LIBVMDK_CODEPAGE_KOI8_UKRAINIAN			LIBVMDK_CODEPAGE_KOI8_U

#define LIBVMDK_CODEPAGE_WINDOWS_THAI			LIBVMDK_CODEPAGE_WINDOWS_874
#define LIBVMDK_CODEPAGE_WINDOWS_JAPANESE		LIBVMDK_CODEPAGE_WINDOWS_932
#define LIBVMDK_CODEPAGE_WINDOWS_CHINESE_SIMPLIFIED	LIBVMDK_CODEPAGE_WINDOWS_936
#define LIBVMDK_CODEPAGE_WINDOWS_KOREAN			LIBVMDK_CODEPAGE_WINDOWS_949
#define LIBVMDK_CODEPAGE_WINDOWS_CHINESE_TRADITIONAL	LIBVMDK_CODEPAGE_WINDOWS_950
#define LIBVMDK_CODEPAGE_WINDOWS_CENTRAL_EUROPEAN	LIBVMDK_CODEPAGE_WINDOWS_1250
#define LIBVMDK_CODEPAGE_WINDOWS_CYRILLIC		LIBVMDK_CODEPAGE_WINDOWS_1251
#define LIBVMDK_CODEPAGE_WINDOWS_WESTERN_EUROPEAN	LIBVMDK_CODEPAGE_WINDOWS_1252
#define LIBVMDK_CODEPAGE_WINDOWS_GREEK			LIBVMDK_CODEPAGE_WINDOWS_1253
#define LIBVMDK_CODEPAGE_WINDOWS_TURKISH		LIBVMDK_CODEPAGE_WINDOWS_1254
#define LIBVMDK_CODEPAGE_WINDOWS_HEBREW			LIBVMDK_CODEPAGE_WINDOWS_1255
#define LIBVMDK_CODEPAGE_WINDOWS_ARABIC			LIBVMDK_CODEPAGE_WINDOWS_1256
#define LIBVMDK_CODEPAGE_WINDOWS_BALTIC			LIBVMDK_CODEPAGE_WINDOWS_1257
#define LIBVMDK_CODEPAGE_WINDOWS_VIETNAMESE		LIBVMDK_CODEPAGE_WINDOWS_1258

#if defined( __cplusplus )
}
#endif

#endif

