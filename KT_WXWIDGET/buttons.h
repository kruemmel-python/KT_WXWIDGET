#ifndef BUTTONS_H  // Header-Guard, um Mehrfacheinbindungen zu verhindern.
#define BUTTONS_H

#include <wx/wx.h>  // wxWidgets-Hauptheader.

class ButtonHandler  // Deklariert die ButtonHandler-Klasse, die statische Methoden zur Schaltflächenerstellung und -behandlung enthält.
{
public:
    static void CreateButton(wxFrame* frame);  // Statische Methode zur Erstellung einer Schaltfläche in einem Fenster.
    static void OnHello(wxCommandEvent& event);  // Statische Methode, die aufgerufen wird, wenn die Schaltfläche gedrückt wird.
};

#endif // BUTTONS_H  // Schließt den Header-Guard ab.
