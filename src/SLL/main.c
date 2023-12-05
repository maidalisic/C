#include <stdio.h>

#include "SLL.h"

int main() {
    Node* list;

    initList(&list); // Initialisiert die Liste

    // Test 1: Leere Liste
    printf("Test 1: Leere Liste\n");
    writeList(list);

    // Test 2: Einzelnes Element hinzufügen und entfernen
    printf("\nTest 2: Ein Element hinzufügen und entfernen\n");
    appendValue(&list, 1);
    writeList(list);
    disposeList(&list);
    writeList(list);

    initList(&list); // Re-initialisiert die Liste nach dem Löschen

    // Test 3: Mehrere Elemente hinzufügen
    printf("\nTest 3: Mehrere Elemente hinzufügen\n");
    appendValue(&list, 1);
    appendValue(&list, 2);
    appendValue(&list, 3);
    writeList(list);

    // Test 4: Liste umkehren
    printf("\nTest 4: Liste umkehren\n");
    invertList(&list);
    writeList(list);

    // Test 5: Suchfunktion
    printf("\nTest 5: Suchfunktion\n");
    printf("Contains 2 = %d\n", containsValue(list, 2) ? 1 : 0);
    printf("Contains 4 = %d\n", containsValue(list, 4) ? 1 : 0);

    // Test 6: Speicherverwaltung
    printf("\nTest 6: Speicherverwaltung\n");
    disposeList(&list);
    initList(&list); // Re-initialisiert die Liste

    // Test 7: Element am Anfang der Liste hinzufügen
    printf("\nTest 7: Element am Anfang der Liste hinzufügen\n");
    prependValue(&list, 0);
    writeList(list);

    disposeList(&list);

    return 0;
}
