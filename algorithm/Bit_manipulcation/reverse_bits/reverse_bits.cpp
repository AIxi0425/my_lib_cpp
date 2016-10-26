/*
 * Reverse bits of a given 32 bits unsingned integer.
 * Time  : O(logn) = O(32)
 * Space : O(1)
 */

#include <iostream>
#include <stdint.h>
#include <bitset>

using namespace std;

class Solution
{
public:
	uint32_t Reverse_bits(uint32_t n)
	{
		uint32_t result = 0;
		int count = 32;
		while (count--)
		{
			result = result << 1;
			result = result | (n & 1);
			n = n >> 1;
		}
		return result;
	}
};

int main()
{
	Solution A;
	cout << bitset<sizeof(int)*8>(A.Reverse_bits(0xf0000000)) << endl;

	return 0;
}


