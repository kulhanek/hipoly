#ifndef SimpleCondH
#define SimpleCondH
//==============================================================================
//    Copyright 2007,2008,2012 Petr Kulhanek
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

#include <HiPoLyMainHeader.hpp>
#include <SimpleCondCommon.hpp>
#include <SimpleMutex.hpp>

//------------------------------------------------------------------------------

/// simple condition implementation

class HIPOLY_PACKAGE CSimpleCond {
public:
    CSimpleCond(void);
    ~CSimpleCond(void);

// main methods ---------------------------------------------------------------
    /// wait for signal
    bool WaitForSignal(CSimpleMutex& mutex);

    /// send signal
    bool Signal(void);

    /// broadcast signal
    bool BroadcastSignal(void);

// section of private data ----------------------------------------------------
private:
    CSimpleCondCommon* SecretImpl;
};

//------------------------------------------------------------------------------
#endif
