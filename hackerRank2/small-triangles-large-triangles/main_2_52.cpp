#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma warning(disable:4996)
struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;

void sort_by_area(triangle *tr, int n) {
	/**
	 * Sort an array a of the length n
	 */
	float *vol = (float *)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		float p = ((float)tr[i].a + tr[i].b + tr[i].c) / 2;
		vol[i] = sqrt(p * (p - tr[i].a) * (p - tr[i].b) * (p - tr[i].c));
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++) {
			if (vol[j] < vol[i]) {
				float tmp = vol[j];
				vol[j] = vol[i];
				vol[i] = tmp;
				triangle trtmp = tr[j];
				tr[j] = tr[i];
				tr[i] = trtmp;
			}
		}
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = (triangle*)malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	getchar(); getchar();
	return 0;
}