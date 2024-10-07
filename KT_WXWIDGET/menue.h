#ifndef MENUE_H  // Header-Guard, um Mehrfacheinbindungen zu verhindern.
#define MENUE_H

#include <wx/wx.h>  // wxWidgets-Hauptheader.

class MenuHandler  // Deklariert die MenuHandler-Klasse, die statische Methoden zur Menüerstellung enthält.
{
public:
    static void CreateMenu(wxFrame* frame);  // Statische Methode zur Erstellung eines Menüs in einem Fenster.
};

#endif // MENUE_H  // Schließt den Header-Guard ab.
