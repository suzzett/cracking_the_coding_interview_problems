Node* Add(Node* ll1, Node* ll2)
{
	int Value1 = GetValue(ll1);
	int Value2 = GetValue(ll2);
	int Sum = Value1+Value2;
	Node* ResultList;
	int ListSize = 0;
	while (Sum > 0)
	{
		if ((ListSize++) != 0) ResultList = ResultList->ptr;
		ResultList = (Node*) malloc(sizeof(Node));
		ResultList->Data = Sum%10;
		ResultList /= 10;
	}
	return ResultList;
}

int GetValue(Node* ll, int Depth)
{
	if (ll == NULL) return 0;
	else return ll->Data + GetValue(ll->ptr, Depth)*pow(10, Depth++);
}
