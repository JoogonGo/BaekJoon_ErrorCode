/*
* 내용없음..
*/
#include <iostream>

using namespace std;

int main()
{
	int nA, nB;
	cin >> nA >> nB;
	if (nA < 100 || nA > 999 || nB < 100 || nB > 999)
	{
		return 0;
	}

	cout << nA * (nB % 10) << endl;
	cout << nA * ((nB / 10) % 10) << endl;
	cout << nA * (nB / 100) << endl;
	cout << nA * nB << endl;

	return 0;
}