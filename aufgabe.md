# Double Circular Linked List (DCLA) in C

## Aufgabenstellung

Implementiere eine Double Circular Linked List (DCLA) in C. Die Implementierung soll folgende Funktionalitäten bieten:

1. **Initialisierung einer Liste**: Erstelle eine zirkuläre Liste mit einem Sentinel-Knoten (Kopfknoten), der sowohl `next` als auch `prev` Zeiger enthält.
2. **Hinzufügen von Elementen**:
   - Am Ende der Liste (Append).
   - Am Anfang der Liste (Prepend).
3. **Suche in der Liste**: Prüfe, ob ein bestimmtes Element in der Liste vorhanden ist.
4. **Ausgabe der Liste**: Gib die Elemente der Liste in der Konsole aus.
5. **Entfernen aller Elemente**: Lösche alle Elemente in der Liste und gebe den Speicher frei.

## Implementierung

Die Implementierung erfolgt in C unter Verwendung von Strukturen für die Knoten und Funktionen für die oben genannten Funktionalitäten. Jeder Knoten in der Liste hat zwei Zeiger: `next`, der auf den nächsten Knoten zeigt, und `prev`, der auf den vorherigen Knoten zeigt. Der Sentinel-Knoten dient als Ankerpunkt für die Liste und vereinfacht die Handhabung von Operationen am Anfang und am Ende der Liste.

### Wichtige Funktionen:

- `initList`: Initialisiert die Liste mit einem Sentinel-Knoten.
- `appendValue`: Fügt einen neuen Knoten am Ende der Liste hinzu.
- `prependValue`: Fügt einen neuen Knoten am Anfang der Liste hinzu.
- `containsValue`: Überprüft, ob ein bestimmter Wert in der Liste vorhanden ist.
- `writeList`: Gibt die Werte der Liste in der Konsole aus.
- `disposeList`: Gibt den Speicher aller Knoten in der Liste frei.

---

### C-Implementierung (Beispiel)

```c
#include "DCLA.h"

int main() {
    Node* head = NULL;

    // Initialisiere die Liste
    initList(&head);
    printf("Initialisierte Liste: ");
    writeList(head);

    // Füge Elemente am Ende hinzu
    printf("\nFüge Elemente hinzu (1, 2, 3 am Ende): \n");
    appendValue(head, 1);
    appendValue(head, 2);
    appendValue(head, 3);
    writeList(head);

    // Füge Elemente am Anfang hinzu
    printf("\nFüge Elemente am Anfang hinzu (4, 5): \n");
    prependValue(head, 4);
    prependValue(head, 5);
    writeList(head);

    // Überprüfe die Existenz von Werten
    printf("\nÜberprüfung auf Werte (2 und 6): \n");
    printf("Enthält 2: %s\n", containsValue(head, 2) ? "Ja" : "Nein");
    printf("Enthält 6: %s\n", containsValue(head, 6) ? "Ja" : "Nein");

    // Speicherverwaltung
    printf("\nSpeicherverwaltung: Lösche Liste\n");
    disposeList(&head);
    if (head == NULL) {
        printf("Liste erfolgreich gelöscht.\n");
    } else {
        printf("Fehler beim Löschen der Liste.\n");
    }

    return 0;
}
```