#ifndef HiPoLyMainHeaderH
#define HiPoLyMainHeaderH
//==============================================================================
//    Copyright 1998,1999,2000,2001,2005 Petr Kulhanek
//
//    This file is part of HiPoLy library.
//
//    This library is free software; you can redistribute it and/or
//    modify it under the terms of the GNU Lesser General Public
//    License as published by the Free Software Foundation; either
//    version 2.1 of the License, or (at your option) any later version.
//
//    This library is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
//    Lesser General Public License for more details.
//
//    You should have received a copy of the GNU Lesser General Public
//    License along with this library; if not, write to the Free Software
//    Foundation, Inc., 51 Franklin Street, Fifth Floor,
//    Boston, MA  02110-1301  USA
//==============================================================================

#define HIPOLY_VERSION "HiPoLy 1.0.SVNVERSION (DATE)"

//------------------------------------------------------------------------------

extern const char* LibBuildVersion_HiPoLy;

//------------------------------------------------------------------------------

#if defined _WIN32 || defined __CYGWIN__
#ifdef HIPOLY_BUILDING_DLL
#ifdef __GNUC__
#define HIPOLY_DLL_PUBLIC __attribute__((dllexport))
#else
#define HIPOLY_DLL_PUBLIC __declspec(dllexport)
#endif
#else
#ifdef __GNUC__
#define HIPOLY_DLL_PUBLIC __attribute__((dllimport))
#else
#define HIPOLY_DLL_PUBLIC __declspec(dllimport)
#endif
#define HIPOLY_DLL_LOCAL
#endif
#define __hipolyspec
#else
#if __GNUC__ >= 4
#define HIPOLY_DLL_PUBLIC __attribute__ ((visibility("default")))
#define HIPOLY_DLL_LOCAL  __attribute__ ((visibility("hidden")))
#else
#define HIPOLY_DLL_PUBLIC
#define HIPOLY_DLL_LOCAL
#endif
#define __hipolyspec
#endif

#define HIPOLY_PACKAGE HIPOLY_DLL_PUBLIC

//------------------------------------------------------------------------------

#endif
