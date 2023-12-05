#include "SCLA.h"

// Initialisiert die Liste mit einem Sentinel-Knoten, der auf sich selbst zeigt.
void initList(Node** head) {
    *head = (Node*)malloc(sizeof(Node));
    (*head)->next = *head; // Sentinel-Knoten zeigt auf sich selbst, kennzeichnet leere Liste.
}

// Gibt den Speicher aller Knoten in der Liste frei, einschließlich des Sentinel-Knotens.
void disposeList(Node** head) {
    Node* current = (*head)->next;
    Node* nextNode;

    while (current != *head) { // Durchläuft die Liste, bis sie wieder beim Sentinel ankommt.
        nextNode = current->next;
        free(current); // Gibt den Speicher des aktuellen Knotens frei.
        current = nextNode;
    }
    free(*head); // Gibt den Speicher des Sentinel-Knotens frei.
    *head = NULL; // Setzt den Kopf der Liste auf NULL.
}

// Gibt die Werte der Liste in der Konsole aus.
void writeList(Node* head) {
    Node* current = head->next;
    printf("[ ");

    while (current != head) { // Geht durch die Liste und druckt jeden Wert.
        printf("%d ", current->value);
        current = current->next;
    }
    printf("]\n");
}

// Fügt einen neuen Knoten am Ende der Liste hinzu.
void appendValue(Node* head, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->value = value;
    newNode->next = head; // Neuer Knoten verweist zurück auf den Sentinel-Knoten.

    Node* current = head->next;
    while (current->next != head) { // Findet das Ende der Liste.
        current = current->next;
    }
    current->next = newNode; // Fügt den neuen Knoten am Ende der Liste hinzu.
}

// Fügt einen neuen Knoten am Anfang der Liste hinzu (direkt nach dem Sentinel).
void prependValue(Node* head, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->value = value;
    newNode->next = head->next;
    head->next = newNode; // Setzt den neuen Knoten direkt nach dem Sentinel.
}

// Kehrt die Reihenfolge der Knoten in der Liste um.
void invertList(Node** head) {
    Node* current = (*head)->next;
    Node* prev = *head;
    Node* nextNode;

    if (current == *head || current->next == *head) {
        // Wenn die Liste leer ist oder nur ein Element hat.
        return;
    }

    while (current != *head) {
        nextNode = current->next; // Speichert den nächsten Knoten.
        current->next = prev;     // Kehrt die Verknüpfung des aktuellen Knotens um.
        prev = current;           // Aktualisiert den vorherigen Knoten.
        current = nextNode;       // Geht zum nächsten Knoten.
    }

    (*head)->next = prev; // Setzt den nächsten Zeiger des Sentinel-Knotens.
}

// Überprüft, ob ein bestimmter Wert in der Liste vorhanden ist.
bool containsValue(Node* head, int value) {
    Node* current = head->next;
    while (current != head) {
        if (current->value == value) {
            return true; // Wert gefunden.
        }
        current = current->next;
    }
    return false; // Wert nicht in der Liste.
}