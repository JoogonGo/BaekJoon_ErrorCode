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
		for (int j = 0; j < i + 1; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}