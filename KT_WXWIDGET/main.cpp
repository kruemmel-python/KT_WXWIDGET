#include "main.h"  // Die main.h-Datei wird eingebunden, die Deklarationen für die MyApp-Klasse enthält.
#include "frame.h" // frame.h wird eingebunden, um den Hauptfenster-Rahmen (MyFrame) in der Anwendung zu nutzen.

wxIMPLEMENT_APP(MyApp);  // wxWidgets-Makro zur Implementierung des Haupteinstiegspunkts der Anwendung. Es erstellt die Hauptinstanz von MyApp.

bool MyApp::OnInit()  // Überschreibt die OnInit-Methode, die beim Start der Anwendung ausgeführt wird. Gibt an, wie die Anwendung initialisiert werden soll.
{
    // Ein neues Fenster (MyFrame) wird erstellt. Der Konstruktor erhält den Titel, die Position und die Größe des Fensters.
    MyFrame* frame = new MyFrame("Hello Friends - R.K", wxPoint(50, 50), wxSize(450, 340));
    frame->Show(true);  // Zeigt das Fenster an. true bedeutet, dass das Fenster sichtbar gemacht wird.
    return true;  // Gibt true zurück, um anzuzeigen, dass die Anwendung erfolgreich initialisiert wurde.
}
