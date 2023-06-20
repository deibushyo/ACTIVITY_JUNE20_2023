#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "stackLinkList.h"

void popLink(StackLink* stack) {
	/*if (isEmptyLink(*stack)) {
        printf("Stack underflow\n");
        return;
    }*/

    NodePtr temp = stack->top;
    stack->top = stack->top->next;
    free(temp);

    //visualize(*stack);
}

void pushLink(StackLink* stack, Data item) {
	NodePtr newNode = (NodePtr)malloc(sizeof(NodeType));
    /*if (newNode == NULL) {
        printf("Memory allocation failed\n");
        return;
    }*/

    newNode->data = item;
    newNode->next = stack->top;
    stack->top = newNode;

    //visualize(*stack);
}

Data peekLink(StackLink stack) {
	/*if (isEmptyLink(stack)) {
        printf("Stack is empty\n");
        return -1;
    }*/
    return stack.top->data;
}

void initStackLink(StackLink* stack) {
	stack->top = NULL;
}

bool isEmptyLink(StackLink stack) {
	return (stack.top == NULL);
}

void displayLink(StackLink stack) {
    if (isEmptyLink(stack)) {
        printf("Stack is empty\n");
        return;
    }

    StackLink tmp;
    initStackLink(&tmp);

    printf("\nVisualization of the stack:\t{");

    // Copy elements from the original stack to the temporary stack in reverse order
    while (!isEmptyLink(stack)) {
        Data item = peekLink(stack);
        printf(" %d", item);  // Visualize the element as desired
        pushLink(&tmp, item);
        popLink(&stack);
    }

    printf(" }\n");

    // Restore the elements back to the original stack from the temporary stack
    while (!isEmptyLink(tmp)) {
        Data item = peekLink(tmp);
        pushLink(&stack, item);
        popLink(&tmp);
    }
}

void visualizeLink(StackLink stack) {
	/*if (isEmptyLink(stack)) {
        printf("Stack is empty\n");
        return;
    }*/
    
	system("cls");
    NodePtr temp = stack.top;
    printf("\nStack elements\n");
    printf("+-----+\n");

    while (temp != NULL) {
        printf("| %3d |\n", temp->data);
        temp = temp->next;
    }
    printf("+-----+\n");
}
