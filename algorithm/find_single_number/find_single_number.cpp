/*
 * Given an array of integers, every element appears twice except for one. Find that single one.
 * Time : O(n)
 * Space: O(1)
 * 异或的作用： 1) 交换2个整数值而不必使用第3个参数
 *	       2) 奇偶判断：^a 	
 */
#include <iostream>
#include <vector>
#include <numeric>

class Solution_my
{
public:
	int Single_number(std::vector<int>& numbers)
	{
		int result = numbers[0];
		for (int i = 1; i < numbers.size(); i++)
			result = result xor numbers[i];
		return result;
	}
};

class Solution_leetcode
{
public:
	int Single_number(std::vector<int>& numbers)
	{
		return accumulate(numbers.cbegin(), numbers.cend(), 0, std::bit_xor<int>());
	}
};


int main()
{
	Solution_leetcode A;
	Solution_my B;

	std::vector<int> v = {1, 2, 2, 3, 1, 3, 7, 0, 0};

	std::cout << A.Single_number(v) << std::endl;
	std::cout << B.Single_number(v) << std::endl;


	return 0;
}
