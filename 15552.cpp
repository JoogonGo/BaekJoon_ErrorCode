/*
* 생각지도 못한 문제
* cin.tie(NULL) 구문과 ios_base::sync_with_stdio(false) 구문은..써본적이 없음
* 실제로 개발할때 약간의 c구문을 혼용하기도 했고
* 당연히 멀티스레드가 대부분이였고
* cin, cout은 거의 안쓰이기 때문.
* 좋은 정보 얻을수 있는 문제
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