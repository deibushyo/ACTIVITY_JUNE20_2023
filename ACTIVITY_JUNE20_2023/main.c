#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stackArray.h"
//#include "stackLinkList.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	/*StackLink stack;
    initStackLink(&stack);

    Data choice, x;

    while (1) {
        printf("\nPerform operations on the stack:");
        printf("\n1.PUSH\n2.POP\n3.PEEK\n4.DISPLAY\n5.VISUALIZE\n6.END");
        printf("\n\nEnter the choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter the element to be added onto the stack: ");
            scanf("%d", &x);
            pushLink(&stack, x);
            break;
        case 2:
            popLink(&stack);
            break;
        case 3:
        	system("cls");
            printf("Element at the top of stack: %d\n", peekLink(stack));
            break;
        case 4:
            displayLink(stack);
            break;
        case 5:
            visualizeLink(stack);
            break;
        case 6:
            exit(0);
        default:
            printf("\nInvalid choice!!");
        }
    }*/
	
	
	
    Stack arr;
    initStack(&arr);

    Data choice, x;
    while (1) {
        printf("\nPerform operations on the stack:");
        printf("\n1. PUSH\n2. POP\n3. PEEK\n4. DISPLAY\n5. VISUALIZE\n6. END");
        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to be added onto the stack: ");
                scanf("%d", &x);
                push(&arr, x);
                break;
            case 2:
                pop(&arr);
                break;
            case 3:
                system("cls");
                printf("Element at the top of stack: %d\n", peek(arr));
                break;
            case 4:
                display(arr);
                break;
            case 5:
                visualize(arr);
                break;
            case 6:
                exit(0);
            default:
                printf("\nInvalid choice!!");
        }
    }

    return 0;
}
