#pragma warning<disable:4996>
#include <stdio.h>
#include <stdlib.h>


int main()
{
	int size, lShifts;
	scanf("%d %d", &size, &lShifts);
	int* arr = (int*)malloc(sizeof(int)*size);
	for (int i = 0; i < size; i++)
	{
		int in;
		scanf("%d", &in);
		arr[i] = in;
	}
	lShifts = lShifts%size;
	printf("%d", arr[lShifts]);
	for (int i = lShifts + 1; i < size; i++)
	{
		printf(" %d", arr[i]);
	}
	for (int i = 0; i < lShifts; i++)
	{
		printf(" %d", arr[i]);
	}
	return 0;
}