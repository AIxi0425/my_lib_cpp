/*
 * Given an integer, write a function to determine if it is a power of two.
 * Time : O(1)
 * Space: O(1)
 */

#include <iostream>
using namespace std;

class Solution
{
public:
	bool Is_power_of_two(int n)
	{
		return (n > 0) && (!(n & (n - 1)));
	}
};

int main()
{
	Solution A;
	cout << A.Is_power_of_two(512) << endl;
	
	return 0;
}

