//===============================================================================================//
// Copyright (c) 2009, Stephen Fewer of Harmony Security (www.harmonysecurity.com)
// All rights reserved.
// 
// Redistribution and use in source and binary forms, with or without modification, are permitted 
// provided that the following conditions are met:
// 
//     * Redistributions of source code must retain the above copyright notice, this list of 
// conditions and the following disclaimer.
// 
//     * Redistributions in binary form must reproduce the above copyright notice, this list of 
// conditions and the following disclaimer in the documentation and/or other materials provided 
// with the distribution.
// 
//     * Neither the name of Harmony Security nor the names of its contributors may be used to
// endorse or promote products derived from this software without specific prior written permission.
	// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR 
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
// FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR 
// CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR 
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR 
// SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY 
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR 
// OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE 
// POSSIBILITY OF SUCH DAMAGE.
//===============================================================================================//
#ifndef _METERPRETER_SOURCE_REFLECTIVEDLLINJECTION_REFLECTIVELOADER_H
#define _METERPRETER_SOURCE_REFLECTIVEDLLINJECTION_REFLECTIVELOADER_H
//===============================================================================================//
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <Winsock2.h>
#include <intrin.h>

#include "ReflectiveDLLInjection.h"
HMODULE WINAPI ReflectivelyLoadLibraryA( PCHAR libName );
HMODULE WINAPI ReflectivelyLoadLibbuf( PVOID libBuf, PCHAR libName );

typedef HMODULE (WINAPI * LOADLIBRARYA)( LPCSTR );
typedef FARPROC (WINAPI * GETPROCADDRESS)( HMODULE, LPCSTR );

typedef struct
{
	WORD	offset:12;
	WORD	type:4;
} IMAGE_RELOC, *PIMAGE_RELOC;
//===============================================================================================//
#endif
//===============================================================================================//
