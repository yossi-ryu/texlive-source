//========================================================================
//
// config.h
//
// Copyright 1996-2019 Glyph & Cog, LLC
//
//========================================================================

#ifndef CONFIG_H
#define CONFIG_H

//------------------------------------------------------------------------
// version
//------------------------------------------------------------------------

// xpdf version
#define xpdfVersion          "4.01.01"
#define xpdfVersionNum       4.01
#define xpdfMajorVersion     4
#define xpdfMinorVersion     1
#define xpdfUpdateVersion    1
#define xpdfMajorVersionStr  "4"
#define xpdfMinorVersionStr  "1"
#define xpdfUpdateVersionStr "1"

// supported PDF version
#define supportedPDFVersionStr "2.0"
#define supportedPDFVersionNum 2.0

// copyright notice
#define xpdfCopyright "Copyright 1996-2019 Glyph & Cog, LLC"

// Windows resource file stuff
#define winxpdfVersion "WinXpdf 4.01.01"
#define xpdfCopyrightAmp "Copyright 1996-2019 Glyph && Cog, LLC"

//------------------------------------------------------------------------
// paper size
//------------------------------------------------------------------------

// default paper size (in points) for PostScript output
#ifdef A4_PAPER
#define defPaperWidth  595    // ISO A4 (210x297 mm)
#define defPaperHeight 842
#else
#define defPaperWidth  612    // American letter (8.5x11")
#define defPaperHeight 792
#endif

//------------------------------------------------------------------------
// config file (xpdfrc) path
//------------------------------------------------------------------------

// user config file name, relative to the user's home directory
#if defined(VMS) || defined(_WIN32)
#define xpdfUserConfigFile "xpdfrc"
#else
#define xpdfUserConfigFile ".xpdfrc"
#endif

// system config file name (set via the configure script)
#ifdef SYSTEM_XPDFRC
#define xpdfSysConfigFile SYSTEM_XPDFRC
#else
// under Windows, we get the directory with the executable and then
// append this file name
#define xpdfSysConfigFile "xpdfrc"
#endif

//------------------------------------------------------------------------
// X-related constants
//------------------------------------------------------------------------

// default maximum size of color cube to allocate
#define defaultRGBCube 5

//------------------------------------------------------------------------
// popen
//------------------------------------------------------------------------

#if defined(VMS) || defined(VMCMS) || defined(DOS) || defined(OS2) || defined(__EMX__) || defined(_WIN32) || defined(__DJGPP__)
#define POPEN_READ_MODE "rb"
#else
#define POPEN_READ_MODE "r"
#endif

//------------------------------------------------------------------------
// Win32 stuff
//------------------------------------------------------------------------

#ifdef CDECL
#undef CDECL
#endif

#if defined(_MSC_VER) || defined(__BORLANDC__)
#define CDECL __cdecl
#else
#define CDECL
#endif

#endif
