#ifndef MAIN_H  // Header-Guard, um sicherzustellen, dass die Datei nicht mehrfach eingebunden wird.
#define MAIN_H

#include <wx/wx.h>  // wxWidgets-Hauptheader, der alle wesentlichen wxWidgets-Funktionen und Klassen importiert.

class MyApp : public wxApp  // Deklariert die MyApp-Klasse, die von wxApp erbt. wxApp ist die Hauptklasse für wxWidgets-Anwendungen.
{
public:
    virtual bool OnInit();  // Deklariert die OnInit-Methode als virtuell, da sie in main.cpp überschrieben wird.
};

wxDECLARE_APP(MyApp);  // wxWidgets-Makro zur Deklaration der Anwendungsklasse, die in der main.cpp implementiert wird.

#endif // MAIN_H  // Schließt den Header-Guard ab.
