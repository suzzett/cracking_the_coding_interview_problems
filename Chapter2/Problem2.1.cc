//Write a code to remove duplicates from unsorted linked list

void RemoveDuplicates(Node* Head)
{
	Node* NewList = Head;
	Node* NewListHead = Head;
	Node* Tmp = Head;
	int NewSize = 0;
	while (Tmp != NULL)
	{
		if (!DataExists(Tmp->Data, Node* NewList))
		{
			if (NewList!=NULL) NewList = NewList->ptr;
			NewList = (Node*)malloc(sizeof(Node));
			NewList->Data = Tmp->Data;
			NewList->ptr = NULL;
			if (NewSize==0) NewListHead = NewList;
			NewSize++;
		}
	}
	Head = NewListHead;
}

bool DataExists(int Data, Node* NewList)
{
	Node* Tmp = NewList;
	while (Tmp != NULL)
	{
		if (Tmp->Data == Data) return true;
		Tmp = NewList->ptr;
	}
	return false;
}

//How would you solve the problem if temporary buffer is not allowed
void RemoveDuplicates_NoBuffer(Node* List)
{
	while (List->NULL)
	{
		
	}
}
