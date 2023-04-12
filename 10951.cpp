/*
* 특이사항 없음..
*/
#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int nA, nB;
	while (true)
	{
		cin >> nA >> nB;
		if (nA <= 0 || nA >= 10 || nB <= 0 || nB >= 10)
		{
			return 0;
		}
		else if (cin.eof() == true)
		{
			break;
		}
		else
		{
			cout << nA + nB << "\n";
		}
	}

	return 0;
}