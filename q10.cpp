#include <stdio.h>
#include <stdlib.h>

// Node structure for the Linked List
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new Node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a new Node at the beginning of the Linked List
void insertAtBeginning(struct Node** head, int value) {
    struct Node* newNode = createNode(value);
    newNode->next = *head;
    *head = newNode;
}

// Function to insert a new Node at the end of the Linked List
void insertAtEnd(struct Node** head, int value) {
    struct Node* newNode = createNode(value);
    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

// Function to delete a Node with a given value from the Linked List
void deleteNode(struct Node** head, int value) {
    if (*head == NULL) {
        printf("Linked List is empty. Cannot delete.\n");
        return;
    }

    struct Node* temp = *head;
    struct Node* prev = NULL;

    // If the node to be deleted is at the beginning
    if (temp != NULL && temp->data == value) {
        *head = temp->next;
        free(temp);
        return;
    }

    // Search for the node to be deleted
    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    // If the node is not found
    if (temp == NULL) {
        printf("Node with value %d not found. Cannot delete.\n", value);
        return;
    }

    // Perform the deletion
    prev->next = temp->next;
    free(temp);
}

// Function to display the elements of the Linked List
void displayLinkedList(struct Node* head) {
    if (head == NULL) {
        printf("Linked List is empty.\n");
        return;
    }

    printf("Linked List: ");
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;

    insertAtBeginning(&head, 5);
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 15);
    insertAtBeginning(&head, 1);
    insertAtEnd(&head, 20);

    displayLinkedList(head);

    deleteNode(&head, 10);
    displayLinkedList(head);

    deleteNode(&head, 25); // Node not present
    deleteNode(&head, 1);
    deleteNode(&head, 20);

    displayLinkedList(head);

    return 0;
}

