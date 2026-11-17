int main(void) {

	int value;
	ArrayQueue_t *priorQue = CreateAndInitPriorityQueue();

	if (IsEmpty(priorQue)) {
	   printf(“Priority Queue is empty.\n”);
	} else {
	   printf(“Priority Queue is not empty.\n”);
	}										// Output: Priority Queue is empty. 
	
	Enqueue(priorQue, 52);
	Enqueue(priorQue, 39);
	PrintPriorityQueue(priorQue);			// Output: 52 39

	Enqueue(priorQue, 81);
	PrintPriorityQueue(priorQue);			// Output: 81 39 52 

	Enqueue(priorQue, 17);
	Enqueue(priorQue, 46);
	value = Peek(priorQue);
	printf(“Value = %d \n”, value);			// Output: Value = 81
	value = GetLength(priorQue);
	printf(“Length = %d \n”, value);		// Output: Length = 5
	value = GetHeight(priorQue);
	printf(“Height = %d \n”, value);		// Output: Height = 2
	PrintPriorityQueue(priorQue);			// Output: 81 46 52 17 39 

	Enqueue(priorQue, 105);
	Enqueue(priorQue, 94);
	Enqueue(priorQue, 23);
	PrintPriorityQueue(priorQue);			// Output: 105 46 94 23 39 52 81 17 
	value = GetHeight(priorQue);
	printf(“Height = %d \n”, value);		// Output: Height = 3

	if (IsEmpty(priorQue)) {
	   printf(“Priority Queue is empty.\n”);
	} else {
	   printf(“Priority Queue is not empty.\n”);
	}										// Output: Priority Queue is not empty. 
	
	value = Dequeue(priorQue);
	printf(“Value = %d \n”, value);			// Output: Value = 105
	PrintPriorityQueue(priorQue);			// Output: 94 46 81 23 39 52 17 
	value = GetHeight(priorQue);
	printf(“Height = %d \n”, value);		// Output: Height = 2


	value = Peek(priorQue);
	printf(“Value = %d \n”, value);			// Output: Value = 94 
	value = Dequeue(priorQue);
	printf(“Value = %d \n”, value);			// Output: Value = 94 
	PrintPriorityQueue(priorQue);			// Output: 81 46 52 23 39 17

	value = Dequeue(priorQue);
	value = Dequeue(priorQue);
	value = GetLength(priorQue);	
	printf(“Length = %d \n”, value);		// Output: Length = 4
	value = GetHeight(priorQue);
	printf(“Height = %d \n”, value);		// Output: Height = 2
	PrintPriorityQueue(priorQue);			// Output: 46 39 17 23

	value = Dequeue(priorQue);
	printf(“Value = %d \n”, value);			// Output: Value = 46
	value = GetHeight(priorQue);
	printf(“Height = %d \n”, value);		// Output: Height = 1
	PrintPriorityQueue(priorQue);			// Output: 39 23 17

	value = Dequeue(priorQue);
	printf(“Value = %d \n”, value);			// Output: Value = 39
	value = GetLength(priorQue);
	printf(“Length = %d \n”, value);		// Output: Length = 2
	PrintPriorityQueue(priorQue);			// Output: 23 17

	value = Dequeue(priorQue);
	printf(“Value = %d \n”, value);			// Output: Value = 23
	value = GetHeight(priorQue);
	printf(“Height = %d \n”, value);		// Output: Height = 0
	PrintPriorityQueue(priorQue);			// Output: 17

	value = Dequeue(priorQue);
	printf(“Value = %d \n”, value);			// Output: Value = 17
	value = GetLength(priorQue);
	printf(“Length = %d \n”, value);		// Output: Length = 0
	PrintPriorityQueue(priorQue);			// Output: 

	if (IsEmpty(priorQue)) {
	   printf(“Priority Queue is empty.\n”);
	} else {
	   printf(“Priority Queue is not empty.\n”);
	}										// Output: Priority Queue is empty. 
	
	printf(“Done.”);						// Output: Done.

	return 0;

}
