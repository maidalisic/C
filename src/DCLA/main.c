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