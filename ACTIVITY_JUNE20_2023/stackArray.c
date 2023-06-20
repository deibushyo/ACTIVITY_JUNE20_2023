#include <stdio.h>
#include <stdbool.h>
#include "stackArray.h"

void pop(Stack *arr) {
    /*if (isEmpty(*arr)) {
        printf("Stack underflow\n");
        return;
    }*/
    arr->top--;
    //visualize(*arr);
}

void push(Stack *arr, Data item) {
    /*if (isFull(*arr)) {
        printf("Stack overflow\n");
        return;
    }*/
    arr->top++;
    arr->elems[arr->top] = item;
    //visualize(*arr);
}

Data peek(Stack arr) {
    /*if (isEmpty(arr)) {
        printf("Stack is empty\n");
        return -1;  // Return a sentinel value or handle the error in a different way
    }*/
    return arr.elems[arr.top];
}

void initStack(Stack *arr) {
    arr->top = -1;
}

bool isEmpty(Stack arr) {
    return (arr.top == -1);
}

bool isFull(Stack arr) {
    return (arr.top == MAX - 1);
}

void display(Stack arr) {
    if (isEmpty(arr)) {
        printf("Stack is empty\n");
        return;
    }

    Stack tmp;
    initStack(&tmp);

    printf("\nVisualization of the stack:\t");
	printf("{");
    // Copy elements from the original stack to the temporary stack in reverse order
	while (!isEmpty(arr)) {
        Data item = peek(arr);
        printf(" %d", item);  // Visualize the element as desired
        push(&tmp, item);
        pop(&arr);
    }
	printf(" }\n");
    // Restore the elements back to the original stack from the temporary stack
	while (!isEmpty(tmp)) {
        Data item = peek(tmp);
        push(&arr, item);
        push(&tmp, item);
        pop(&tmp);
    }
}

void visualize(Stack arr) {
    /*if (isEmpty(arr)) {
        printf("Stack is empty\n");
        return;
    }*/
    system("cls");
    printf("\nStack elements\n");
    printf("+-----+\n");
    int i;
    for (i = arr.top; i >= 0; i--) {
        printf("| %3d |\n", arr.elems[i]);
    }
    printf("+-----+\n");
}
