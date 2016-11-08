/*
 * Implement strStr()
 *
 */

#include <iostream>
#include <string>

using namespace std;

// Time : O(m+n)
// Space: O(n)
class Solution_KMP
{
public:
	int Str_match(string str, string match)
	{
		if (match.empty())
			return 0;
		return KMP(str, match);
	}

	int KMP(const string& str, const string& match)
	{
		
	}
	


	
};

// Time : O(m*n)
// Space: O(n)
class Solution
{
public:
	int Str_match(string str, string match)
	{
		for (int i = 0; i + match.length() < str.length() + 1; ++i)
			if (str.substr(i, match.length()) == match)
				return i;
		return -1;
	}
};

int main()
{

	Solution A;

	cout << A.Str_match("1234abc", "1bc") << endl;

	return 0;
}


