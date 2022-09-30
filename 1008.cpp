/*
* 부동소수점 문제인건 쉽게 알았지만
* 정작 가장 기본적인 조건을 잘못읽어서
* 4번이나 틀려버린 문제...
*/
#include <iostream>

using namespace std;

int main()
{
	int n1, n2;
	cin >> n1 >> n2;
	// 조건을 제대로 읽자. 예제만 보지 말고...
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