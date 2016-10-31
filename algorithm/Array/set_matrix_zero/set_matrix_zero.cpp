/*
 * Given a m*n matrix, if an element is 0, set its entire row and column to 0. Do it in place.
 * Time : O(m*n)
 * Space: O(1)
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution_my
{
public:
	void Set_zeros(vector<vector<int>>& matrix)
	{
		const size_t m = matrix.size();
		const size_t n = matrix[0].size();
		vector<bool> row(m, false);
		vector<bool> col(n, false);
		for (int i = 0; i < m; ++i)
			for (int j = 0; j < n; ++j)
			{
				if (matrix[i][j] == 0)
				{
					row[i] = true;
					col[j] = true;
				}
			}
		for (size_t i = 0; i < m; ++i)
		{
			if (row[i])
				fill(&matrix[i][0], &matrix[i][0]+n, 0);
		}
		for (size_t j = 0; j < n; ++j)
		{
			if (col[j])
			{
				for (size_t i = 0; i < m; ++i)
					matrix[i][j] = 0;
			}
		}
	}
};

int main()
{
	vector<vector<int>> matrix = {{1, 0 ,3}, {4, 5, 6}, {7, 8, 9}};	
	Solution_my A;
	A.Set_zeros(matrix);
	for (int i = 0; i < matrix.size(); ++i)
	{
		for (int j = 0; j < matrix[0].size(); ++j)
			cout << matrix[i][j] << ' ';
		cout << endl;
	}
	cout << endl;

	cout << &matrix[0][0] << endl;
	cout << &matrix[0][0] + 1 << endl;
	return 0;
}
