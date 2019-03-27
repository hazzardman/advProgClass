#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)

// Complete the maxSubsetSum function below.
int maxSubsetSum(int arr_count, int* arr) {
	int sum = 0;
	int* best = (int*)malloc(arr_count * sizeof(int));
	
	best[0] = 0;	
	if(arr[0]>best[0])
	best[0]=arr[0];
	
	if (arr[1] > best[0])
		best[1] = arr[1];
	else
		best[1]=best[0];

	for (int i = 2; i<arr_count; i++)
	{
		int tmp1=best[i-1];
		int tmp2=arr[i] + best[i - 2];
		if (tmp2>tmp1)
		best[i]=tmp2;
		else
		best[i]=tmp1;

	}
	return best[arr_count - 1];
}

int main()
{
	const int arr_C = 5;
	int arr[arr_C] = { -2,1,3,-4,5 };
	printf("%d",maxSubsetSum(arr_C, arr));
	getchar();
}
