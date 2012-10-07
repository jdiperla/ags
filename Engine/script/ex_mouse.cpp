//=============================================================================
//
// Adventure Game Studio (AGS)
//
// Copyright (C) 1999-2011 Chris Jones and 2011-20xx others
// The full list of copyright holders can be found in the Copyright.txt
// file, which is part of this source code distribution.
//
// The AGS source code is provided under the Artistic License 2.0.
// A copy of this license can be found in the file License.txt and at
// http://www.opensource.org/licenses/artistic-license-2.0.php
//
//=============================================================================
//
// Exporting Mouse script functions
//
//=============================================================================

// the ^n after the function name is the number of params
// this is to allow an extra parameter to be added in a later
// version without screwing up the stack in previous versions
// (just export both the ^n and the ^m as seperate funcs)

#include "script/symbol_registry.h"

void register_mouse_script_functions()
{
	scAdd_External_Symbol("Mouse::ChangeModeGraphic^2",(void *)ChangeCursorGraphic);
	scAdd_External_Symbol("Mouse::ChangeModeHotspot^3",(void *)ChangeCursorHotspot);
	scAdd_External_Symbol("Mouse::ChangeModeView^2",(void *)Mouse_ChangeModeView);
	scAdd_External_Symbol("Mouse::DisableMode^1",(void *)disable_cursor_mode);
	scAdd_External_Symbol("Mouse::EnableMode^1",(void *)enable_cursor_mode);
	scAdd_External_Symbol("Mouse::GetModeGraphic^1",(void *)Mouse_GetModeGraphic);
	scAdd_External_Symbol("Mouse::IsButtonDown^1",(void *)IsButtonDown);
	scAdd_External_Symbol("Mouse::SaveCursorUntilItLeaves^0",(void *)SaveCursorForLocationChange);
	scAdd_External_Symbol("Mouse::SelectNextMode^0", (void *)SetNextCursor);
	scAdd_External_Symbol("Mouse::SetBounds^4",(void *)SetMouseBounds);
	scAdd_External_Symbol("Mouse::SetPosition^2",(void *)SetMousePosition);
	scAdd_External_Symbol("Mouse::Update^0",(void *)RefreshMouse);
	scAdd_External_Symbol("Mouse::UseDefaultGraphic^0",(void *)set_default_cursor);
	scAdd_External_Symbol("Mouse::UseModeGraphic^1",(void *)set_mouse_cursor);
	scAdd_External_Symbol("Mouse::get_Mode",(void *)GetCursorMode);
	scAdd_External_Symbol("Mouse::set_Mode",(void *)set_cursor_mode);
	scAdd_External_Symbol("Mouse::get_Visible", (void *)Mouse_GetVisible);
	scAdd_External_Symbol("Mouse::set_Visible", (void *)Mouse_SetVisible);
}
