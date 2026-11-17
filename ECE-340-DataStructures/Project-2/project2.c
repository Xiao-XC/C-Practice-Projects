#include <stdio.h>
#include <stdlib.h>

typedef struct ArrayStack {
    int *array;     
    int size;       
    int capacity;   
} ArrayStack_t;

ArrayStack_t* CreateAndInitStack();
void Push(ArrayStack_t *stk, int value);
int Pop(ArrayStack_t *stk);
int Peek(ArrayStack_t *stk);
void Resize(ArrayStack_t *stk);
int IsEmpty(ArrayStack_t *stk);
int GetLength(ArrayStack_t *stk);
void PrintStack(ArrayStack_t *stk);

ArrayStack_t* CreateAndInitStack() {
    ArrayStack_t *stk = (ArrayStack_t*)malloc(sizeof(ArrayStack_t));
    stk->array = (int*)malloc(4 * sizeof(int));
    stk->size = 0;
    stk->capacity = 4;
    return stk;
}

void Resize(ArrayStack_t *stk) {
    int new_capacity = stk->capacity * 2;
    int *new_array = (int*)malloc(new_capacity * sizeof(int));
    
    for (int i = 0; i < stk->size; i++) {
        new_array[i] = stk->array[i];
    }
    
    free(stk->array);
    stk->array = new_array;
    stk->capacity = new_capacity;
}

void Push(ArrayStack_t *stk, int value) {
    if (stk->size == stk->capacity) {
        Resize(stk);
    }
    stk->array[stk->size] = value;
    stk->size++;
}

int Pop(ArrayStack_t *stk) {
    if (IsEmpty(stk)) {
        return -1; 
    }
    stk->size--;
    return stk->array[stk->size];
}

int Peek(ArrayStack_t *stk) {
    if (IsEmpty(stk)) {
        return -1; 
    }
    return stk->array[stk->size - 1];
}

int IsEmpty(ArrayStack_t *stk) {
    return (stk->size == 0) ? 1 : 0;
}

int GetLength(ArrayStack_t *stk) {
    return stk->size;
}

void PrintStack(ArrayStack_t *stk) {
    for (int i = stk->size - 1; i >= 0; i--) {
        printf("%d ", stk->array[i]);
    }
    printf("\n");
}

int main(void) {
    ArrayStack_t *stack = CreateAndInitStack();
    
    if (IsEmpty(stack)) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack is not empty.\n");
    }

    
    Push(stack, 10);
    Push(stack, 11);
    Push(stack, 12);
    
    int value = Peek(stack);
    printf("Value = %d\n", value);

    
    value = Pop(stack);
    value = Pop(stack);
    
    Push(stack, 20);
    Push(stack, 21);
    Push(stack, 22);
    
    PrintStack(stack);
 
    
    Push(stack, 30);
    Push(stack, 31);
    
    if (IsEmpty(stack)) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack is not empty.\n");
    }
 
    
    Push(stack, 40);
    Push(stack, 41);
    
    value = Peek(stack);
    printf("Value = %d\n", value);

    
    value = Pop(stack);
    
    Push(stack, 50);
    Push(stack, 51);
    Push(stack, 52);
    
    PrintStack(stack);
    
    value = Pop(stack);
    value = Pop(stack);
    value = Pop(stack);
    
    value = GetLength(stack);
    printf("Size = %d\n", value);

    
    value = Pop(stack);
    value = Pop(stack);
    
    printf("Value = %d\n", value);

    
    value = Pop(stack);
    
    value = GetLength(stack);
    printf("Size = %d\n", value);

    
    PrintStack(stack);
    
    value = Pop(stack);
    value = Pop(stack);
    value = Pop(stack);
    
    Push(stack, 19);
    Push(stack, 23);
    Push(stack, 5);
    
    value = GetLength(stack);
    printf("Size = %d\n", value);

    
    while(!(IsEmpty(stack))) {
        PrintStack(stack);
        value = Pop(stack);
    }
 
    value = GetLength(stack);
    printf("Size = %d\n", value);

    printf("Done.\n");

    return 0;
}
