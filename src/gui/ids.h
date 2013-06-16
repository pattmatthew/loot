/*  BOSS

    A plugin load order optimiser for games that use the esp/esm plugin system.

    Copyright (C) 2013    WrinklyNinja

    This file is part of BOSS.

    BOSS is free software: you can redistribute
    it and/or modify it under the terms of the GNU General Public License
    as published by the Free Software Foundation, either version 3 of
    the License, or (at your option) any later version.

    BOSS is distributed in the hope that it will
    be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with BOSS.  If not, see
    <http://www.gnu.org/licenses/>.
*/

#ifndef __BOSS_GUI_IDS__
#define __BOSS_GUI_IDS__

#include <string>
#include <boost/format.hpp>
#include "wx/wxprec.h"

#include "../backend/error.h"  //Something in wxWidgets has a #define that conflicts with the error codes.

#ifndef WX_PRECOMP
#       include "wx/wx.h"
#endif


enum {
	//Main window.
    OPTION_EditMetadata = wxID_HIGHEST + 1, // declares an id which will be used to call our button
	OPTION_ViewLastReport,
	OPTION_SortPlugins,
	MENU_ShowSettings,
    //Settings window.
    LIST_Games,
    BUTTON_AddGame,
    BUTTON_EditGame,
    BUTTON_RemoveGame,
    //Editor window.
    LIST_Plugins,
    LIST_Reqs,
    LIST_Incs,
    LIST_LoadAfter,
    LIST_Messages,
    LIST_BashTags,
    LIST_MessageContent,
    BUTTON_AddRow,
    BUTTON_EditRow,
    BUTTON_RemoveRow,
    BUTTON_AddContent,
    BUTTON_EditContent,
    BUTTON_RemoveContent,
    BUTTON_Apply,
    BUTTON_Cancel,
    BOOK_Lists,
    //Main window - dynamically created IDs.
    MENU_LowestDynamicGameID,
    LIST_LoadOrder,
    BUTTON_MoveUp,
    BUTTON_MoveDown,
};

extern wxString Language[4];

wxString translate(const std::string& str);

wxString FromUTF8(const std::string& str);

wxString FromUTF8(const boost::format& f);

//Get the index in the above array of the language corresponding to a given ISO 639-3 code.
unsigned int GetLangIndex(const std::string& str);

//Get the index in the above array of one of its strings.
unsigned int GetLangIndex(const wxString& str);

//Get the ISO 639-3 code corresponding to the language at a given index in the above array.
std::string GetLangStringFromIndex(const unsigned int index);

//Get the BOSS constant for the language string in the above array.
unsigned int GetLangNum(const wxString& str);

#endif
