#ifndef FRAME_H  // Header-Guard, um Mehrfacheinbindungen zu verhindern.
#define FRAME_H

#include <wx/wx.h>  // wxWidgets-Hauptheader.

class MyFrame : public wxFrame  // Deklariert die MyFrame-Klasse, die von wxFrame erbt. wxFrame ist die Basisklasse für Fenster in wxWidgets.
{
public:
    MyFrame(const wxString& title, const wxPoint& pos, const wxSize& size);  // Deklariert den Konstruktor für MyFrame.

private:
    void OnHello(wxCommandEvent& event);  // Deklariert eine private Methode für das "Hello"-Ereignis (nicht verwendet im aktuellen Code).
    void OnExit(wxCommandEvent& event);  // Deklariert eine Methode für das "Exit"-Menü.
    void OnAbout(wxCommandEvent& event);  // Deklariert eine Methode für das "About"-Menü.

    wxDECLARE_EVENT_TABLE();  // wxWidgets-Makro zur Deklaration der Ereignistabelle für MyFrame.
};

#endif // FRAME_H  // Schließt den Header-Guard ab.
