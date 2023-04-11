/*
* 특이사항 없음..
*/
#include <iostream>

using namespace std;

int main()
{
	int nScore;
	cin >> nScore;
	if (nScore < 0 || nScore > 100)
	{
		return 0;
	}
	if (nScore >= 90 && nScore <= 100)
	{
		cout << "A" << endl;
	}
	else if (nScore >= 80 && nScore <= 89)
	{
		cout << "B" << endl;
	}
	else if(nScore >= 70 && nScore <= 79)
	{
		cout << "C" << endl;
	}
	else if (nScore >= 60 && nScore <= 69)
	{
		cout << "D" << endl;
	}
	else
	{
		cout << "F" << endl;
	}
	return 0;
}