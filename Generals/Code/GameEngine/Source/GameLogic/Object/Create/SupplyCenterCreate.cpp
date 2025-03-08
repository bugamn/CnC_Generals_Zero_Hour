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

// FILE: SupplyCenterCreate.cpp
// ///////////////////////////////////////////////////////////////////////////
// Author: Graham Smallwood Feb 2002
// Desc:   When a Supply Center is created, it needs to update all the Resource
// brains in all players
///////////////////////////////////////////////////////////////////////////////////////////////////

// INCLUDES
// ///////////////////////////////////////////////////////////////////////////////////////
#include "GameLogic/Module/SupplyCenterCreate.h"

#include "Common/Player.h"
#include "Common/PlayerList.h"
#include "Common/ResourceGatheringManager.h"
#include "Common/Xfer.h"
#include "PreRTS.h"  // This must go first in EVERY cpp file int the GameEngine

//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
SupplyCenterCreate::SupplyCenterCreate(Thing *thing,
                                       const ModuleData *moduleData)
    : CreateModule(thing, moduleData) {}

//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
SupplyCenterCreate::~SupplyCenterCreate(void) {}

//-------------------------------------------------------------------------------------------------
void SupplyCenterCreate::onCreate(void) {}

//-------------------------------------------------------------------------------------------------
void SupplyCenterCreate::onBuildComplete(void) {
  if (!shouldDoOnBuildComplete()) return;

  CreateModule::onBuildComplete();  // extend

  if (ThePlayerList == NULL) return;

  for (Int playerIndex = ThePlayerList->getPlayerCount() - 1; playerIndex >= 0;
       playerIndex--) {
    Player *currentPlayer = ThePlayerList->getNthPlayer(playerIndex);
    if (currentPlayer == NULL) continue;
    ResourceGatheringManager *manager =
        currentPlayer->getResourceGatheringManager();
    if (manager == NULL) continue;
    manager->addSupplyCenter(getObject());
  }
}

// ------------------------------------------------------------------------------------------------
/** CRC */
// ------------------------------------------------------------------------------------------------
void SupplyCenterCreate::crc(Xfer *xfer) {
  // extend base class
  CreateModule::crc(xfer);

}  // end crc

// ------------------------------------------------------------------------------------------------
/** Xfer method
 * Version Info:
 * 1: Initial version */
// ------------------------------------------------------------------------------------------------
void SupplyCenterCreate::xfer(Xfer *xfer) {
  // version
  XferVersion currentVersion = 1;
  XferVersion version = currentVersion;
  xfer->xferVersion(&version, currentVersion);

  // extend base class
  CreateModule::xfer(xfer);

}  // end xfer

// ------------------------------------------------------------------------------------------------
/** Load post process */
// ------------------------------------------------------------------------------------------------
void SupplyCenterCreate::loadPostProcess(void) {
  // extend base class
  CreateModule::loadPostProcess();

}  // end loadPostProcess
