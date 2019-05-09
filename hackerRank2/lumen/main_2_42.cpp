#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
	int N;
	scanf("%d", &N);
	int L;
	scanf("%d", &L); fgetc(stdin);
	int** room = (int**)malloc(sizeof(int*)*N);
	for (int i = 0; i < N; i++)
	{
		room[i] = (int*)calloc(N, sizeof(int));
	}
	for (int i = 0; i < N; i++) {
		char LINE[501];
		fgets(LINE, 501, stdin);
		int j = 0;
		for (int k = 0; k < strlen(LINE); k++)
		{
			if (LINE[k] == 'X')
				j++;
			if (LINE[k] == 'C')
			{
				room[i][j] = L;
				for (int l = L; l > 0; l--)
				{
					for (int m = i - (L - l); m <= i + (L - l); m++)
					{
						for (int n = j - (L - l); n <= j + (L - l); n++)
						{
							if (m >= 0 && n >= 0 && m < N&&n < N)
							{
								if (room[m][n] < l)
									room[m][n] = l;
							}
						}
					}
				}
				j++;
			}
		}
	}
	int safe = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (room[i][j] == 0)
				safe++;
		}
	}
	// Write an action using printf(). DON'T FORGET THE TRAILING \n
	// To debug: fprintf(stderr, "Debug messages...\n");

	printf("%d\n", safe);
	
	return 0;
}