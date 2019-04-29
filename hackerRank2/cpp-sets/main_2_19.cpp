#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */


	set<int> nums;
	set<int>::iterator it;
	int queries;
	cin >> queries;
	for (int i = 0; i < queries; i++)
	{
		int choice, entry;
		cin >> choice >> entry;
		if (choice == 1)
		{
			nums.insert(entry);
		}
		else if (choice == 2)
		{
			it = nums.find(entry);
			if (it != nums.end())
				nums.erase(it);
		}
		else if (choice == 3)
		{
			if (nums.find(entry) != nums.end())
				cout << "Yes" << endl;
			else
				cout << "No" << endl;
		}


	}


	return 0;
}



