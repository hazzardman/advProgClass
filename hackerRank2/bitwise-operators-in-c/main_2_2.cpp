#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#pragma warning(disable : 4996)
//Complete the following function.


void calculate_the_maximum(int n, int k) {

	int* S = (int*)malloc(sizeof(int)*n);
	for (int i = 0; i < n; i++)
		S[i] = i + 1;
	int maxAND = 0;
	int maxOR = 0;
	int maxXOR = 0;

		for (int i = 0; i < n; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				int a_AND_b = S[i] & S[j];
				int a_OR_b = S[i] | S[j];
				int a_XOR_b = S[i] ^ S[j];
				if (a_AND_b < k)
				{
					if (a_AND_b > maxAND)
						maxAND = a_AND_b;
				}
				if (a_OR_b < k)
				{
					if (a_OR_b > maxOR)
						maxOR = a_OR_b;
				}
				if (a_XOR_b < k)
				{
					if (a_XOR_b > maxXOR)
						maxXOR = a_XOR_b;
				}
			}
		}
		printf("%d\n%d\n%d\n", maxAND, maxOR, maxXOR);
}

int main() {
	int n, k;
	scanf("%d %d", &n, &k);
	calculate_the_maximum(n, k);

	getchar();
	getchar();
	return 0;
}
