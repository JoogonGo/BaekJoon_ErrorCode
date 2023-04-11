/*
* 특이사항 없음..
*/
#include <iostream>

using namespace std;

int main()
{
	int nX, nY;
	cin >> nX;
	cin >> nY;
	if (nX < -1000 || nX > 1000 || nY < -1000 || nY > 1000 || nX == 0 || nY == 0)
	{
		return 0;
	}
	if (nX > 0 && nY > 0)
	{
		cout << "1" << endl;
	}
	else if (nX < 0 && nY > 0)
	{
		cout << "2" << endl;
	}
	else if (nX < 0 && nY < 0)
	{
		cout << "3" << endl;
	}
	else
	{
		cout << "4" << endl;
	}
	return 0;
}