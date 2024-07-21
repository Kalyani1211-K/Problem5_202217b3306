#include <stdio.h>
#include <conio.h>  // Note: conio.h is not standard, consider using <stdlib.h> and <string.h> for portability
#define MAX 5

void main() {
    int queue[MAX], ch = 1, front = 0, rear = 0, i, j = 1;
    // clrscr();  // This line is commented out as it is not standard in modern C

    printf("Queue using Array");
    printf("\n1. Insertion \n2. Deletion \n3. Display \n4. Exit");

    while (ch) {
        printf("\nEnter the Choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                if (rear == MAX) {
                    printf("\nQueue is Full");
                } else {
                    printf("\nEnter number %d: ", j++);
                    scanf("%d", &queue[rear++]);
                }
                break;

            case 2:
                if (front == rear) {
                    printf("\nQueue is empty");
                } else {
                    printf("\nDeleted Element is %d", queue[front++]);
                }
                break;

            case 3:
                printf("\nQueue Elements are:\n");
                if (front == rear) {
                    printf("\nQueue is Empty");
                } else {
                    for (i = front; i < rear; i++) {
                        printf("%d\n", queue[i]);
                    }
                }
                break;

            case 4:
                exit(0);

            default:
                printf("Wrong Choice: please see the options");
        }
    }

    getch();  // This line is commented out as it is not standard in modern C
}
