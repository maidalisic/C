#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node {
    int value;
    struct Node* left;
    struct Node* right;
} Node;

void initTree(Node** root);
void addValue(Node** root, int value);
void writeTreeInOrder(Node* root);
void prettyPrintTree(Node* root);
bool containsValue(Node* root, int value);
bool containsValueItr(Node* root, int value);
void disposeTree(Node* root);