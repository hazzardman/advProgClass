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

int cmp(const void* a, const void* b)
{
	return *((int*)a) - *((int*)b);
}
int maximumToys(int prices_count, int* prices, int k) 
{
	/*for (int i = 0; i < prices_count; i++)                    
	{
		for (int j = 0; j < prices_count; j++)             
		{
			if (prices[j] > prices[i])            
			{
				int tmp = prices[i];
				prices[i] = prices[j];
				prices[j] = tmp;
			}
		}
	}*/

	qsort(prices, prices_count, sizeof(int), cmp);
	int toyCount = 0;
	int totalCost = 0;
	for (int i = 0; i < prices_count; i++)
	{
		if (totalCost + prices[i] < k)
		{
			totalCost += prices[i];
			toyCount++;
		}
		else break;
	}
	return toyCount;
}	

int main()
{
	const int arr_C = 4;
	int arr[arr_C] = { 1,2,3,4};
	int k = 7;
	printf("%d", maximumToys(arr_C, arr,k));
	getchar();
}