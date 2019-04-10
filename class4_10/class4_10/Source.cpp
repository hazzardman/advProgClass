#pragma warning(disable:4996)
#include <iostream>
#include <string>
#include<vector>
#include<map>
#include <fstream> 
using namespace std;




int main()
{
	int size = 10;
	vector<string> names(size);
	vector<string> schools(size);
	vector<string> medals(size);
	string filename = "data.txt";
	
	ifstream file;
	file.open(filename);
	
	int x[3];
	if (file.fail())
	{
		printf("file not found\n");
	}
	else 
	{
		file >> size;
		for (int i = 0; !file.fail() || i < size; i++)
		{
			file >> names[i] >> schools[i] >> medals[i];
		}
		file.close();
	
		map<string, int[3]> ranking;
		for (int i = 0; i < size; i++)
		{
			ranking.insert(pair<string, int[3]>(schools[i], x));
		
		}
		map<string, string>::iterator m;
		for (m = ranking.begin(); m != ranking.end(); m++)
			cout << m->first << " -> "
			<< m->second << "\n";

	}
	
	getchar();
	

	return 0;
}