#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int nTotPerson;
	cin >> nTotPerson;
	if (nTotPerson < 1 || nTotPerson > 100000)
	{
		return 0;
	}

	vector<pair<int, int>> vecPerson;
	vecPerson.resize(nTotPerson);
	for (int i = 0; i < vecPerson.size(); i++)
	{
		int n1, n2;
		cin >> n1 >> n2;
		if (n1 < -100000000 || n1 > 100000000)
		{
			return 0;
		}
		if (n2 < -100000000 || n2 > 100000000)
		{
			return 0;
		}
		
		vecPerson[i] = make_pair(min(n1, n2), max(n1, n2));
	}
	sort(vecPerson.begin(), vecPerson.end());

	int nTotLength;
	cin >> nTotLength;
	if (nTotLength < 1 || nTotLength > 200000000)
	{
		return 0;
	}

	int nStart = 0, nEnd = 0;
	int nCount = 0, nMax = 0;

	for (int i = 0; i < vecPerson.size(); i++)
	{
		if (nStart == 0 && nEnd == 0)
		{
			if ((vecPerson[i].second - vecPerson[i].first) <= nTotLength)
			{
				nStart = vecPerson[i].second - nTotLength;
				nEnd = vecPerson[i].second;
				nCount++;
				nMax++;
			}
			else
			{
				vecPerson.erase(vecPerson.begin() + i);
				i--;
				continue;
			}
		}
		else
		{
			if (vecPerson[i].second > nEnd)
			{
				for (int j = 0; j < i; j++)
				{
					if (vecPerson[i].second - nTotLength > vecPerson[j].first)
					{
						vecPerson.erase(vecPerson.begin() + j);
						j--;
						i--;
						nCount--;
					}
					else
					{
						break;
					}
				}
				nStart = vecPerson[i].second - nTotLength;
				nEnd = vecPerson[i].second;
				nCount++;
				if (nMax < nCount)
				{
					nMax++;
				}
			}
			else
			{
				nCount++;
				if (nMax < nCount)
				{
					nMax++;
				}
			}
		}
	}
	cout << nMax << endl;

	return 0;
}