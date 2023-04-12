/*
* 특이사항 없음..
*/
#include <iostream>

using namespace std;

int main()
{
	int nT, nTot = 0;
	cin >> nT;
	if (nT < 1 || nT > 10000)
	{
		return 0;
	}
	for (int i = 1; i < nT + 1; i++)
	{
		nTot = nTot + i;
	}
	cout << nTot << endl;

	return 0;
}