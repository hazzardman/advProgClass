

/**
* Return an array of arrays of size *returnSize.
* The sizes of the arrays are returned as *returnColumnSizes array.
* Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
*/
int** transpose(int** A, int ASize, int* AColSize, int* returnSize, int** returnColumnSizes) {

	returnSize = AColSize;
	returnColumnSizes = (int**)malloc(ASize * sizeof(int*));
	returnColumnSizes[0] = (int*)malloc(sizeof(int));
	int** result = (int**)malloc((*returnSize) * sizeof(int*));
	returnColumnSizes[0] = (int*)malloc(sizeof(int));
	returnColumnSizes[0] = ASize;
	for (int i = 0; i < *AColSize; i++)
	{
		result[i] = (int*)malloc(sizeof(int)*ASize);

	}
	for (int i = 0; i < ASize; i++)
	{
		for (int j = 0; j < AColSize[i]; j++)
		{
			result[j][i] = A[i][j];
		}
	}
	return result;
}

