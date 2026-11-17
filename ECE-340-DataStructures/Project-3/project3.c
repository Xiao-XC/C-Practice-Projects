
#include <stdio.h>
#include <stdlib.h>

typedef struct ArrayQueue {
    int *array;
    int size;
    int capacity;
} ArrayQueue_t;

ArrayQueue_t* CreateAndInitPriorityQueue() {
    ArrayQueue_t *priorityQue = malloc(sizeof(ArrayQueue_t));

    if (priorityQue == NULL) {
        return NULL;
    }

    priorityQue->array = malloc(4 * sizeof(int));

    if (priorityQue->array == NULL) {
        free(priorityQue);
        return NULL;
    }

    priorityQue->size = 0;
    priorityQue->capacity = 4;

    return priorityQue;
}

void Resize(ArrayQueue_t *priorityQue) {
    int newCapacity = priorityQue->capacity * 2;
    int *newArray = malloc(newCapacity * sizeof(int));

    if (newArray == NULL) {
        return;
    }

    for (int i = 0; i < priorityQue->size; i++) {
        newArray[i] = priorityQue->array[i];
    }

    free(priorityQue->array);
    priorityQue->array = newArray;
    priorityQue->capacity = newCapacity;
}

void Enqueue(ArrayQueue_t *priorityQue, int value) {
    if (priorityQue->size == priorityQue->capacity) {
        Resize(priorityQue);
    }

    if (priorityQue->size == priorityQue->capacity) {
        return;
    }

    int index = priorityQue->size;
    priorityQue->array[index] = value;
    priorityQue->size++;

    while (index > 0) {
        int parent = (index - 1) / 2;

        if (priorityQue->array[index] <= priorityQue->array[parent]) {
            break;
        }

        int temp = priorityQue->array[index];
        priorityQue->array[index] = priorityQue->array[parent];
        priorityQue->array[parent] = temp;

        index = parent;
    }
}

int Dequeue(ArrayQueue_t *priorityQue) {
    if (priorityQue->size == 0) {
        return 0;
    }

    int value = priorityQue->array[0];

    priorityQue->size--;

    if (priorityQue->size == 0) {
        return value;
    }

    priorityQue->array[0] = priorityQue->array[priorityQue->size];

    int index = 0;

    while (1) {
        int left = 2 * index + 1;
        int right = 2 * index + 2;
        int largest = index;

        if (left < priorityQue->size &&
            priorityQue->array[left] > priorityQue->array[largest]) {
            largest = left;
        }

        if (right < priorityQue->size &&
            priorityQue->array[right] > priorityQue->array[largest]) {
            largest = right;
        }

        if (largest == index) {
            break;
        }

        int temp = priorityQue->array[index];
        priorityQue->array[index] = priorityQue->array[largest];
        priorityQue->array[largest] = temp;

        index = largest;
    }

    return value;
}

int Peek(ArrayQueue_t *priorityQue) {
    if (priorityQue->size == 0) {
        return 0;
    }

    return priorityQue->array[0];
}

int IsEmpty(ArrayQueue_t *priorityQue) {
    if (priorityQue->size == 0) {
        return 1;
    }

    return 0;
}

int GetLength(ArrayQueue_t *priorityQue) {
    return priorityQue->size;
}

int GetHeight(ArrayQueue_t *priorityQue) {
    int height = 0;
    int count = priorityQue->size;

    while (count > 1) {
        count = count / 2;
        height++;
    }

    return height;
}

void PrintPriorityQueue(ArrayQueue_t *priorityQue) {
    for (int i = 0; i < priorityQue->size; i++) {
        printf("%d ", priorityQue->array[i]);
    }

    printf("\n");
}
