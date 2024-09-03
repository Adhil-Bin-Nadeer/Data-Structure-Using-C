//Experiment :  Simple Queue Using Function
//Adhil Bin Nadeer

#include <stdio.h>

void enqueue(int *Q, int *REAR, int size, int *FRONT) {
    int ITEM;
    if (*REAR == size) {
        printf("\n======Queue is full======\n");
    } else {
        if (*REAR == 0 && *FRONT == 0) {
            *FRONT = 1;
        }
        printf("Enter the item to enqueue: ");
        scanf("%d", &ITEM);
        *REAR = *REAR + 1;
        Q[*REAR] = ITEM;
    }
}

void dequeue(int *Q, int *REAR, int *FRONT) {
    int ITEM;
    if (*FRONT == 0) {
        printf("\n======Queue is empty=======\n");
    } else {
        ITEM = Q[*FRONT];
        if (*FRONT == *REAR) {
            *REAR = 0;
            *FRONT = 0;
        } else {
            *FRONT = *FRONT + 1;
        }
        printf("Dequeued item: %d\n", ITEM);
    }
}

void displayQueue(int *Q, int REAR, int FRONT) {
    if (FRONT == 0) {
        printf("\n======Queue is empty=======\n");
    } else {
        printf("\nQueue elements : ");
        for (int i = FRONT; i <= REAR; i++) {
            printf("%d \t", Q[i]);
        }
        printf("\n");
    }
}

int main() {
    int n, REAR = 0, FRONT = 0, size;
    printf("\t\tSimple Queue\n");
    printf("\n Enter the size of the queue: ");
    scanf("%d", &size);
    int Q[size];

    while (1) {
        printf("\n1. Enqueue");
        printf("\n2. Dequeue");
        printf("\n3. Display Queue");
        printf("\n4. Exit");
        printf("\nChoose the operation to be performed: ");
        scanf("%d", &n);

        switch (n) {
            case 1:
                enqueue(Q, &REAR, size, &FRONT);
                break;

            case 2:
                dequeue(Q, &REAR, &FRONT);
                break;

            case 3:
                displayQueue(Q, REAR, FRONT);
                break;

            case 4:
                printf("\n======Successfully Executed======");
                return 0;

            default:
                printf("\n ======Invalid Input=======\n");
        }
    }
    return 0;
}
