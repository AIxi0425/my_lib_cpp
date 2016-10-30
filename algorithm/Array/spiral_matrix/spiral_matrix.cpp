/*
 * Given a matrix of m*n elements, return all elements of the matrix in spiral order.
 * Time : O(m*n)
 * Space: O(1)
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
	vector<int> Sprial_order(vector<vector<int>>& matrix)
	{
		vector<int> res;
		if (matrix.empty())
			return res;
		for (int left = 0, right = matrix[0].size()-1, top = 0, bottom = matrix.size()-1; 
			 left <= right && top <= bottom; 
			 ++left, --right, ++top, --bottom)
		{
			for (int j = left; j <= right; ++j)
				res.emplace_back(matrix[top][j]);
			for (int i = top+1; i < bottom; ++i)
				res.emplace_back(matrix[i][right]);
			for (int j = right; top < bottom && j >= left; --j)
				res.emplace_back(matrix[bottom][j]);
			for (int i = bottom-1; left < right && i > top; --i)
				res.emplace_back(matrix[i][left]);
		}
		return res;
	
	}
};

int main()
{
	vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			cout << matrix[i][j] << ' ';
	cout << endl;
	Solution A;
	vector<int> v;
	v = A.Sprial_order(matrix);
	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << ' ';
	}
	cout << endl;
	return 0;
}

