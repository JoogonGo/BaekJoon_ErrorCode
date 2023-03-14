/*
* 단순 입출력문제
* CString을 안쓰고 해보는거라서 살짝 의문
* char 타입 복기..
*/
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char chID[51];
	
	cin >> chID;
	if (strlen(chID) > 50)
	{
		return 0;
	}
	for (int i = 0; i < strlen(chID); i++)
	{
		if (isupper(chID[i]))
		{
			chID[i] = static_cast<char>(tolower(chID[i]));
		}
	}
	
	cout << chID << "??!" << endl;
	return 0;
}