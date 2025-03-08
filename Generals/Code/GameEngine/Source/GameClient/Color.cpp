/*
**	Command & Conquer Generals(tm)
**	Copyright 2025 Electronic Arts Inc.
**
**	This program is free software: you can redistribute it and/or modify
**	it under the terms of the GNU General Public License as published by
**	the Free Software Foundation, either version 3 of the License, or
**	(at your option) any later version.
**
**	This program is distributed in the hope that it will be useful,
**	but WITHOUT ANY WARRANTY; without even the implied warranty of
**	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**	GNU General Public License for more details.
**
**	You should have received a copy of the GNU General Public License
**	along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

////////////////////////////////////////////////////////////////////////////////
//																																						//
//  (c) 2001-2003 Electronic Arts Inc.
//  //
//																																						//
////////////////////////////////////////////////////////////////////////////////

// FILE: Color.cpp ////////////////////////////////////////////////////////////
//-----------------------------------------------------------------------------
//
//                       Westwood Studios Pacific.
//
//                       Confidential Information
//                Copyright (C) 2001 - All Rights Reserved
//
//-----------------------------------------------------------------------------
//
// Project:    RTS3
//
// File name:  Color.cpp
//
// Created:    Colin Day, July 2001
//
// Desc:       Management of color representations
//
//-----------------------------------------------------------------------------
///////////////////////////////////////////////////////////////////////////////

// SYSTEM INCLUDES ////////////////////////////////////////////////////////////

// USER INCLUDES //////////////////////////////////////////////////////////////
#include "GameClient/Color.h"

#include "PreRTS.h"  // This must go first in EVERY cpp file int the GameEngine

// DEFINES ////////////////////////////////////////////////////////////////////

// PRIVATE TYPES //////////////////////////////////////////////////////////////

// PRIVATE DATA ///////////////////////////////////////////////////////////////

// PUBLIC DATA ////////////////////////////////////////////////////////////////

// PRIVATE PROTOTYPES /////////////////////////////////////////////////////////

// PRIVATE FUNCTIONS //////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
// PUBLIC FUNCTIONS ///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

// GameMakeColor ==============================================================
/** Create a color representation given red, green, blue, and
 * alpha components
 *
 * NOTE: pure solid white (255, 255, 255, 255) will translate
 * intoa -1 which is GAME_COLOR_UNDEFINED
 */
//=============================================================================

// GameGetColorComponents =====================================================
/** Get the RGB color comonents of a color */
//=============================================================================
void GameGetColorComponents(Color color, UnsignedByte *red, UnsignedByte *green,
                            UnsignedByte *blue, UnsignedByte *alpha) {
  *alpha = (color & 0xFF000000) >> 24;
  *red = (color & 0x00FF0000) >> 16;
  *green = (color & 0x0000FF00) >> 8;
  *blue = (color & 0x000000FF);

}  // end GameGetColorComponents

void GameGetColorComponentsReal(Color color, Real *red, Real *green, Real *blue,
                                Real *alpha) {
  *alpha = ((color & 0xFF000000) >> 24) / 255.0f;
  *red = ((color & 0x00FF0000) >> 16) / 255.0f;
  *green = ((color & 0x0000FF00) >> 8) / 255.0f;
  *blue = (color & 0x000000FF) / 255.0f;
}

Color GameDarkenColor(Color color, Int percent) {
  // if they try to go to dark, just return their old color
  if (percent >= 90 || percent <= 0) return color;

  UnsignedByte r, g, b, a;
  GameGetColorComponents(color, &r, &g, &b, &a);
  r -= (r * percent / 100);
  g -= (g * percent / 100);
  b -= (b * percent / 100);

  return GameMakeColor(r, g, b, a);
}  // end GameDarkenColor