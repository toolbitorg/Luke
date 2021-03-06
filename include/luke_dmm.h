// -*- C++ -*-
//
// generated by wxGlade 0.7.2 on Sun Dec 18 13:39:25 2016
//
// Example for compiling a single file project under Linux using g++:
//  g++ MyApp.cpp $(wx-config --libs) $(wx-config --cxxflags) -o MyApp
//
// Example for compiling a multi file project under Linux using g++:
//  g++ main.cpp $(wx-config --libs) $(wx-config --cxxflags) -o MyApp Dialog1.cpp Frame1.cpp
//

#ifndef LUKE_DMM_H
#define LUKE_DMM_H

#include "luke_dmm_wx.h"
#include "luke.h"


typedef enum
{
	VOLTAGE_MODE = 0,
	CURRENT_MODE = 1
} MeasurementMode;


class LukeFrame: public MyFrame {
public:

	LukeFrame(wxWindow* parent, wxWindowID id, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE);
	~LukeFrame();

private:
	wxTimer* timer;

protected:
	// Need luke.h and libtbi.lib in ToolbitSDK
	Luke* luke;

	DECLARE_EVENT_TABLE();

public:
	void onRadiobox(wxCommandEvent &event); // wxGlade: <event_handler>
	void OnTimer(wxTimerEvent& event);
	void OnIdle(wxIdleEvent& event);
	MeasurementMode mode;
};


#endif // LUKE_ONE_H
