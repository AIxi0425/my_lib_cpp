/*
 * Calculate the number of '1' bits for an unsinged integer 
 * Time  : O(logn) = O(32)
 * Space : O(1)
 */

#include <iostream>
#include <stdint.h> // typedef uint32_t
using namespace std;

class Solution
{
public:
	int Hamming_weight(uint32_t n)
	{
		int count = 0;
		for (; n; ++count)
			n &= (n - 1); //clear the 1 in the lowest bit
		return count;
	}
};

int main()
{
	Solution A;
	cout << A.Hamming_weight(15) << endl;

	return 0;
}

