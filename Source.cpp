#pragma warning(disable:4996)


#include <stdio.h>
#include <stdlib.h>


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
void print2bytesRecursive(int bit=0)
{
	static char str[17] = "0000000000000000";
	printf("%s\n", str);
	if (bit>15)return;
			
	if (str[bit] == '0')
	{
		str[bit] = '1';
		print2bytesRecursive(0);
	}
	else if (str[bit] == '1')
	{
		str[bit] = '0';
		print2bytesRecursive(bit+1);
	
	}
}
int main()
{



	int a = 5;
	printf("%d\n",fibRecursive(a));
	printf("%d\n", fibMemoized(a));
	printf("%d\n", fibDynamic(a));

	print2bytesRecursive();






	getchar();
	return 0;
}