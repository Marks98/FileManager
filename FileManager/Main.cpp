//Pouze pro Microsoft Compiler
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include "Main.h"
#include "Ui/MainFrame.h"

wxIMPLEMENT_APP(Main);// vytvoøí instanci Mainu a zavolá init metodu

bool Main::OnInit()
{
	m_appContext = std::make_unique<AppContext>();

	m_mainFrame = new MainFrame(*m_appContext, "File Manager V 0.01");
	m_mainFrame->SetClientSize(800, 400);// klient size, bez hlavièky
	m_mainFrame->Center();
	m_mainFrame->Show();

	return true;//prevence proti zavøení
}