# Singly Circular Linked List (SCLA) in C

## Aufgabenstellung

Implementiere eine Singly Circular Linked List (SCLA) in C. Die Implementierung soll folgende Funktionalitäten bieten:

1. **Initialisierung einer Liste**: Erstelle eine zirkuläre Liste mit einem Sentinel-Knoten (Kopfknoten).
2. **Hinzufügen von Elementen**:
   - Am Ende der Liste (Append).
   - Am Anfang der Liste (Prepend).
3. **Liste umkehren**: Kehre die Reihenfolge der Elemente in der Liste um.
4. **Suche in der Liste**: Prüfe, ob ein bestimmtes Element in der Liste vorhanden ist.
5. **Ausgabe der Liste**: Gib die Elemente der Liste in der Konsole aus.
6. **Entfernen aller Elemente**: Lösche alle Elemente in der Liste und gebe den Speicher frei.

---

### C-Implementierung (Beispiel)

```c
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node {
    int value;
    struct Node* next;
} Node;

void initList(Node** head);

void disposeList(Node** head);

void writeList(Node* head);

void appendValue(Node* head, int value);

void prependValue(Node* head, int value);

void invertList(Node** head);

bool containsValue(Node* head, int value);

int main() {
    Node* head = NULL;

    // Initialisiere die Liste
    initList(&head);
    printf("Initialisierte Liste: ");
    writeList(head);

    // Füge Elemente hinzu
    printf("\nFüge Elemente hinzu (3, 2, 1 am Ende): \n");
    appendValue(head, 3);
    appendValue(head, 2);
    appendValue(head, 1);
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

    // Kehre die Liste um
    printf("\nListe umkehren: \n");
    invertList(&head);
    writeList(head);

    // Liste erneut umkehren
    printf("\nListe erneut umkehren: \n");
    invertList(&head);
    writeList(head);

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