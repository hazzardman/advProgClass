#pragma warning(disable:4996)


#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int fibRecursive(int n)
{
	if (n <= 2) return 1;
	else
		return fibRecursive(n - 2) + fibRecursive(n - 1);

}
int fibMemoized(int n)
{
	static int fibNums[1000] = { 1,1,0 };

	if (fibNums[n] == 0)
	{

		if (n <= 2) return 1;
		else
			return fibRecursive(n - 2) + fibRecursive(n - 1);
	}
	else
		return fibNums[n];

}
int fibDynamic(int n)
{
	int fibNums[2] = { 1,1 };
	int ans = 1;

	for (int i = 2; i < n; i++)
	{
		if (i % 2)
		{
			fibNums[0] = fibNums[0] + fibNums[1];
			ans = fibNums[0];
		}
		else
		{
			fibNums[1] = fibNums[0] + fibNums[1];
			ans = fibNums[1];
		}
	}
	return ans;
}
void printbitsRecursive(int bit = 16)
{
	/*
	I want to count from 0 to 2^16
	how do i write the logic of "carry the one"
	start at one end then go through all options means doing so for each before
	*/
	int digit=bit-1;
	static char str[17] = "0000000000000000";
	str[digit] = '0';
	printf("%s\n", str);
	str[digit] = '1';
	printf("%s\n", str);
	if (bit <= 0)
		return;
	else
		printbitsRecursive(digit);
	
}
void printBits(unsigned int num) {
	

	unsigned int maxPow = 1 << (15);			//?
	
	for (int i = 0; i < 2 * 8; ++i) {
		// print last bit and shift left.					
		printf("%u", num&maxPow ? 1 : 0);			//?
		num = num << 1;								//?
	}
	printf("\n");
}

int main()
{

	/*

	int a = 5;
	printf("%d\n", fibRecursive(a));
	printf("%d\n", fibMemoized(a));
	printf("%d\n", fibDynamic(a));
	*/
	for (int i = 0; i < pow(2, 16); i++)
	{
		printBits(i);

	}
	getchar();
	return 0;
}