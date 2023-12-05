#include "Tree.h"

int main() {
    Node* root = NULL;

    // Initialisiere den Baum
    initTree(&root);

    // Füge einige Werte hinzu
    int valuesToAdd[] = {5, 3, 8, 1, 6, 2, 7, 4, 9};
    for (int i = 0; i < sizeof(valuesToAdd) / sizeof(valuesToAdd[0]); ++i) {
        addValue(&root, valuesToAdd[i]);
    }

    // Gib den Baum in-order aus (sollte sortiert sein)
    printf("Baum in-order: ");
    writeTreeInOrder(root);
    printf("\n");

    // Schöne Darstellung des Baums
    printf("Schöne Darstellung des Baums:\n");
    prettyPrintTree(root);

    // Überprüfe, ob bestimmte Werte im Baum enthalten sind
    int valuesToCheck[] = {4, 0};
    for (int i = 0; i < sizeof(valuesToCheck) / sizeof(valuesToCheck[0]); ++i) {
        printf("Enthält %d: %s\n", valuesToCheck[i], containsValue(root, valuesToCheck[i]) ? "Ja" : "Nein");
    }

    // Iterative Überprüfung, ob bestimmte Werte im Baum enthalten sind
    for (int i = 0; i < sizeof(valuesToCheck) / sizeof(valuesToCheck[0]); ++i) {
        printf("Enthält (iterativ) %d: %s\n", valuesToCheck[i], containsValueItr(root, valuesToCheck[i]) ? "Ja" : "Nein");
    }

    // Lösche den Baum und gib den Speicher frei
    disposeTree(root);

    return 0;
}