//==============================================================================
//    Copyright 2000,2004,2008,2011 Petr Kulhanek
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

#include <XMLComment.hpp>
#include <ErrorSystem.hpp>

//==============================================================================
//------------------------------------------------------------------------------
//==============================================================================

CXMLComment::CXMLComment(CXMLNode* p_parent)
    : CXMLNode(p_parent)
{
}

//------------------------------------------------------------------------------

CXMLComment::~CXMLComment(void)
{
}

//==============================================================================
//------------------------------------------------------------------------------
//==============================================================================

void CXMLComment::SetComment(const CSmallString& comment)
{
    Comment = comment;
}

//------------------------------------------------------------------------------

const CSmallString&  CXMLComment::GetComment(void) const
{
    return(Comment);
}

//==============================================================================
//------------------------------------------------------------------------------
//==============================================================================

void CXMLComment::CopyData(CXMLNode* p_src)
{
    CXMLComment* p_rsrc = dynamic_cast<CXMLComment*>(p_src);
    if( p_rsrc == NULL ) {
        LOGIC_ERROR("incompatible source node");
    }
    Comment = p_rsrc->Comment;
}

//==============================================================================
//------------------------------------------------------------------------------
//==============================================================================
