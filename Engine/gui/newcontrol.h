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
//
//
//=============================================================================
#ifndef __AGS_EE_GUI__NEWCONTROL_H
#define __AGS_EE_GUI__NEWCONTROL_H

struct NewControl
{
  int x, y, wid, hit, state, typeandflags, wlevel;
  char visible, enabled;        // not implemented
  char needredraw;
  virtual void draw() = 0;
  virtual int pressedon() = 0;
  virtual int processmessage(int, int, long) = 0;

  NewControl(int xx, int yy, int wi, int hi);
  NewControl();
  int mouseisinarea();
  void drawifneeded();
  void drawandmouse();
};

#endif // __AGS_EE_GUI__NEWCONTROL_H