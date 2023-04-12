/*
* CString을 사용하려고 했는데 채점기계가 유니코드인지 멀티바이트인지 몰라서 그냥...
*/
#include <iostream>

using namespace std;

int main()
{
	int nInteger;
	cin >> nInteger;
	if (nInteger < 4 || nInteger > 1000 || nInteger % 4 != 0)
	{
		return 0;
	}
	for (int i = 0; i < nInteger / 4; i++)
	{
		cout << "long ";
	}
	cout << "int" << endl;
	return 0;
}