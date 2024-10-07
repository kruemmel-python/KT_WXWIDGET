#include "menue.h"  // Einbinden der menue.h-Datei, die die MenuHandler-Klasse deklariert.

void MenuHandler::CreateMenu(wxFrame* frame)  // Statische Methode zum Erstellen eines Menüs in einem Fenster.
{
    wxMenu* menuFile = new wxMenu;  // Erstellt ein neues Menüobjekt für Dateioptionen.
    menuFile->Append(wxID_EXIT);  // Fügt dem Menü die Option "Exit" hinzu, mit dem Standard-ID wxID_EXIT.

    wxMenu* menuHelp = new wxMenu;  // Erstellt ein neues Menüobjekt für Hilfeoptionen.
    menuHelp->Append(wxID_ABOUT);  // Fügt dem Menü die Option "About" hinzu, mit dem Standard-ID wxID_ABOUT.

    wxMenuBar* menuBar = new wxMenuBar;  // Erstellt ein Menüleistenobjekt, das die Menüs enthält.
    menuBar->Append(menuFile, "&File");  // Hängt das Datei-Menü an die Menüleiste an.
    menuBar->Append(menuHelp, "&Help");  // Hängt das Hilfe-Menü an die Menüleiste an.

    frame->SetMenuBar(menuBar);  // Setzt die Menüleiste im übergebenen Fenster.
}
