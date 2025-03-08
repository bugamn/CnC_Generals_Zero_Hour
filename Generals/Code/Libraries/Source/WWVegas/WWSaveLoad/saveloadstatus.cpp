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

#include "saveloadstatus.h"

#include "mutex.h"

#define MAX_STATUS_TEXT_ID 2

static CriticalSectionClass text_mutex;
static StringClass status_text[MAX_STATUS_TEXT_ID];

void SaveLoadStatus::Set_Status_Text(const char* text, int id) {
  CriticalSectionClass::LockClass m(text_mutex);
  WWASSERT(id < MAX_STATUS_TEXT_ID);
  status_text[id] = text;
  if (id == 0) status_text[1] = "";
}

StringClass SaveLoadStatus::Get_Status_Text(int id) {
  CriticalSectionClass::LockClass m(text_mutex);
  WWASSERT(id < MAX_STATUS_TEXT_ID);
  return status_text[id];
}
