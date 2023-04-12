/*
* 특이사항 없음..
*/
#include <iostream>

using namespace std;

int main()
{
	int nT;
	int* nA, * nB;
	cin >> nT;
	nA = new int[nT];
	nB = new int[nT];
	for (int i = 0; i < nT; i++)
	{
		cin >> nA[i] >> nB[i];
	}
	for (int i = 0; i < nT; i++)
	{
		cout << nA[i] + nB[i] << endl;
	}
	delete[] nA;
	delete[] nB;

	return 0;
}