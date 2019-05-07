<<<<<<< HEAD
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	map<string,int> nums;
	map<string,int>::iterator it;
	int queries;
	cin >> queries;
	for (int i = 0; i < queries; i++)
	{
=======
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;

int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	map<string, int> nums;
	map<string, int>::iterator it;
	int queries;
	cin >> queries;
	for (int i = 0; i < queries; i++) {
>>>>>>> f3034bca393c293e9159bb019de4e93dcc26d8e9
		int choice, val;
		string entry;
		cin >> choice;
		cin >> entry;
<<<<<<< HEAD
		if (choice == 1)
		{
			cin >> val;
	
			it= nums.find(entry);
			if(it==nums.end())
				nums[entry] = val;
			else
			nums[entry] += val;


		}
		else if (choice == 2)
		{
=======
		if (choice == 1) {
			cin >> val;
			it = nums.find(entry);
			if (it == nums.end())
				nums[entry] = val;
			else
				nums[entry] += val;
		}
		else if (choice == 2) {
>>>>>>> f3034bca393c293e9159bb019de4e93dcc26d8e9
			it = nums.find(entry);
			if (it != nums.end())
				nums.erase(it);
		}
<<<<<<< HEAD
		else if (choice == 3)
		{
			it = nums.find(entry);
			if (it != nums.end())
=======
		else if (choice == 3) {
			it = nums.find(entry);
			if (it == nums.end())
>>>>>>> f3034bca393c293e9159bb019de4e93dcc26d8e9
				cout << 0 << endl;
			else
				cout << it->second << endl;
		}
	}
	return 0;
}
<<<<<<< HEAD



=======
>>>>>>> f3034bca393c293e9159bb019de4e93dcc26d8e9
