/*
* �ܼ� ����¹���
* CString�� �Ⱦ��� �غ��°Ŷ� ��¦ �ǹ�
* char Ÿ�� ����..
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