
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node_t;

typedef struct LinkedList {
    Node_t *head;
    Node_t *tail;
} LinkedList_t;

typedef struct HashTable {
    LinkedList_t *arrayOfLL;
    int tableSize;
    int numOfItems;
} HashTable_t;


Node_t* CreateNode(int value) {
    Node_t *newNode = malloc(sizeof(Node_t));

    if (newNode == NULL) {
        return NULL;
    }

    newNode->data = value;
    newNode->next = NULL;

    return newNode;
}


LinkedList_t* CreateArrayOfLists(int size) {
    LinkedList_t *array = malloc(size * sizeof(LinkedList_t));

    if (array == NULL) {
        return NULL;
    }

    for (int i = 0; i < size; i++) {
        array[i].head = NULL;
        array[i].tail = NULL;
    }

    return array;
}


HashTable_t* CreateTable(int size) {
    HashTable_t *table = malloc(sizeof(HashTable_t));

    if (table == NULL) {
        return NULL;
    }

    table->arrayOfLL = CreateArrayOfLists(size);

    if (table->arrayOfLL == NULL) {
        free(table);
        return NULL;
    }

    table->tableSize = size;
    table->numOfItems = 0;

    return table;
}


int CalculateTableIndex(HashTable_t *table, int value) {
    int index = value % table->tableSize;

    if (index < 0) {
        index = index + table->tableSize;
    }

    return index;
}


void InsertTable(HashTable_t *table, int value) {
    int index = CalculateTableIndex(table, value);

    LinkedList_t *list = &table->arrayOfLL[index];
    Node_t *current = list->head;

    while (current != NULL) {
        if (current->data == value) {
            return;
        }

        current = current->next;
    }

    Node_t *newNode = CreateNode(value);

    if (newNode == NULL) {
        return;
    }

    if (list->head == NULL) {
        list->head = newNode;
        list->tail = newNode;
    } else {
        list->tail->next = newNode;
        list->tail = newNode;
    }

    table->numOfItems++;
}


void RemoveTable(HashTable_t *table, int value) {
    int index = CalculateTableIndex(table, value);

    LinkedList_t *list = &table->arrayOfLL[index];

    Node_t *current = list->head;
    Node_t *previous = NULL;

    while (current != NULL) {
        if (current->data == value) {
            if (previous == NULL) {
                list->head = current->next;
            } else {
                previous->next = current->next;
            }

            if (list->tail == current) {
                list->tail = previous;
            }

            free(current);
            table->numOfItems--;

            return;
        }

        previous = current;
        current = current->next;
    }
}


void PrintTable(HashTable_t *table) {
    for (int i = 0; i < table->tableSize; i++) {
        printf("%d:", i);

        Node_t *current = table->arrayOfLL[i].head;

        while (current != NULL) {
            printf(" %d", current->data);
            current = current->next;
        }

        printf("\n");
    }

    double load = (double)table->numOfItems / table->tableSize;

    printf("\nload = %.3f\n\n", load);
}


int main(void) {
    int size;
    int option;
    int value;

    printf("Specify the size of the hash table: ");
    if (scanf("%d", &size) != 1 || size <= 0) {
        printf("Invalid table size.\n");
        return 1;
    }

    HashTable_t *table = CreateTable(size);

    if (table == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    do {
        printf("Select the operation to perform:\n\n");
        printf("1. Insert a value\n");
        printf("2. Remove a value\n");
        printf("3. Exit\n\n");

        printf("Select an option: ");

        if (scanf("%d", &option) != 1) {
            break;
        }

        if (option == 1) {
            printf("Enter a value: ");

            if (scanf("%d", &value) != 1) {
                break;
            }

            InsertTable(table, value);
            printf("\n");
            PrintTable(table);
        }
        else if (option == 2) {
            printf("Enter a value: ");

            if (scanf("%d", &value) != 1) {
                break;
            }

            RemoveTable(table, value);
            printf("\n");
            PrintTable(table);
        }
        else if (option == 3) {
            printf("\nGood-bye.\n");
        }
        else {
            printf("Invalid option.\n\n");
        }

    } while (option != 3);

    for (int i = 0; i < table->tableSize; i++) {
        Node_t *current = table->arrayOfLL[i].head;

        while (current != NULL) {
            Node_t *temp = current;
            current = current->next;
            free(temp);
        }
    }

    free(table->arrayOfLL);
    free(table);

    return 0;
}
