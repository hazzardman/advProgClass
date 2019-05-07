#include <iostream>

using namespace std;


class Solution {
public:
	bool rotateString(string A, string B) {
		bool ans = false;
		if (A.compare(B) == 0)
		{
			ans = true;
			return ans;
		}
		for (int i = 0; i < A.length(); i++)
		{
			if(A.compare(B)==0)
			{
				ans = true;
				break;
			}
			A.push_back(A[0]);
			A.erase(A.begin());
		}
		return ans;
	}
};

