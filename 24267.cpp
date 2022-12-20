/*
* 시간초과
* 아마 MenOfPassion을 구현해서 그런듯
*/
#include <iostream>

using namespace std;

int MenOfPassion(int n)
{
	int sum = 0;
	for (int i = 1; i <= n - 2; i++)
	{
		for (int j = i + 1; j <= n - 1; j++)
		{
			for (int k = j + 1; k <= n; k++)
			{
				sum++;
			}
		}
	}

	return sum;
}

int main()
{
	int n;
	cin >> n;

	if (n < 1 || n > 500000)
	{
		return 0;
	}

	int nSum = MenOfPassion(n);

	cout << nSum << endl;
	/*
	* 무조건 O(n3)아닌가?
	*/
	cout << 3 << endl;

	return 0;
}