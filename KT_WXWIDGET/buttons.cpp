#include "buttons.h"  // Einbinden der buttons.h-Datei, die die ButtonHandler-Klasse deklariert.

void ButtonHandler::CreateButton(wxFrame* frame)  // Statische Methode zum Erstellen einer Schaltfläche in einem Fenster.
{
    wxButton* btnHello = new wxButton(frame, wxID_ANY, "Hello", wxPoint(10, 10), wxSize(100, 50));  // Erstellt eine Schaltfläche mit Text "Hello", Position (10, 10) und Größe 100x50.
    frame->Bind(wxEVT_BUTTON, &ButtonHandler::OnHello, btnHello->GetId());  // Bindet das Button-Ereignis an die Methode OnHello.
}

void ButtonHandler::OnHello(wxCommandEvent& event)  // Methode, die ausgeführt wird, wenn die "Hello"-Schaltfläche gedrückt wird.
{
    wxLogMessage("Hello, wxWidgets, R.K!");  // Gibt eine Protokollnachricht im wxWidgets-Protokollsystem aus.
}
