#include "SCLA.h"

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