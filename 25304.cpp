/*
* 특이사항 없음..
*/
#include <iostream>

using namespace std;

int main()
{
	int nTot, nProduct, *nPrice, *nCount, nAll = 0;
	bool bCheck = true;
	cin >> nTot;
	cin >> nProduct;
	nPrice = new int[nProduct];
	nCount = new int[nProduct];
	for (int i = 0; i < nProduct; i++)
	{
		cin >> nPrice[i] >> nCount[i];
		if (nPrice[i] < 1 || nPrice[i] > 1000000 || nCount[i] < 1 || nCount[i] > 10)
		{
			bCheck = false;
		}
		else
		{
			nAll = nAll + (nPrice[i] * nCount[i]);
		}
	}
	if (nTot < 1 || nTot > 1000000000 || nProduct < 1 || nProduct > 100 || bCheck == false)
	{
		return 0;
	}
	if (nAll == nTot)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}

	delete[] nPrice;
	delete[] nCount;

	return 0;
}