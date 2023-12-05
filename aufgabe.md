## Aufgabenstellung: Implementierung eines binären Baums

In dieser Aufgabenstellung geht es darum, eine C-Programm zu entwickeln, das die Implementierung eines binären Baums ermöglicht. Ein binärer Baum ist eine Datenstruktur, die aus Knoten besteht, wobei jeder Knoten höchstens zwei Kindknoten hat: einen linken und einen rechten.

### Aufgaben

1. Implementieren Sie die folgenden Funktionen zur Arbeit mit einem binären Baum:

   - `initTree(Node** root)`: Diese Funktion initialisiert den Baum, indem sie die Wurzel (root) auf `NULL` setzt.

   - `addValue(Node** root, int value)`: Diese Funktion fügt einen Wert in den Baum ein. Beachten Sie, dass der Baum immer sortiert bleibt, dh Werte, die kleiner sind als der Wert eines Knotens, gehen in den linken Teilbaum, und Werte, die größer sind, gehen in den rechten Teilbaum.

   - `writeTreeInOrder(Node* root)`: Diese Funktion gibt den Baum in-order aus, was bedeutet, dass die Werte in aufsteigender Reihenfolge ausgegeben werden.

   - `prettyPrintTree(Node* root, int level)`: Diese Funktion gibt den Baum in einer schönen Baumstruktur aus, wobei die Einrückungsebene für die Darstellung verwendet wird.

   - `containsValue(Node* root, int value)`: Diese Funktion überprüft, ob ein bestimmter Wert im Baum vorhanden ist, und gibt `true` zurück, wenn der Wert gefunden wurde, andernfalls `false`.

   - `containsValueItr(Node* root, int value)`: Diese Funktion überprüft iterativ, ob ein bestimmter Wert im Baum vorhanden ist, und gibt `true` zurück, wenn der Wert gefunden wurde, andernfalls `false`.

   - `disposeTree(Node* root)`: Diese Funktion löscht den Baum und gibt den damit verbundenen Speicher frei.

2. Implementieren Sie in der `main`-Funktion die Verwendung der oben genannten Funktionen, um einen binären Baum zu erstellen, Werte hinzuzufügen, den Baum auszugeben und zu überprüfen, ob bestimmte Werte im Baum vorhanden sind.

3. Testen Sie Ihr Programm, indem Sie verschiedene Werte hinzufügen und die Ausgabe überprüfen, um sicherzustellen, dass der Baum korrekt funktioniert.

---

### C-Implementierung (Beispiel)

```c
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
```