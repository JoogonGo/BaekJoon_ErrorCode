/*
* ������ ������ȯ ����
* �׷��� �̰͵� �ٸ��� ���� �޸� ��뷮 ���� ������ �ִµ� �ϴ�..
* �帧�� �̰� �´µ�. �Ƹ� �ٷ� ������ȯ�ϴ� �����ΰ� �ִ°�������
*/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int nNum;
	cin >> nNum;
	if (nNum < 1 || nNum > 10000)
	{
		return 0;
	}

	int nConvertNum = 0;
	int nPos = 0;
	while (true)
	{
		int nTmp1 = nNum / 9;
		int nTmp2 = nNum % 9;
		if (nTmp1 >= 9)
		{
			nConvertNum = nConvertNum + (pow(10, nPos) * nTmp2);
			nPos++;
			nNum = nTmp1;
		}
		else
		{
			nConvertNum = nConvertNum + (pow(10, nPos) * nTmp2);
			nConvertNum = nConvertNum + (pow(10, nPos + 1) * nTmp1);
			break;
		}
	}
	cout << nConvertNum << endl;

	return 0;
}