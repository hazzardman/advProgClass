#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */

	vector<int>nums;
	int count;
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		int x;
		cin >> x;
		nums.push_back(x);
	}

	sort(nums.begin(), nums.end());
	
	cout << nums[0];
	for (int i = 1; i < count; i++)
	{
		cout << " " << nums[i];
	}

	return 0;
}
