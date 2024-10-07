#include "frame.h"  // Einbinden der frame.h-Datei, die die MyFrame-Klasse deklariert.
#include "buttons.h"  // buttons.h wird eingebunden, um Schaltflächen im Fenster zu erstellen.
#include "menue.h"  // menue.h wird eingebunden, um Menüs im Fenster zu erstellen.

wxBEGIN_EVENT_TABLE(MyFrame, wxFrame)  // Beginnt die Ereignistabelle für MyFrame, die Ereignisse an Methoden bindet.
EVT_MENU(wxID_EXIT, MyFrame::OnExit)  // Verknüpft das Menü-Ereignis für wxID_EXIT mit der Methode OnExit.
EVT_MENU(wxID_ABOUT, MyFrame::OnAbout)  // Verknüpft das Menü-Ereignis für wxID_ABOUT mit der Methode OnAbout.
wxEND_EVENT_TABLE()  // Beendet die Ereignistabelle.

MyFrame::MyFrame(const wxString& title, const wxPoint& pos, const wxSize& size)
    : wxFrame(NULL, wxID_ANY, title, pos, size)  // Konstruktor von MyFrame, der das Fenster initialisiert. Die wxFrame-Basisklasse wird aufgerufen.
{
    // Menü und Schaltflächen werden über die externen Klassen erstellt.
    MenuHandler::CreateMenu(this);  // Erstellt das Menü und übergibt das Fenster als Argument.
    ButtonHandler::CreateButton(this);  // Erstellt die Schaltfläche und übergibt das Fenster als Argument.

    CreateStatusBar();  // Erstellt eine Statusleiste am unteren Rand des Fensters.
    SetStatusText("Welcome to wxWidgets from R.K!");  // Setzt den Text der Statusleiste.
}

void MyFrame::OnExit(wxCommandEvent& event)  // Methode, die ausgeführt wird, wenn das "Exit"-Menü angeklickt wird.
{
    Close(true);  // Schließt das Fenster und beendet die Anwendung.
}

void MyFrame::OnAbout(wxCommandEvent& event)  // Methode, die ausgeführt wird, wenn das "About"-Menü angeklickt wird.
{
    wxMessageBox("Dies ist eine wxWidgets 'Hello friends' Anwendung",  // Zeigt ein Nachrichtenfenster an.
        "Über Hello friends", wxOK | wxICON_INFORMATION);  // Der Dialog hat die Schaltfläche OK und ein Informationssymbol.
}
