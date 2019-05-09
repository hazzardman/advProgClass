
//https://www.hackerrank.com/challenges/balanced-brackets/problem
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
char* readline();

// Complete the isBalanced function below.

// Please either make the string static or allocate on the heap. For example,
// static char str[] = "hello world";
// return str;
//
// OR
//
// char* str = "hello world";
// return str;
//
int isBalanced(char* s) {
	char* openBrak = (char*)malloc(sizeof(char) * 256);
	int numOpen = 0;
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] == '[' || s[i] == '{' || s[i] == '(')
		{
			openBrak[numOpen++] = s[i];

		}
		else if (numOpen>0)
		{
			if (s[i] == ']'&&openBrak[numOpen - 1] == '[')
			{
				numOpen--;
			}
			else if (s[i] == '}'&&openBrak[numOpen - 1] == '{')
			{
				numOpen--;
			}
			else if (s[i] == ')'&&openBrak[numOpen - 1] == '(')
			{
				numOpen--;
			}
			else
			{
				numOpen = -1;
				break;
			}
		}
		else
		{
			numOpen = -1;
			break;
		}
	}

	return numOpen;
}

int main()
{
	//hackerrank
	//FILE *f_in = stdin;
	//FILE *f_out = fopen(getenv("OUTPUT_PATH"), "w");

	FILE *f_in = fopen("testcase_custom.txt", "r");
	FILE *f_out = stdout;

	int n_test_cases = 0;
	fscanf(f_in, "%d", &n_test_cases);
	for (int i = 0; i < n_test_cases; i++)
	{
		char brackets[1001];
		fscanf(f_in, "%s", brackets);
		int len = strlen(brackets);

		//solve problem here
		int r = isBalanced(brackets);

		if (r == 0)
			fprintf(f_out, "YES\n");
		else
			fprintf(f_out, "NO\n");


	}


	getchar();
	return 0;
}

