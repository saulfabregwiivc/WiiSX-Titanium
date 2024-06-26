/**
 * WiiSX - LoadRomFrame.h
 * Copyright (C) 2009, 2010 sepp256
 *
 * WiiSX homepage: http://www.emulatemii.com
 * email address: sepp256@gmail.com
 *
 *
 * This program is free software; you can redistribute it and/
 * or modify it under the terms of the GNU General Public Li-
 * cence as published by the Free Software Foundation; either
 * version 2 of the Licence, or any later version.
 *
 * This program is distributed in the hope that it will be use-
 * ful, but WITHOUT ANY WARRANTY; without even the implied war-
 * ranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public Licence for more details.
 *
**/

#ifndef LOADROMFRAME_H
#define LOADROMFRAME_H

#include "../libgui/Frame.h"
#include "MenuTypes.h"

class LoadRomFrame : public menu::Frame
{
public:
	LoadRomFrame();
	~LoadRomFrame();
	void activateSubmenu(int submenu);

private:
	
};
void Func_LoadFromSD();
void Func_LoadFromDVD();
void Func_LoadFromUSB();

#endif
