/*
* �ε��Ҽ��� �����ΰ� ���� �˾�����
* ���� ���� �⺻���� ������ �߸��о
* 4���̳� Ʋ������ ����...
*/
#include <iostream>

using namespace std;

int main()
{
	int n1, n2;
	cin >> n1 >> n2;
	// ������ ����� ����. ������ ���� ����...
	if (n1 < 1 || n1 > 9 || n2 < 1 || n2 > 9)
	{
		return 0;
	}
	double dResult = (double)n1 / n2;

	cout.precision(14);
	cout << fixed;
	cout << dResult << endl;

	return 0;
}