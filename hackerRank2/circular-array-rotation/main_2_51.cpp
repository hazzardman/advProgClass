//https://www.hackerrank.com/challenges/circular-array-rotation/problem
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)
// Complete the circularArrayRotation function below.

// Please store the size of the integer array to be returned in result_count pointer. For example,
// int a[3] = {1, 2, 3};
//
// *result_count = 3;
//
// return a;
//
int* circularArrayRotation(int a_count, int* a, int k, int queries_count, int* queries, int* result_count) {
	*result_count = queries_count;
	int* results = (int*)malloc(sizeof(int)*queries_count);
	for (int i = 0; i < queries_count; i++)
	{
		int shift = queries[i]-k;
		while (shift < 0)
			shift += a_count;
		results[i] = a[shift];
	}
	return results;
}

int main()
{
	//hackerrank io
	//FILE *f_in = stdin;
	//FILE *f_out = fopen(getenv("OUTPUT_PATH"), "w");
	//local io
	FILE *f_in = fopen("testcase_custom.txt", "r");
	FILE *f_out = stdout;
	int n, k, q;
	fscanf(f_in,"%d %d %d", &n, &k, &q);
	int* a = (int*)malloc(sizeof(int)*n);
	for (int i = 0; i < n; i++)
		fscanf(f_in, "%d", &a[i]);
	int* queries= (int*)malloc(sizeof(int)*q);
	for (int i = 0; i < q; i++)
		fscanf(f_in, "%d", &queries[i]);
	int w = 0;
	int* answer = circularArrayRotation(n, a, k, q, queries, &w);
	for (int i = 0; i < w; i++)
		fprintf(f_out, "%d\n", answer[i]);
	getchar();
	return 0;
}