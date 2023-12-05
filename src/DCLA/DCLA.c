#include "DCLA.h"

// Initialisiert die Liste mit einem Sentinel-Knoten, der auf sich selbst zeigt.
void initList(Node** head) {
    *head = (Node*)malloc(sizeof(Node));
    (*head)->next = *head;
    (*head)->prev = *head; // Beide Richtungen zeigen auf sich selbst.
}

// Gibt den Speicher aller Knoten in der Liste frei, einschließlich des Sentinel-Knotens.
void disposeList(Node** head) {
    Node* current = (*head)->next;
    Node* nextNode;

    while (current != *head) {
        nextNode = current->next;
        free(current);
        current = nextNode;
    }
    free(*head);
    *head = NULL;
}

// Gibt die Werte der Liste in der Konsole aus.
void writeList(Node* head) {
    Node* current = head->next;
    printf("[ ");

    while (current != head) {
        printf("%d ", current->value);
        current = current->next;
    }
    printf("]\n");
}

// Fügt einen neuen Knoten am Ende der Liste hinzu.
void appendValue(Node* head, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->value = value;
    newNode->next = head;
    newNode->prev = head->prev;

    head->prev->next = newNode;
    head->prev = newNode;
}

// Fügt einen neuen Knoten am Anfang der Liste hinzu (direkt nach dem Sentinel).
void prependValue(Node* head, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->value = value;
    newNode->next = head->next;
    newNode->prev = head;

    head->next->prev = newNode;
    head->next = newNode;
}

// Überprüft, ob ein bestimmter Wert in der Liste vorhanden ist.
bool containsValue(Node* head, int value) {
    Node* current = head->next;
    while (current != head) {
        if (current->value == value) {
            return true;
        }
        current = current->next;
    }
    return false;
}