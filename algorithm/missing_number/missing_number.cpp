/* 
 * Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the
   the one that is missing from the array.
 * Time : O(n)
 * Space: O(1)
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
	int Missing_number(vector<int>& nums)
	{
		int result = 0;
		for (int i = 0; i < nums.size(); i++)
		{
			if ((nums[i] xor (nums[i+1]-1)))
			{
				result = nums[i] + 1;
				break;
			}
		}
		return result;
	}
};

int main()
{
	Solution A;
	vector<int> v = {0, 1, 2, 3, 4, 5, 6, 7, 9};
	cout << A.Missing_number(v) << endl;

	return 0;
}

