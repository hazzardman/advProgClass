#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int compare(const void * a, const void * b)
{
	return (*(int*)a - *(int*)b);
}
int main()
{
	int N;
	scanf("%d", &N);
	int* horses = (int*)malloc(sizeof(int)*N);
	for (int i = 0; i < N; i++) {
		int Pi;
		scanf("%d", &Pi);
		horses[i] = Pi;
	}
	qsort(horses, N, sizeof(int), compare);
	int min = 999999;
	for (int i = 0; i < N - 1; i++)
	{
		int tmp = horses[i] - horses[i + 1];
		if (tmp < 0)
			tmp *= -1;
		if (tmp < min)
			min = tmp;
	}
	// Write an action using printf(). DON'T FORGET THE TRAILING \n
	// To debug: fprintf(stderr, "Debug messages...\n");

	printf("%d\n", min);

	return 0;
}