
int compare(const void * a, const void * b)
{
	return (*(int*)a - *(int*)b);
}
/**
* Note: The returned array must be malloced, assume caller calls free().
*/
int* sortedSquares(int* A, int ASize, int* returnSize) {
	*returnSize = ASize;// not sure why this variable exists but won't work without this line
	int* squares = (int*)malloc(sizeof(int)*ASize);
	for (int i = 0; i < ASize; i++)
	{
		squares[i] = A[i] * A[i];
	}
	qsort(squares, ASize, sizeof(int), compare);
	return squares;
}

