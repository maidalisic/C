#include "SLL.h"


// Initialisiert die Liste
void initList(Node** list) {
    *list = NULL;
}

// Fügt ein Element am Ende der Liste hinzu
void appendValue(Node** list, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->value = value;
    newNode->next = NULL;

    if (*list == NULL) {
        *list = newNode;
    } else {
        Node* current = *list;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

// Fügt ein Element am Anfang der Liste hinzu
void prependValue(Node** list, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->value = value;
    newNode->next = *list;
    *list = newNode;
}

// Kehrt die Liste um
void invertList(Node** list) {
    Node* prev = NULL;
    Node* current = *list;
    Node* next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *list = prev;
}

// Überprüft, ob ein Wert in der Liste vorhanden ist
bool containsValue(Node* list, int value) {
    Node* current = list;
    while (current != NULL) {
        if (current->value == value) {
            return true; // Wert gefunden
        }
        current = current->next;
    }
    return false; // Wert nicht gefunden
}

// Gibt die Liste aus
void writeList(Node* list) {
    Node* current = list;
    printf("[ ");
    while (current != NULL) {
        printf("%d ", current->value);
        current = current->next;
    }
    printf("]\n");
}

// Gibt den Speicher der Liste frei
void disposeList(Node** list) {
    Node* current = *list;
    Node* next = NULL;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
    *list = NULL;
}
