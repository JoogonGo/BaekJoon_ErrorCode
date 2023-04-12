/*
* 특이사항 없음..
*/
#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int nT;
	int nA, nB;
	cin >> nT;
	for (int i = 0; i < nT; i++)
	{
		cin >> nA >> nB;
		if (nA <= 0 || nA >= 10 || nB <= 0 || nB >= 10)
		{
			return 0;
		}
		cout << "Case #" << (i + 1) << ": " << nA << " + " << nB << " = " << nA + nB << "\n";
	}

	return 0;
}