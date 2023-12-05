#include "Tree.h"

void initTree(Node** root) {
    *root = NULL;
}

void addValue(Node** root, int value) {
    if (*root == NULL) {
        *root = (Node*)malloc(sizeof(Node));
        (*root)->value = value;
        (*root)->left = NULL;
        (*root)->right = NULL;
    } else if (value < (*root)->value) {
        addValue(&((*root)->left), value);
    } else {
        addValue(&((*root)->right), value);
    }
}

void writeTreeInOrder(Node* root) {
    if (root != NULL) {
        writeTreeInOrder(root->left);
        printf("%d ", root->value);
        writeTreeInOrder(root->right);
    }
}

void prettyPrintIndent(Node* node, int indent) {
    if (node != NULL) {
        prettyPrintIndent(node->right, indent + 1);
        for (int i = 0; i < indent; ++i) {
            printf("    ");
        }
        printf("%d\n", node->value);
        prettyPrintIndent(node->left, indent + 1);
    }
}

void prettyPrintTree(Node* root) {
    prettyPrintIndent(root, 0);
}

bool containsValue(Node* root, int value) {
    if (root == NULL) {
        return false;
    } else if (root->value == value) {
        return true;
    } else if (value < root->value) {
        return containsValue(root->left, value);
    } else {
        return containsValue(root->right, value);
    }
}

bool containsValueItr(Node* root, int value) {
    Node* current = root;
    while (current != NULL) {
        if (current->value == value) {
            return true;
        } else if (value < current->value) {
            current = current->left;
        } else {
            current = current->right;
        }
    }
    return false;
}

void disposeTree(Node* root) {
    if (root != NULL) {
        disposeTree(root->left);
        disposeTree(root->right);
        free(root);
    }
}