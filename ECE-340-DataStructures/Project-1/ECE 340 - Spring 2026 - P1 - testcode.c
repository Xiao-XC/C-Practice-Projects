int main(void) {

	   LinkedList_t* list = NULL;
	   Node_t* nnode = NULL;

	   list = CreateList();
	   nnode = CreateAndInitNode(98);

	   if ((nnode->data == 98) && (nnode->next == NULL)) {
	      printf(“CreateNode: Success. \n”);
	   } else {
	      printf(“CreateNode: Failure. \n”);
	   }										// Output:  CreateNode: Success.

	   InsertAfter(list, nnode, NULL);
	   printList(list);							// Output:  98 

	   nnode = CreateAndInitNode(76);
	   InsertAfterValue(list, nnode, 98);
	   nnode = CreateAndInitNode(54);
	   InsertAfterValue(list, nnode, 76);
	   nnode = CreateAndInitNode(32);
	   InsertAfterValue(list, nnode, 54);
	   nnode = CreateAndInitNode(10);
	   InsertAfterValue(list, nnode, 32);
	   PrintList(list);							// Output: 98, 76, 54, 32, 10

	   nnode = CreateAndInitNode(123);
	   InsertAfterValue(list, nnode, 122);		// Output: Value not found.
												// Output: Node not inserted.
	   InsertAfterIndex(list, nnode, 7);		// Output: Index not found.
												// Output: Node not inserted.
	   InsertAfterIndex(list, nnode, -1);		// Output: Invalid index.
												// Output: Node not inserted.
	   PrintList(list);							// Output: 98, 76, 54, 32, 10

	   int rval = RemoveByValue(list, 76);
	   PrintList(list);							// Output: 98, 54, 32, 10

	   rval = RemoveByIndex(list, 0);
	   PrintList(list);							// Output: 54, 32, 10
	   
	   rval = RemoveByValue(list, 98);			// Output: Value not found.
												// Output: Node not removed.
	   rval = RemoveByIndex(list, 13);			// Output: Index not found.
												// Output: Node not removed.
	
	   rval = RemoveByIndex(list, -1);			// Output: Invalid index.
												// Output: Node not removed.

	   LinkedList *revList = ReverseList(list);
	   PrintList(revList);						// Output: 10 32 54 

	   nnode = CreateAndInitNode(32);
	   InsertAfterValue(list, nnode, 10);
	   nnode = CreateAndInitNode(54);
	   InsertAfterIndex(list, nnode, 3);
	   int pal = IsPalindrome(list);
	   if (pal == 1) {
	      printf(“Palindrome: Yes. \n”);
	   } else {
	      printf(“Palindrome: No. \n”);
	   }										// Output: Palindrome: Yes.
	   printList(list);							// Output: 54 32 10 32 54

	   nnode = CreateAndInitNode(789);
	   InsertAfterIndex(list, nnode, 1); 
	   PrintList(list);							// Output: 54 32 789 10 32 54 
	   rval = RemoveByValue(list, 54);
	   PrintList(list);							// Output: 32 789 10 32 54 

	   pal = IsPalindrome(list);
	   if (pal) {
	      printf(“Palindrome: Yes. \n”);
	   } else { 
	      printf(“Palindrome: No. \n”);
	   } 										// Output: Palindrome: No.

	   rval = RemoveByIndex(list, 1);
	   rval = RemoveByIndex(list, 1);
	   rval = RemoveByIndex(list, 1);
	   rval = RemoveByIndex(list, 1); 
	   rval = RemoveByIndex(list, 1);			// Output: Index not found.
												// Output: Node not removed.
	   PrintList(list);							// Output: 32

	   rval = RemoveByIndex(list, 0);
	   PrintList(list);							// Output: 


	   return 0;
	
	}


