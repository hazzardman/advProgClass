#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	char* num = (char*)malloc(sizeof(char) * 1024);
	scanf("%s",num);
	int digitCount[10] = { 0 };
	for (int i = 0; i < strlen(num); i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (num[i] == '0' + j)
			{
				digitCount[j]++;
				break;
			}
		}
	}
	printf("%d", digitCount[0]);
	for (int i = 1; i < 10; i++)
	{
		printf(" %d", digitCount[i]);
	}
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	return 0;
}
