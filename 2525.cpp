/*
* ����ó���� �׻� �����ؾ��ϴ� ���� ������ ����..
*/
#include <iostream>

using namespace std;

int main()
{
	int nH, nM, nCook;
	cin >> nH >> nM;
	cin >> nCook;
	if (nH < 0 || nH > 23 || nM < 0 || nM > 59 || nCook < 0 || nCook > 1000)
	{
		return 0;
	}
	if ((nCook / 60) > 0)
	{
		if (nM + (nCook % 60) > 59)
		{
			nH = nH + 1;
			nM = nM + (nCook % 60) - 60;
		}
		else
		{
			nM = nM + (nCook % 60);
		}
		if (nH + (nCook / 60) > 23)
		{
			nH = (nH + (nCook / 60)) - 24;
		}
		else
		{
			nH = nH + (nCook / 60);
		}
	}
	else
	{
		if (nM + (nCook % 60) > 59)
		{
			nH = nH + 1;
			nM = nM + (nCook % 60) - 60;
		}
		else
		{
			nM = nM + (nCook % 60);
		}
		if (nH + (nCook / 60) > 23)
		{
			nH = (nH + (nCook / 60)) - 24;
		}
		else
		{
			nH = nH + (nCook / 60);
		}
	}
	cout << nH << " " << nM << endl;
	return 0;
}