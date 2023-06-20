#ifndef STACKLINKLIST_H
#define STACKLINKLIST_H

typedef int Data;

typedef struct Node {
    Data data;
    struct Node* next;
} NodeType, *NodePtr;

typedef struct {
    NodePtr top;
} StackLink;

void popLink(StackLink* stack);
void pushLink(StackLink* stack, Data item);
Data peekLink(StackLink stack);

void initStackLink(StackLink* stack);
bool isEmptyLink(StackLink stack);

void displayLink(StackLink stack);
void visualizeLink(StackLink stack);

#endif
