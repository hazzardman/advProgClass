#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */

	int n, q;
	scanf("%d %d", &n, &q);
	int**a = (int**)malloc(sizeof(int*)*n);
	for (int i = 0; i < n; i++)
	{
		int ii;
		scanf("%d", &ii);
		a[i] = (int*)malloc(sizeof(int)*ii);
		for (int j = 0; j < ii; j++)
		{
			int k;
			scanf("%d", &k);
			a[i][j] = k;
		}
	}
	for (int i = 0; i < q; i++)
	{
		int ii, ij;
		scanf("%d %d", &ii, &ij);
		printf("%d\n", a[ii][ij]);
	}
	for (int i = 0; i < n; i++)
	{
		free(a[i]);
	}
	free(a);
	return 0;
}

