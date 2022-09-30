/*
* 간단한 진수변환 문제
* 그런데 이것도 다른분 정답 메모리 사용량 보니 문제가 있는듯 하다..
* 흐름은 이게 맞는듯. 아마 바로 진수변환하는 무엇인가 있는거일지도
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