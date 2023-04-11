/*
* 더 예쁘게 할수도 있을거같은데...
*/
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int nA, nB, nC;
	int nPrize = 0;
	cin >> nA >> nB >> nC;
	if (nA < 0 || nA > 6 || nB < 0 || nB > 6 || nC < 0 || nC > 6)
	{
		return 0;
	}
	if (nA == nB && nA == nC)
	{
		nPrize = 10000 + nA * 1000;
	}
	else
	{
		if (nA == nB || nA == nC)
		{
			nPrize = 1000 + nA * 100;
		}
		else if (nB == nC)
		{
			nPrize = 1000 + nB * 100;
		}
		else
		{
			int nTmp;
			nTmp = max(nA, nB);
			nTmp = max(nTmp, nC);
			nPrize = 100 * nTmp;
		}
	}
	cout << nPrize << endl;
	return 0;
}