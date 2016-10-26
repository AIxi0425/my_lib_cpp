/*
 * Given a range [m, n], where 0 <= m <= n <=0x7fff_ffff, return the bitwise AND of all numbers in this range.
 * Time : O(1)
 * space: O(1)
 */

#include <iostream>

using namespace std;

class Solution
{
public:
	int Range_bitwise_and(int m, int n)
	{
		while(n > m)
		{
			n = n & (n-1); // Remove the lastest bit 1 until n <= m.
		}
		return n;
	} 
};

int main()
{
	Solution A;
	cout << A.Range_bitwise_and(5, 7) << endl;

	return 0;
}
