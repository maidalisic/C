# Singly Linked List (SLL) in C

## Aufgabenstellung

Implementiere eine Singly Linked List (einfach verkettete Liste) in C. Die Implementierung soll folgende Funktionalitäten bieten:

1. **Initialisierung einer Liste**: Erstelle eine leere Liste.
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

typedef struct Node {
    int value;
    struct Node* next;
} Node;

// Funktionen für die SLL
void initList(Node** list);
void appendValue(Node** list, int value);
void prependValue(Node** list, int value);
void invertList(Node** list);
int containsValue(Node* list, int value);
void writeList(Node* list);
void disposeList(Node** list);

// Hier würden die Definitionen der Funktionen folgen.

int main() {
    Node* list = NULL;
    
    initList(&list);
    appendValue(&list, 1);
    appendValue(&list, 2);
    invertList(&list);
    prependValue(&list, 3);
    writeList(list);
    printf("Contains 2 = %d\n", containsValue(list, 2));
    
    disposeList(&list);
    return 0;
}
```