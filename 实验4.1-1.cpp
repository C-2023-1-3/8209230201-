//1、打印不同的数：
//编写一个程序，读入10个数，输出其中不同的数（即如果一个数出现多次，只打印一次）。
//提示：读入的数如果是一个新的值，则将其存入一个数组。否则，将其丢弃。输入完毕后，数组中保存的就是不同的数。

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