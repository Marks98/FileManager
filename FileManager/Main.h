#pragma once
#include "Globals/AppContext.h"
#include <wx/wx.h>
#include "Ui/MainFrame.h"

class MainFrame;
struct appContext;

class Main: public wxApp
{
public:
	bool OnInit();

private:
	std::unique_ptr<AppContext> m_appContext;
	MainFrame* m_mainFrame = nullptr;
};
