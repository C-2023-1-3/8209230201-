//1����ӡ��ͬ������
//��дһ�����򣬶���10������������в�ͬ�����������һ�������ֶ�Σ�ֻ��ӡһ�Σ���
//��ʾ��������������һ���µ�ֵ���������һ�����顣���򣬽��䶪����������Ϻ������б���ľ��ǲ�ͬ������

#include<iostream>
using namespace std;
int main()
{
	const int count = 10;
	int arr[count];

	cout << "Enter ten numbers:  ";
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	cout << "The distinct numbers are: ";
	cout << arr[0] << "  ";
	for (int a=0;a<count;a++)
	{
		for (int b = 0; b < count; b++)
		{
			if(arr[a]!=arr[b])
			{
				if (b == a - 1)
				{
					cout << arr[a] << " ";
				}
				else
				{
					continue;
				}
			}
			else { break; }
		}
	}
	cout << endl;
	system("pause");
	return 0;
}