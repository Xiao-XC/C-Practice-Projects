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



LinkedList_t *CreateList(void)
{
    LinkedList_t *list = malloc(sizeof(LinkedList_t));

    if (list == NULL) {
        return NULL;
    }

    list->head = NULL;
    list->tail = NULL;
    return list;
}

Node_t *CreateAndInitNode(int value)
{
    Node_t *node = malloc(sizeof(Node_t));

    if (node == NULL) {
        return NULL;
    }

    node->data = value;
    node->next = NULL;
    return node;
}

Node_t *FindValue(LinkedList_t *list, int value)
{
    Node_t *current = list->head;

    while (current != NULL) {
        if (current->data == value) {
            return current;
        }
        current = current->next;
    }

    printf("Value not found.\n");
    return NULL;
}

Node_t *FindIndex(LinkedList_t *list, int index)
{
    Node_t *current;
    int i;

    if (index < 0) {
        printf("Invalid index.\n");
        return NULL;
    }

    current = list->head;
    for (i = 0; i < index && current != NULL; i++) {
        current = current->next;
    }

    if (current == NULL) {
        printf("Index not found.\n");
    }
    return current;
}

void InsertAfter(LinkedList_t *list, Node_t *newNode, Node_t *currNode)
{
    if (currNode == NULL) {
        newNode->next = list->head;
        list->head = newNode;

        if (list->tail == NULL) {
            list->tail = newNode;
        }
    } else {
        newNode->next = currNode->next;
        currNode->next = newNode;

        if (list->tail == currNode) {
            list->tail = newNode;
        }
    }
}

int InsertAfterValue(LinkedList_t *list, Node_t *newNode, int value)
{
    Node_t *current = FindValue(list, value);

    if (current == NULL) {
        printf("Node not inserted.\n");
        return -1;
    }

    InsertAfter(list, newNode, current);
    return 0;
}

int InsertAfterIndex(LinkedList_t *list, Node_t *newNode, int index)
{
    Node_t *current = FindIndex(list, index);

    if (current == NULL) {
        printf("Node not inserted.\n");
        return -1;
    }

    InsertAfter(list, newNode, current);
    return 0;
}

void Remove(LinkedList_t *list, Node_t *remNode)
{
    Node_t *current;

    if (list->head == remNode) {
        list->head = remNode->next;
        if (list->tail == remNode) {
            list->tail = NULL;
        }
        free(remNode);
        return;
    }

    current = list->head;
    while (current != NULL && current->next != remNode) {
        current = current->next;
    }

    if (current != NULL) {
        current->next = remNode->next;
        if (list->tail == remNode) {
            list->tail = current;
        }
        free(remNode);
    }
}

int RemoveByValue(LinkedList_t *list, int value)
{
    Node_t *node = FindValue(list, value);

    if (node == NULL) {
        printf("Node not removed.\n");
        return -1;
    }

    Remove(list, node);
    return 0;
}

int RemoveByIndex(LinkedList_t *list, int index)
{
    Node_t *node = FindIndex(list, index);

    if (node == NULL) {
        printf("Node not removed.\n");
        return -1;
    }

    Remove(list, node);
    return 0;
}

LinkedList_t *ReverseList(LinkedList_t *list)
{
    LinkedList_t *reversed = CreateList();
    Node_t *current = list->head;

    if (reversed == NULL) {
        return NULL;
    }

    while (current != NULL) {
        Node_t *copy = CreateAndInitNode(current->data);
        if (copy == NULL) {
            return reversed;
        }
        InsertAfter(reversed, copy, NULL);
        current = current->next;
    }

    return reversed;
}

int IsPalindrome(LinkedList_t *list)
{
    LinkedList_t *reversed = ReverseList(list);
    Node_t *left = list->head;
    Node_t *right;
    int answer = 1;

    if (reversed == NULL) {
        return 0;
    }

    right = reversed->head;
    while (left != NULL) {
        if (left->data != right->data) {
            answer = 0;
            break;
        }
        left = left->next;
        right = right->next;
    }

    while (reversed->head != NULL) {
        Remove(reversed, reversed->head);
    }
    free(reversed);

    return answer;
}

void PrintList(LinkedList_t *list)
{
    Node_t *current = list->head;

    while (current != NULL) {
        printf("%d", current->data);
        if (current->next != NULL) {
            printf(" ");
        }
        current = current->next;
    }
    printf("\n");
}
