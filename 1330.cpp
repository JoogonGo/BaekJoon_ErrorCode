/*
* 특이사항 없음..
*/
#include <iostream>

using namespace std;

int main()
{
	int nA, nB;
	cin >> nA >> nB;
	if (nA < -10000 || nA > 10000 || nB < -10000 || nB > 10000)
	{
		return 0;
	}
	if (nA > nB)
	{
		cout << ">" << endl;
	}
	else if (nA < nB)
	{
		cout << "<" << endl;
	}
	else
	{
		cout << "==" << endl;
	}
	return 0;
}