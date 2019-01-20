#pragma warning(disable:4996)


#include <iostream>
#include <fstream>
#include <time.h> 
using namespace std;



void main()
{


	float num, avg, stndev = 0;
	char str[80];
	const int listL = 100000;
	float nums[listL];
	/*
	srand(time(NULL));
	FILE *f = fopen("randomNumbers.txt", "w+");
	for (int x = 0; x < listL; x++)
	{
		num = (float)rand() / RAND_MAX;
		fprintf(f, "%f\n", num);
	}
	//fclose(f);
	rewind(f);
	*/
	num = 0;
	printf("input filename: ");
	scanf("%s", str);
	FILE *f = fopen(str, "r+");
	while (f == NULL)
	{
		printf("check filename is correct\ninput filename: ");
		scanf("%s", str);
		f = fopen(str, "r+");

	}

	for (int x = 0; !feof(f); x++)
	{
		fscanf(f, "%f", &nums[x]);
		num += nums[x];
	}
	fclose(f);

	avg = num / listL;

	for (int x = 0; x < listL; x++)
	{
		num = nums[x] - avg;
		stndev += num * num;
	}

	stndev = sqrt(stndev / listL);
	printf("The average of this list is %f\nThe standard deviation is equal to %f", avg, stndev);
	getchar(); getchar();






}





