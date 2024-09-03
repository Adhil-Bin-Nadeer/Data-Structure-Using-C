//Experiment : Circular Queue Using Function
// Adhil Bin Nadeer

#include<stdio.h>
int cq[20];
int front = -1, rear = -1;
int item;
void enqueue(int size, int item) {
        if (front == (rear + 1) % size) {
                printf("Overflow..");
        } else {
                if (front == -1) {
                        front = 0;
                }
                rear = (rear + 1) % size;
                cq[rear] = item;
                printf("%d is inserted into the queue\n", item);
        }
}
void dequeue(int size) {
        if (front == -1 && rear == -1) {
                printf("Underflow...");
        } else if (front == rear) {
                item = cq[front];
                front = -1;
                rear = -1;
                printf("The element deleted is :%d", item);
        } else {
                item = cq[front];
                front = (front + 1) % size;
                printf("The element deleted is %d:", item);
        }
}
void display() {
        if (front == -1) {
                printf("The queue is empty\n");
        } else {
                printf("The circular queue is:\n");
                for (int i = front; i <= rear; i++) {
                        printf("%d\t", cq[i]);
                }
        }
}
int main() {
        int choice, item, size;
        printf("Enter size of queue: ");
        scanf("%d", & size);
        while (1) {
                printf("\nSelect your choice: ");
                printf("\n1.ENQUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT\n");
                scanf("%d", & choice);
                switch (choice) {
                case 1:
                        printf("\nEnter element to be inserted: ");
                        scanf("%d", & item);

                        enqueue(size, item);
                        break;
                case 2:
                        dequeue(size);
                        break;
                case 3:
                        display();
                        break;
                case 4:
                        printf("Exiting...");
                        return 0;
                        break;
                default:
                        printf("Invalid choice");
                        break;
                }
        }
        return 0;
}
