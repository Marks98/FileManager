#pragma once
#include <wx/wx.h>
#include "../Globals/AppContext.h"

class Main; // Øekneme kompilátoru, že Main tøída existuje, nemùžeme vložit Main.h, jelikož by se aplikace zacyklila, v MainFrame.cpp to již udìlat mùžem

class MainFrame : public wxFrame
{
	AppContext& m_appContext;

public:
	MainFrame(AppContext& appContext, const wxString& title);
};