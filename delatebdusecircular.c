#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

// Insert at end (for building list)
void addAtEnd(struct node **head, int data) {
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;

    if (*head == NULL) {
        temp->next = temp;   // circular link
        *head = temp;
        return;
    }

    struct node *ptr = *head;
    while (ptr->next != *head) {
        ptr = ptr->next;
    }

    ptr->next = temp;
    temp->next = *head;
}

// Delete node from end
void deleteAtEnd(struct node **head) {
    if (*head == NULL) {
        return;  // List empty
    }

    // Only one node
    if ((*head)->next == *head) {
        free(*head);
        *head = NULL;
        return;
    }

    struct node *ptr = *head;

    // Move to second last node
    while (ptr->next->next != *head) {
        ptr = ptr->next;
    }

    struct node *last = ptr->next;
    ptr->next = *head;  // Maintain circular link
    free(last);
}

// Print circular list once
void printList(struct node *head) {
    if (head == NULL) {
        printf("List is empty");
        return;
    }

    struct node *ptr = head;
    do {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

int main() {
    struct node *head = NULL;
    int N, value;

    scanf("%d", &N);

    // Build list
    for (int i = 0; i < N; i++) {
        scanf("%d", &value);
        addAtEnd(&head, value);
    }

    // Delete last node
    deleteAtEnd(&head);

    // Print updated list
    printList(head);

    return 0;
}