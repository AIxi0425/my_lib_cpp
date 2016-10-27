/*
 * Given an array and a value, remove all instances of that value in place and return the new length
 * Time :
 * Space:
 */

#include <iostream>
#include <vector>


using namespace std;

class Solution
{
public:
	int Remove_element(vector<int>& nums, int val)
	{
		int result = 0;
		for (int i = 0; i < nums.size(); ++i)
		{
			if (!(nums[i] xor val))
				result += 1;	
		}
		return nums.size() - result;
	}
};

class Solution_leetcode
{
public:
	int Remove_element(vector<int>& nums, int val)
	{

		int left = 0, right = nums.size();
		while (left < right)
		{
			if (nums[left] != val)
				++left;
			else
				swap(nums[left], nums[--right]);
		}
		return right;
	}
};
int main()
{
	Solution A;
	Solution_leetcode B;
	vector<int> v = {2, 3, 3, 2, 3, 2, 4, 5};
	int value = 3;
	cout << A.Remove_element(v, value) << endl;
	cout << B.Remove_element(v, value) << endl;
	
	for (int i = 0; i < v.size(); ++i)
		cout << v[i] << endl;

	return 0;
}
