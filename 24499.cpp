#include <iostream>
#include <cmath>
#include <map>

using namespace std;

int main()
{
	int nNumApplePie;
	int nNumEating;
	cin >> nNumApplePie >> nNumEating;
	if (nNumEating < 1 || nNumApplePie < nNumEating || nNumEating > pow(10, 5))
	{
		return 0;
	}

	map<int, int> mapDelicious;
	for (int i = 0; i < nNumApplePie; i++)
	{
		cin >> mapDelicious[i];
		if (mapDelicious[i] < 1 || mapDelicious[i] > 100)
		{
			return 0;
		}
	}
	
	int nSum = 0, nPos = 0, nRePos = 0;
	int nMaxDelicious = 0;
	bool bRerollSwitch = false;
	while (nPos < nNumApplePie + nNumEating - 1)
	{
		if (nPos < nNumEating)
		{
			nSum = nSum + mapDelicious[nPos];
			nPos++;
			nRePos++;
			nMaxDelicious = nSum;
			continue;
		}
		else
		{
			if (nPos >= nNumApplePie && bRerollSwitch == false)
			{
				nRePos = 0;
				bRerollSwitch = true;
			}
			nSum = nSum + mapDelicious[nRePos] - mapDelicious[nPos - nNumEating];
			if (nMaxDelicious < nSum)
			{
				nMaxDelicious = nSum;
				nPos++;
				nRePos++;
			}
			else
			{
				nPos++;
				nRePos++;
			}
		}
	}

	cout << nMaxDelicious << endl;

	return 0;
}