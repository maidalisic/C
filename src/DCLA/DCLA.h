#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node {
    int value;
    struct Node* next;
    struct Node* prev;
} Node;

void initList(Node** head);
void disposeList(Node** head);
void writeList(Node* head);
void appendValue(Node* head, int value);
void prependValue(Node* head, int value);
bool containsValue(Node* head, int value);