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
		int choice, val;
		string entry;
		cin >> choice;
		cin >> entry;
		if (choice == 1) {
			cin >> val;
			it = nums.find(entry);
			if (it == nums.end())
				nums[entry] = val;
			else
				nums[entry] += val;
		}
		else if (choice == 2) {
			it = nums.find(entry);
			if (it != nums.end())
				nums.erase(it);
		}
		else if (choice == 3) {
			it = nums.find(entry);
			if (it == nums.end())
				cout << 0 << endl;
			else
				cout << it->second << endl;
		}
	}
	return 0;
}
