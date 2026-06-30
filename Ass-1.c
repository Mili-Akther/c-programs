#include <stdio.h>
#include <stdlib.h>

struct Customer {
    int cust_no;
    long phone;
    struct Customer *next;
};

struct Customer *head = NULL;

/* Add a new customer */
void addCustomer() {
    struct Customer *newnode, *temp;

    newnode = (struct Customer *)malloc(sizeof(struct Customer));

    printf("Enter Customer Number: ");
    scanf("%d", &newnode->cust_no);
    printf("Enter Telephone Number: ");
    scanf("%ld", &newnode->phone);

    newnode->next = NULL;

    if (head == NULL)
        head = newnode;
    else {
        temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newnode;
    }

    printf("Customer added successfully.\n");
}

/* Delete an existing customer */
void deleteCustomer() {
    int no;
    struct Customer *temp = head, *prev = NULL;

    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    printf("Enter Customer Number to delete: ");
    scanf("%d", &no);

    if (head->cust_no == no) {
        temp = head;
        head = head->next;
        free(temp);
        printf("Customer deleted.\n");
        return;
    }

    while (temp != NULL && temp->cust_no != no) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Customer not found.\n");
        return;
    }

    prev->next = temp->next;
    free(temp);
    printf("Customer deleted.\n");
}

/* Display list */
void display() {
    struct Customer *temp = head;

    if (temp == NULL) {
        printf("List is empty.\n");
        return;
    }

    printf("\nCustomer No\tTelephone No\n");
    while (temp != NULL) {
        printf("%d\t\t%ld\n", temp->cust_no, temp->phone);
        temp = temp->next;
    }
}

int main() {
    int choice;

    while (1) {
        printf("\n--- MENU ---\n");
        printf("1. Add Customer\n");
        printf("2. Delete Customer\n");
        printf("3. Display List\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addCustomer(); break;
            case 2: deleteCustomer(); break;
            case 3: display(); break;
            case 4: exit(0);
            default: printf("Invalid choice.\n");
        }
    }
}

