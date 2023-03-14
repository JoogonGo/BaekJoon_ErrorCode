/*
* 설명없음..
*/
#include <iostream>

using namespace std;

int main()
{
	int nY;
	cin >> nY;
	if (nY < 1000 || nY > 3000)
	{
		return 0;
	}

	cout << nY - 543 << endl;

	return 0;
}