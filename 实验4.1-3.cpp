
#include<iostream>
using namespace std;
int main()
{
	//һ��100��������Ԫ�ص�����
	const int number = 100;
	bool arr[number];
	for (int i = 0; i < 100; i++)
	{
		//������еĴ�����ǹرյġ�
		arr[i] = false;
	}
	for (int j = 0; j < number; j++)
	{
		for (int k = j; k < number; k += j + 1)
		{
			//��ת����arr�ĵ�k��Ԫ�ص�ֵ
			if (arr[k])
				arr[k] = false;
			else
				arr[k] = true;
		}
	}
	cout << "���ŵĴ�����ǣ�";
	for (int m = 0; m < number; m++)
	{
		if (arr[m])
		{
			cout << m + 1 << " ";
		}
	}
	cout << endl;
	system("pause");
	return 0;
}