/*
* 10�� 12�������� �����ϴ�..�����ϰ� longlong����
*/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	long long nA, nB, nC;
	cin >> nA >> nB >> nC;
	if (nA < 1 || nA > static_cast<long long>(pow(10, 12)) || nB < 1 || nB > static_cast<long long>(pow(10, 12)) || nC < 1 || nC > static_cast<long long>(pow(10, 12)))
	{
		return 0;
	}

	cout << nA + nB + nC << endl;
	
	return 0;
}