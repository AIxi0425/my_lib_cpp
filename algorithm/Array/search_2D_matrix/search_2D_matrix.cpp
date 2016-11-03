/*
 * Write an efficient algorithm that searches for a value in an m*n matrix.
 * This matrix has the following properties:
 * Intergers in each row are soeted in ascending from left to right.
 * Intergers in each col are soeted in ascending from top to bottom.
 * Time : O(m+n)
 * Space: O(1)
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
	bool Search_matrix(vector<vector<int>>& matrix, int target)
	{
		const int m = matrix.size();
		if (m == 0)
			return false;
		const int n = matrix[0].size();
		if (n == 0)
			return false;
		int i = 0;
		int j = n -1;
		while (i < m && j >= 0)
		{
			if (matrix[i][j] == target)
				return true;
			else if (matrix[i][j] > target)
				--j;
			else 
				++i;
		}
		return false;
	}
};

int main()
{
	vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	Solution A;
	if (A.Search_matrix(matrix, 10))
		cout << " The target is in the martrix." << endl;
	else
		cout << " The target is not in the martrix." << endl;
		
	return 0;
}
