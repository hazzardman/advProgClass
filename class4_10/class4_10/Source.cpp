#pragma warning(disable:4996)
#include <iostream>
#include <string>
#include<vector>
#include<map>
#include <fstream> 
using namespace std;
struct MedalCount
{
	int gold = 0;
	int silver = 0;
	int bronze = 0;
};



int main()
{
	
	vector<string> names;
	vector<string> schools;
	vector<string> medals;
	string filename = "data.txt";
	
	ifstream file;
	/*
	//request filename
	cout << "input file name of data: ";
	cin >> filename;
	*/
	file.open(filename);
	//check for file
	if (file.fail())
	{
		printf("file not found\n");
	}
	else 
		//read file info into vectors
	{	int size;
		file >> size;
		for (int i = 0; !file.fail() && i < size; i++)
		{
			string tmp1;
			string tmp2;
			string tmp3;
			file >> tmp1 >> tmp2 >> tmp3;
			names.push_back(tmp1);
			schools.push_back(tmp2);
			medals.push_back(tmp3);
		}
		file.close();
		//fill all school names into map for each medal
		map<string, MedalCount*> Ranking;
		for (int i = 0; i < size; i++)
		{
			MedalCount* p = new MedalCount;
			Ranking.insert(pair<string, MedalCount*>(schools[i], p));
	
		}
		//asign medal counts for the schools
		for (int i = 0; i < size; i++)
		{
			if (medals[i] == "gold")
				Ranking[schools[i]]->gold++;

			else if (medals[i] == "silver")
				Ranking[schools[i]]->silver++;

			else if (medals[i] == "bronze")
				Ranking[schools[i]]->bronze++;
		}
		//print to file the medals awarded per school
		ofstream file2;
		file2.open("ranking.txt");
		file2 << "school\tgold\tsilver\tbronze\n";
		map<string, MedalCount*>::iterator m;
		
		for (m = Ranking.begin(); m != Ranking.end(); m++)
		{
			file2 << m->first << "\t" << m->second->gold << "\t" << m->second->silver << "\t" << m->second->bronze << "\n";
			
			
		}
		file2.close();
	
	
	
	
	
	}
	return 0;
}