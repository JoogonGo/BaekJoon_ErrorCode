/*
* CString�� ����Ϸ��� �ߴµ� ä����谡 �����ڵ����� ��Ƽ����Ʈ���� ���� �׳�...
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