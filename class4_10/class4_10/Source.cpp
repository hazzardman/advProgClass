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
	
	if (file.fail())
	{
		printf("file not found\n");
	}
	else 
	{
		file >> size;
		for (int i = 0; !file.fail() && i < size; i++)
		{
			file >> names[i] >> schools[i] >> medals[i];
		}
		file.close();
	
		map<string, int> gRanking;
		map<string, int> sRanking;
		map<string, int> bRanking;
		for (int i = 0; i < size; i++)
		{
			gRanking.insert(pair<string, int>(schools[i], 0));
			sRanking.insert(pair<string, int>(schools[i], 0));
			bRanking.insert(pair<string, int>(schools[i], 0));
		}
		for (int i = 0; i < size; i++)
		{
			if (medals[i] == "gold")
				gRanking[schools[i]]++;

			else if (medals[i] == "silver")
				sRanking[schools[i]]++;

			else if (medals[i] == "bronze")
				bRanking[schools[i]]++;
		}
		ofstream file2;
		file2.open("ranking.txt");
		file2 << "school\tgold\tsilver\tbronze\n";
		map<string, int>::iterator m,n,o;
		m = gRanking.begin();
		n = sRanking.begin();
		o = bRanking.begin();
		for (; m != gRanking.end(); )
		{
			file2 << m->first << "\t" << m->second << "\t" << n->second << "\t" << o->second << "\n";
			m++;
			n++;
			o++;
		}
	}
	
	

	return 0;
}