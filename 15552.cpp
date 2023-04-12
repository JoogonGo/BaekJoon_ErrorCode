/*
* �������� ���� ����
* cin.tie(NULL) ������ ios_base::sync_with_stdio(false) ������..�ẻ���� ����
* ������ �����Ҷ� �ణ�� c������ ȥ���ϱ⵵ �߰�
* �翬�� ��Ƽ�����尡 ��κ��̿���
* cin, cout�� ���� �Ⱦ��̱� ����.
* ���� ���� ������ �ִ� ����
*/
#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int nT;
	int nA, nB;
	cin >> nT;
	if (nT > 1000000)
	{
		return 0;
	}
	for (int i = 0; i < nT; i++)
	{
		cin >> nA >> nB;
		if (nA < 1 || nA > 1000 || nB < 1 || nB > 1000)
		{
			return 0;
		}
		cout << nA + nB << "\n";
	}
	
	return 0;
}