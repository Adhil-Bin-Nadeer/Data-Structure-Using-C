//Experiment : Program using Stack
//Adhil Bin Nadeer


#include<stdio.h>
int push(int top, int n, int stack[]) {
        int item;
        if (top >= n - 1) {
                printf("Stack overflow\n");
        } else {
                top++;
                printf("Enter the element to be inserted: ");
                scanf("%d", & item);
                stack[top] = item;
        }
        return top;
}
int pop(int top, int stack[]) {
        int item;
        if (top == -1) {
                printf("Stack underflow\n");
        } else {
                item = stack[top];
                top--;
                printf("The deleted item is %d\n", item);
        }
        return top;
}
void display(int stack[], int top) {
        if (top == -1) {
                printf("Stack is empty\n");
        } else {
                printf("The stack is:\n");
                for (int i = 0; i <= top; i++) {
                        printf("%d ", stack[i]);
                }
                printf("\n");
        }
}
int main() {
        int n, top = -1, option;
        char ch;
        printf("Enter the size of the stack: ");
        scanf("%d", & n);

        int stack[n];
        do {
                printf("\nSTACK OPERATIONS\n");
                printf("1. Push\n");
                printf("2. Pop\n");
                printf("3. Display the stack\n");
                printf("Enter your choice: ");
                scanf("%d", & option);
                switch (option) {
                case 1:
                        top = push(top, n, stack);
                        break;
                case 2:
                        top = pop(top, stack);
                        break;
                case 3:
                        display(stack, top);
                        break;
                default:
                        printf("Invalid option\n");
                        break;

                }
                printf("Do you want to continue (y/n): ");
                scanf(" %c", & ch);
        } while (ch == 'Y' || ch == 'y');
        printf("\nExiting...\n");
        return 0;
}
