#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node {
    int value;
    struct Node* next;
} Node;

void initList(Node** list);
void appendValue(Node** list, int value);
void prependValue(Node** list, int value);
void invertList(Node** list);
bool containsValue(Node* list, int value);
void writeList(Node* list);
void disposeList(Node** list);