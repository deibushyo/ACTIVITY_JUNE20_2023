#ifndef STACKARRAY_H
#define STACKARRAY_H

#define MAX 20

typedef int Data;

typedef struct {
	Data elems[MAX];
	int top;
} Stack;

void pop(Stack *arr);
void push(Stack *arr, Data item);
Data peek(Stack arr);

void initStack(Stack *arr);
bool isEmpty(Stack arr);
bool isFull(Stack arr);

void display(Stack arr);
void visualize(Stack arr);



#endif
