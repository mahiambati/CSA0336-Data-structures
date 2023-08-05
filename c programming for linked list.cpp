#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}
void insertAtBeginning(struct Node** head, int value) {
    struct Node* newNode = createNode(value);
    newNode->next = *head;
    *head = newNode;
}
void insertAfterNode(struct Node* prevNode, int value) {
    if (prevNode == NULL) {
        printf("Previous node cannot be NULL.\n");
        return;
    }

    struct Node* newNode = createNode(value);
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}
void insertAtEnd(struct Node** head, int value) {
    struct Node* newNode = createNode(value);

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node* current = *head;
    while (current->next != NULL) {
        current = current->next;
    }

    current->next = newNode;
}
void deleteNode(struct Node** head, int value) {
    struct Node* temp = *head;
    struct Node* prev = NULL;
    if (temp != NULL && temp->data == value) {
        *head = temp->next;
        free(temp);
        return;
    }
    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Node with the given value not found.\n");
        return;
    }
    prev->next = temp->next;
    free(temp);
}
void printList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}
void freeLinkedList(struct Node* head) {
    struct Node* current = head;
    struct Node* temp;

    while (current != NULL) {
        temp = current;
        current = current->next;
        free(temp);
    }
}

int main() {
    struct Node* head = NULL;
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);
    insertAtBeginning(&head, 5);
    insertAfterNode(head->next, 15);
    printf("Linked list: ");
    printList(head);+ 
    deleteNode*("%d",&head, 20);
    printf("Updated linked list after deletion: ");
    printList(head);
    freeLinkedList(head);
    return 0;
}