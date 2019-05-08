

int addDigits(int num) {
	int sum = 0;
	int* digits = (int*)malloc(sizeof(int) * 1000);
	int i;
	for (i = 0; num >= pow(10, i); i++)
	{
		digits[i] = num / (int)pow(10, i) % 10;
	}
	for (int j = 0; j < i; j++)
	{
		sum += digits[j];
	}
	if (sum < 10)
		return sum;
	else
		sum = addDigits(sum);
	return sum;
}

