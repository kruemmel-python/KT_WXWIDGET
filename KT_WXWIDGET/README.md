
---

# wxWidgets "Hello Friends" Anwendung

Dies ist ein einfaches **"Hello Friends"** Beispiel für eine Desktop-Anwendung mit **wxWidgets**. Die Anwendung demonstriert die Grundprinzipien der Fenstererstellung, Menüführung und Ereignisverarbeitung in einer GUI-Anwendung. Sie wurde in C++ geschrieben und verwendet die plattformübergreifende wxWidgets-Bibliothek.

## Übersicht

Das Projekt erstellt ein Hauptfenster mit einem Menü und einer Schaltfläche. Wenn der Benutzer die Schaltfläche drückt, erscheint die Meldung **"Hello, friends!"**. Über das Menü kann der Benutzer die Anwendung schließen oder Informationen über das Programm anzeigen.

## Features

- **Hauptfenster**: Das Programm erstellt ein einfaches Fenster mit einem Menü und einer Schaltfläche.
- **Menü**:
  - **Datei → Beenden**: Schließt die Anwendung.
  - **Hilfe → Über**: Zeigt eine Informationsbox über die Anwendung.
- **Schaltfläche**: Eine Schaltfläche mit der Aufschrift "Hello", die beim Drücken die Nachricht **"Hello, friends!"** anzeigt.

## Modularität des Codes

Der Code ist modular aufgebaut, was bedeutet, dass die verschiedenen Funktionen und Komponenten der Anwendung in separate Module unterteilt sind. Dies hat mehrere Vorteile:

1. **Wartbarkeit**: Der Code ist übersichtlicher und leichter zu pflegen, da jede Datei eine spezifische Aufgabe erfüllt. Änderungen oder Erweiterungen können einfach an der entsprechenden Stelle vorgenommen werden, ohne den gesamten Code zu beeinflussen.
   
2. **Wiederverwendbarkeit**: Die Klassen, die z. B. das Menü und die Schaltflächen handhaben, können leicht in anderen Projekten wiederverwendet werden. Die Trennung in eigene Module für Menüs und Schaltflächen macht diese Komponenten wiederverwendbar und anpassbar.

3. **Erweiterbarkeit**: Neue Features oder zusätzliche GUI-Komponenten können leicht hinzugefügt werden, indem man neue Module erstellt oder bestehende Module erweitert. Zum Beispiel könnte man problemlos zusätzliche Schaltflächen oder Menüs hinzufügen, ohne den Hauptcode zu stark zu verändern.

### Code-Struktur

- **main.cpp**: Enthält den Einstiegspunkt der Anwendung (`MyApp`-Klasse) und startet das Hauptfenster (`MyFrame`).
- **main.h**: Deklaration der `MyApp`-Klasse.
- **frame.cpp**: Implementiert das Hauptfenster (`MyFrame`), einschließlich Menü und Statusleiste.
- **frame.h**: Deklaration der `MyFrame`-Klasse und ihrer Ereignismethoden.
- **menue.cpp**: Implementiert die Menüstruktur (Datei und Hilfe).
- **menue.h**: Deklaration der `MenuHandler`-Klasse zur Menüerstellung.
- **buttons.cpp**: Implementiert eine Schaltfläche, die beim Drücken eine Nachricht anzeigt.
- **buttons.h**: Deklaration der `ButtonHandler`-Klasse zur Schaltflächenerstellung und Ereignisverarbeitung.

### Vorteile der Modularität in diesem Projekt:
- **Menüs und Schaltflächen**: Die Klassen `MenuHandler` und `ButtonHandler` sind in separaten Dateien definiert. Sie sind unabhängig vom restlichen Code, sodass Änderungen an der Menü- oder Schaltflächenlogik an einer Stelle konzentriert werden können, ohne andere Teile der Anwendung zu beeinflussen.
- **Ereignisbehandlung**: Die Ereignisbehandlung für Menüs und Schaltflächen wird zentral in den jeweiligen Klassen organisiert, was den Code sauber und leicht verständlich hält.
- **Einfaches Hinzufügen neuer Komponenten**: Um eine weitere GUI-Komponente hinzuzufügen (z. B. ein weiteres Menü oder eine weitere Schaltfläche), könnte man einfach eine neue Datei oder Klasse hinzufügen, ohne den bestehenden Code zu stark anzupassen.

## Abhängigkeiten

- **wxWidgets**: Eine plattformübergreifende GUI-Bibliothek. Stelle sicher, dass wxWidgets auf deinem System installiert ist.

## Kompilierung

Stelle sicher, dass wxWidgets installiert ist und du einen kompatiblen Compiler hast. Zum Kompilieren des Codes kannst du den folgenden Befehl verwenden:

```bash
g++ main.cpp frame.cpp menue.cpp buttons.cpp `wx-config --cxxflags --libs` -o HelloFriendsApp
```

## Ausführung

Führe die Anwendung nach dem Kompilieren mit folgendem Befehl aus:

```bash
./HelloFriendsApp
```

## Lizenz

Dieses Projekt steht unter der MIT-Lizenz – siehe die **LICENSE**-Datei für Details.

---

