#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bitset>
using namespace std;

/**
* Auto-generated code below aims at helping you parse
* the standard input according to the problem statement.
**/

int main()
{
	string MESSAGE;
	getline(cin, MESSAGE);



	// Write an action using cout. DON'T FORGET THE "<< endl"
	// To debug: cerr << "Debug messages..." << endl;
	char bit;
	char pbit = 0;
	for (int i = 0; i < MESSAGE.length(); i++)
	{


		string biMESSAGE = bitset<7>(MESSAGE[i]).to_string();

		for (int j = 0; j < biMESSAGE.size(); j++)
		{
			bit = biMESSAGE[j];
			if (bit != pbit)
			{
				if (i > 0 || j > 0)
					cout << ' ';
				cout << 0;
				if (bit == '0')
					cout << 0;
				cout << ' ';
			}
			cout << 0;
			pbit = bit;
		}
	}
	cout << endl;
	getchar(); getchar();
}