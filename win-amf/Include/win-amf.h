/*
	MIT License

	Copyright (c) 2016 Michael Fabian Dirks

	Permission is hereby granted, free of charge, to any person obtaining a copy
	of this software and associated documentation files (the "Software"), to deal
	in the Software without restriction, including without limitation the rights
	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
	copies of the Software, and to permit persons to whom the Software is
	furnished to do so, subject to the following conditions:

	The above copyright notice and this permission notice shall be included in all
	copies or substantial portions of the Software.

	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
	SOFTWARE.
*/

#pragma once
//////////////////////////////////////////////////////////////////////////
// Includes
//////////////////////////////////////////////////////////////////////////
#include "windows.h"

#include "OBS-Studio/libobs/obs-module.h"

//////////////////////////////////////////////////////////////////////////
// Defines
//////////////////////////////////////////////////////////////////////////
#define PLUGIN_VERSION "1.2.0pre2"

#define AMF_LOG(level, format, ...) \
    blog(level, "[AMF Encoder " PLUGIN_VERSION"] " format, ##__VA_ARGS__)
#define AMF_LOG_ERROR(format, ...)   AMF_LOG(LOG_ERROR,   format, ##__VA_ARGS__)
#define AMF_LOG_WARNING(format, ...) AMF_LOG(LOG_WARNING, format, ##__VA_ARGS__)
#define AMF_LOG_INFO(format, ...)    AMF_LOG(LOG_INFO,    format, ##__VA_ARGS__)
#define AMF_LOG_DEBUG(format, ...)   AMF_LOG(LOG_DEBUG,   format, ##__VA_ARGS__)

#define AMF_TEXT(x) ("AMF." ## x)
#define AMF_TEXT_T(x) obs_module_text(AMF_TEXT(x))

//////////////////////////////////////////////////////////////////////////
// Code
//////////////////////////////////////////////////////////////////////////
BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved);
MODULE_EXPORT bool obs_module_load(void);
MODULE_EXPORT void obs_module_unload(void);
MODULE_EXPORT const char *obs_module_name();
MODULE_EXPORT const char *obs_module_description();