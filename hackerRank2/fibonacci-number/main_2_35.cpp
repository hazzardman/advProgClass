

int fib(int N) {

	int fibNums[2] = { 0,1 };

	int ans = fibNums[0];
	if (N == 1)
		ans = fibNums[1];
	for (int i = 2; i <= N; i++)
	{
		if (i % 2 == 0)
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


