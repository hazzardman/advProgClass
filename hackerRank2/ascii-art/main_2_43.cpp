#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
	int L;
	cin >> L; cin.ignore();
	int H;
	cin >> H; cin.ignore();
	string T;
	getline(cin, T);
	char alphabet[27][L][H];
	for (int i = 0; i < H; i++) {
		string ROW;
		getline(cin, ROW);
		for (int j = 0; j < ROW.length(); j++)
		{
			alphabet[j / L][j%L][i] = ROW[j];
		}
	}
	for (int k = 0; k < H; k++)
	{
		for (int i = 0; i < T.length(); i++)
		{
			int letter = T[i];
			if (T[i] >= 97)
				letter -= 32;

			if (letter < 65 || letter>90)
				letter = 26;
			else
				letter -= 65;


			for (int j = 0; j < L; j++)
			{
				cout << alphabet[letter][j][k];
			}

		}cout << endl;
	}

	// Write an action using cout. DON'T FORGET THE "<< endl"
	// To debug: cerr << "Debug messages..." << endl;


}