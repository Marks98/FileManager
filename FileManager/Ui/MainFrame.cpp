#include "MainFrame.h"
#include "..\Main.h"
#include <wx/wx.h>
#include <wx/artprov.h>
#include <wx/listctrl.h>
#include "../Globals/AppContext.h"

// Inicializujem referenci app_Context v konstruktoru
MainFrame::MainFrame(AppContext& appContext, const wxString& title) : wxFrame(nullptr, wxID_ANY, title), m_appContext(appContext)
{
	this->m_appContext = appContext;
	wxBitmap bitmap = wxArtProvider::GetBitmap(wxART_WARNING, wxART_OTHER, wxSize(64, 64));
	new wxStaticBitmap(this, wxID_ANY, bitmap, wxPoint(20, 20));

	wxPanel* mainPanel = new wxPanel(this);
	mainPanel->SetBackgroundColour(wxColour(100, 100, 300));

	wxBoxSizer* sizer = new wxBoxSizer(wxVERTICAL);
	sizer->Add(mainPanel, 1, wxEXPAND | wxALL, 5);

	this->SetSizerAndFit(sizer);

	wxButton* button = new wxButton(mainPanel, wxID_ANY, "Klikni :)", wxPoint(150, 50), wxSize(150, 35));

	//text = new wxStaticText(mainPanel, wxID_ANY, "", wxPoint(200, 100));

	//this->CreateMenuBar();

	//button->Bind(wxEVT_BUTTON, &MainFrame::OnButtonClick, this);

	//Bind(wxEVT_CLOSE_WINDOW, &MainFrame::OnCloseWindow, this);

	CreateStatusBar(); // Debug bar ve spod apky
}