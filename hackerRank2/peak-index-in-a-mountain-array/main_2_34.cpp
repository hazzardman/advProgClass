

int peakIndexInMountainArray(int* A, int ASize) {
	int peak = 0;
	int previous = A[0];
	for (int i = 1; i < ASize; i++)
	{
		if (A[i] > previous)
		{
			previous = A[i];
			peak = i;
		}
		else
			break;
	}
	return peak;
}

