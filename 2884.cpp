/*
* ����ó���� �׻� �����ؾ��ϴ� ���� ������ ����..
*/
#include <iostream>

using namespace std;

int main()
{
	int nH, nM;
	cin >> nH >> nM;
	if (nH < 0 || nH > 23 || nM < 0 || nM > 59)
	{
		return 0;
	}
	if (nM < 45)
	{
		if (nH == 0)
		{
			nH = 23;
		}
		else
		{
			nH--;
		}
		nM = 60 + nM - 45;
	}
	else
	{
		nM = nM - 45;
	}
	cout << nH << " " << nM << endl;
	return 0;
}