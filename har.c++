#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void substring(string X, string Y)
{
	int m, n;

	if ((m = Y.length()) > (n = X.length()))
		return;

	for (int i = 0; i <= n - m; i++)
	{
		if (is_permutation(X.begin() + i, X.begin() + i + m, Y.begin()))
		{
			cout << "Anagram " << X.substr(i, m) <<
					" present at index " << i << '\n';
		}
	}
}

int main()
{
	string X = "XYYZXZYZXXYZ";
	string Y = "XYZ";

	substring(X, Y);

	return 0;
}