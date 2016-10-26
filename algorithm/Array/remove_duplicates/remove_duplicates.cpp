/*
 * Given a sorted array, remove the duplicates in place such that each element appear only once and return the new length
 *
 *
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
	int Remove_duplicates(vector<int>& nums)
	{
		int result = nums.size();
		for (int i = 0; i < nums.size() - 1; ++i)
		{
			if (!(nums[i] xor nums[i+1]))
				result -= 1;
		}
		return result;
	}
};

class Solution_leetcode
{
public:
	int Remove_duplicates(vector<int>& nums)
	{
		int last = -1;
		for (const auto& num: nums)
		{
			if (last == -1 | nums[last] != num)
				nums[++last] = num;
		}
		return last + 1;
	}
};


int main()
{
	Solution A;
	vector<int> v = {1, 1, 1, 1, 2, 2, 3, 3, 4};
	
	Solution_leetcode B;

	cout << A.Remove_duplicates(v) << endl;
	cout << B.Remove_duplicates(v) << endl;

	return 0;
}
