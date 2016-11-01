/*
 * Rotate an array of n elements to the right by k steps.
 * Time : O(n)
 * Space: O(1)
 */

#include <iostream>
#include <vector>
#include <algorithm> // include function reverse()

using namespace std;

class Solution
{
public:
	void Rotate(vector<int>& nums, int k)
	{
		if (!nums.empty())	
		{
			k %= nums.size();
			// reverse the order of the elements in the range [fisrt,last)
			reverse(nums.begin(), nums.begin() + nums.size() - k);
			reverse(nums.begin() + nums.size() - k, nums.end());
			reverse(nums.begin(), nums.end());
		}
	}
};

int main()
{
	vector<int> v = {1, 2, 3, 4, 5, 6, 7};
	Solution A;
	A.Rotate(v, 3);
	for (int i = 0; i < v.size(); ++i)
		cout << v[i] << ' ' ;
	cout << endl;

	return 0;
}
