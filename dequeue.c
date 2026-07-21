#include <stdio.h>
#include <stdlib.h>

#define CAPACITY 5

int arr[CAPACITY];
int front = 0;
int rear = 0;
int size = 0;

int isFull() {
    return size == CAPACITY;
}

int isEmpty() {
    return size == 0;
}

void insertFront(int value) {
    if (isFull()) {
        printf("Deque is full\n");
        return;
    }

    front = (front - 1 + CAPACITY) % CAPACITY;
    arr[front] = value;
    size++;
}

void insertRear(int value) {
    if (isFull()) {
        printf("Deque is full\n");
        return;
    }

    arr[rear] = value;
    rear = (rear + 1) % CAPACITY;
    size++;
}

void deleteFront() {
    if (isEmpty()) {
        printf("Deque is empty\n");
        return;
    }

    front = (front + 1) % CAPACITY;
    size--;
}

void deleteRear() {
    if (isEmpty()) {
        printf("Deque is empty\n");
        return;
    }

    rear = (rear - 1 + CAPACITY) % CAPACITY;
    size--;
}

void displayDeque() {
    if (isEmpty()) {
        printf("Deque is empty\n");
        return;
    }

    printf("Deque contents: ");
    int i = front;
    for (int count = 0; count < size; count++) {
        printf("%d ", arr[i]);
        i = (i + 1) % CAPACITY;
    }
    printf("\n");
}

int main() {
    int choice, item;

    printf("\n--- Deque Menu ---\n");
    printf("1. Insert at Front\n");
    printf("2. Insert at Rear\n");
    printf("3. Delete from Front\n");
    printf("4. Delete from Rear\n");
    printf("5. Display\n");
    printf("6. Exit\n");

    while (1) {
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter item to insert at front: ");
            scanf("%d", &item);
            insertFront(item);
            break;

        case 2:
            printf("Enter item to insert at rear: ");
            scanf("%d", &item);
            insertRear(item);
            break;

        case 3:
            deleteFront();
            break;

        case 4:
            deleteRear();
            break;

        case 5:
            displayDeque();
            break;

        case 6:
            printf("Exiting program.\n");
            exit(0);

        default:
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
