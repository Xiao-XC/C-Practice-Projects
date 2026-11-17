int main(void) {

	ArrayStack_t *stack = CreateAndInitStack();
	if (IsEmpty(stack)) {
	   printf(“Stack is empty.\n”);
	} else {
	   printf(“Stack is not empty.\n”);
	}									// Output: Stack is empty. 

	Push(stack, 10);
	Push(stack, 11);
	Push(stack, 12);
	int value = Peek(stack);
	printf(“Value = %d.\n”, value);		// Output: Value = 12

	value = Pop(stack);
	value = Pop(stack);
	Push(stack, 20);
	Push(stack, 21);
	Push(stack, 22);
	PrintStack(stack);					// Output: 22 21 20 10  
	
	Push(stack, 30); 
	Push(stack, 31);
	if(IsEmpty(stack)) {
	   printf(“Stack is empty.\n”);
	} else {
	   printf(“Stack is not empty.\n”);
	}									// Output: Stack is not empty. 	   

	Push(stack, 40);
	Push(stack, 41);
	value = Peek(stack);
	printf(“Value = %d.\n”, value);		// Output: Value = 41

	value = Pop(stack);
	Push(stack, 50);
	Push(stack, 51); 
	Push(stack, 52);
	PrintStack(stack);					// Output: 52 51 50 40 31 30 22 21 20 10  

	value = Pop(stack);
	value = Pop(stack);
	value = Pop(stack);
	value = GetLength(stack);
	printf(“Size = %d.\n”, value);		// Output: Size = 7

	
	value = Pop(stack);
	value = Pop(stack);
	printf(“Value = %d.\n”, value);		// Output: Value = 31
	value = Pop(stack);
	value = GetLength(stack);
	printf(“Size = %d.\n”, value);		// Output: Size = 4
	PrintStack(stack);					// Output: 22 21 20 10 

	value = Pop(stack);
	value = Pop(stack);
	value = Pop(stack);
	Push(stack, 19);
	Push(stack, 23);
	Push(stack, 5);
	value = GetLength(stack);
	printf(“Size = %d.\n”, value);		// Output: Size = 4

	while(!(IsEmpty(stack))) {
	   PrintStack(stack);
	   value = Pop(stack);
	}									// Output: 5 23 19 10
										// Output: 23 19 10
										// Output: 19 10
										// Output: 10
	value = GetLength(stack);	
	printf(“Size = %d.\n”, value);		// Output: Size = 0
	
	printf(“Done.”);					// Output: Done.

	return 0;

  }
