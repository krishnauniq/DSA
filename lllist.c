// #include <stdio.h>
// #include <stdlib.h>

// // Structure for a node in a singly linked list
// struct Node {
//     int data;
//     struct Node* next;
// };

// // Function to create a new node
// struct Node* newNode(int data) {
//     struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
//     new_node->data = data;
//     new_node->next = NULL;
//     return new_node;
// }

// // Function to insert a node at the beginning of the list
// void insertAtBeginning(struct Node** head, int data) {
//     struct Node* new_node = newNode(data);
//     new_node->next = *head;
//     *head = new_node;
// }

// // Function to insert a node at the end of the list
// void insertAtEnd(struct Node** head, int data) {
//     struct Node* new_node = newNode(data);
//     if (*head == NULL) {
//         *head = new_node;
//         return;
//     }
//     struct Node* last = *head;
//     while (last->next != NULL) {
//         last = last->next;
//     }
//     last->next = new_node;
// }

// // Function to insert a node at a specific position in the list
// void insertAtPosition(struct Node** head, int data, int position) {
//     if (position < 1) {
//         printf("Invalid position.\n");
//         return;
//     }

//     if (position == 1) {
//         insertAtBeginning(head, data);
//         return;
//     }

//     struct Node* current = *head;
//     struct Node* previous = NULL;
//     int count = 1;

//     while (current != NULL && count < position) {
//         previous = current;
//         current = current->next;
//         count++;
//     }

//     if (count < position) {
//         printf("Invalid position.\n");
//         return;
//     }

//     struct Node* new_node = newNode(data);
//     new_node->next = current;
//     previous->next = new_node;
// }

// // Function to delete a node from the beginning of the list
// void deleteAtBeginning(struct Node** head) {
//     if (*head == NULL) {
//         return;
//     }
//     struct Node* temp = *head;
//     *head = (*head)->next;
//     free(temp);
// }

// // Function to delete a node from the end of the list
// void deleteAtEnd(struct Node** head) {
//     if (*head == NULL || (*head)->next == NULL) {
//         deleteAtBeginning(head);
//         return;
//     }
//     struct Node* current = *head;
//     struct Node* previous = NULL;
//     while (current->next != NULL) {
//         previous = current;
//         current = current->next;
//     }
//     previous->next = NULL;
//     free(current);
// }

// // Function to print the linked list
// void printList(struct Node* head) {
//     while (head != NULL) {
//         printf("%d ", head->data);
//         head = head->next;
//     }
//     printf("\n");
// }

// int main() {
//     struct Node* head = NULL;

//     insertAtEnd(&head, 1);
//     insertAtBeginning(&head, 2);
//     insertAtEnd(&head, 3);
//     insertAtBeginning(&head, 4);

//     printf("Linked list: ");
//     printList(head);

//     insertAtPosition(&head, 5, 3); // Insert 5 at the third position

//     printf("Linked list after insertion: ");
//     printList(head);

//     deleteAtBeginning(&head);
//     deleteAtEnd(&head);

//     printf("Linked list after deletions: ");
//     printList(head);

//     return 0;
// }




#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

struct Node *head = NULL;
struct Node *tail = NULL;

void insertAtBeginning(int data) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = head;

    if (head != NULL) {
        head->prev = newNode;
    }
    head = newNode;

    // Update tail if list was empty
    if (tail == NULL) {
        tail = newNode;
    }
}

void insertAtEnd(int data) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    newNode->data = data;
    newNode->prev = tail;
    newNode->next = NULL;

    if (tail != NULL) {
        tail->next = newNode;
    }
    tail = newNode;

    // Update head if list was empty
    if (head == NULL) {
        head = newNode;
    }
}

void insertAfter(struct Node *current, int data) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    newNode->data = data;
    newNode->prev = current;
    newNode->next = current->next;

    if (current->next != NULL) {
        current->next->prev = newNode;
    }
    current->next = newNode;

    // Update tail if inserting at the end
    if (current == tail) {
        tail = newNode;
    }
}

void deleteAtBeginning() {
    if (head == NULL) {
        return;
    }

    struct Node *temp = head;
    head = head->next;

    if (head != NULL) {
        head->prev = NULL;
    }

    free(temp);

    // Update tail if deleting the only element
    if (head == NULL) {
        tail = NULL;
    }
}

void deleteAtEnd() {
    if (tail == NULL) {
        return;
    }

    struct Node *temp = tail;
    tail = tail->prev;

    if (tail != NULL) {
        tail->next = NULL;
    }

    free(temp);

    // Update head if deleting the only element
    if (head == temp) {
        head = NULL;
    }
}

void deleteAfter(struct Node *current) {
    if (current == NULL || current->next == NULL) {
        return;
    }

    struct Node *temp = current->next;
    current->next = temp->next;

    if (temp->next != NULL) {
        temp->next->prev = current;
    }

    free(temp);

    // Update tail if deleting the last element
    if (current == tail) {
        tail = current;
    }
}

void printList() {
    struct Node *current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    // Insert elements
    insertAtBeginning(10);
    insertAtEnd(20);
    insertAtEnd(30);
    insertAfter(head->next, 15);

    // Print the list
    printf("Doubly linked list: ");
    printList();

    // Delete elements
    deleteAtBeginning();
    deleteAtEnd();
    deleteAfter(head);

    // Print the modified list
    printf("Modified doubly linked list: ");
    printList();

    return 0;
}

