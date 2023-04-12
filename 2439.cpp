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
	cin >> nT;
	if (nT < 1 || nT > 100)
	{
		return 0;
	}
	for (int i = 0; i < nT; i++)
	{
		for (int j = i; j < nT - 1; j++)
		{
			cout << " ";
		}
		for (int k = 0; k < i + 1; k++)
		{
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}