/*
* 특이사항 없음..
*/
#include <iostream>

using namespace std;

int main()
{
	int nNumber;
	cin >> nNumber;
	if (nNumber < 1 || nNumber > 9)
	{
		return 0;
	}
	for (int i = 1; i < 10; i++)
	{
		cout << nNumber << " * " << i << " = " << nNumber * i << endl;
	}
	
	return 0;
}