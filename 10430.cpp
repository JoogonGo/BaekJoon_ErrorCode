/*
* 내용없음..
*/
#include <iostream>

using namespace std;

int main()
{
	int nA, nB, nC;
	cin >> nA >> nB >> nC;
	if (nA < 2 || nA > 10000 || nB < 2 || nB > 10000 || nC < 2 || nC > 10000)
	{
		return 0;
	}

	cout << (nA + nB) % nC << endl;
	cout << ((nA % nC) + (nB % nC)) % nC << endl;
	cout << (nA * nB) % nC << endl;
	cout << ((nA % nC) * (nB % nC)) % nC << endl;

	return 0;
}