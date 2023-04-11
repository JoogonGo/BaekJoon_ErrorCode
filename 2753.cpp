/*
* 특이사항 없음..
*/
#include <iostream>

using namespace std;

int main()
{
	unsigned int nYear;
	cin >> nYear;
	if (nYear < 1 || nYear > 4000)
	{
		return 0;
	}
	if (nYear % 4 == 0 && nYear % 100 != 0)
	{
		cout << "1" << endl;
	}
	else if (nYear % 400 == 0)
	{
		cout << "1" << endl;
	}
	else
	{
		cout << "0" << endl;
	}
	return 0;
}