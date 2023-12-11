
#include<iostream>
using namespace std;
int main()
{
	//一个100个布尔型元素的数组
	const int number = 100;
	bool arr[number];
	for (int i = 0; i < 100; i++)
	{
		//最初所有的储物柜都是关闭的。
		arr[i] = false;
	}
	for (int j = 0; j < number; j++)
	{
		for (int k = j; k < number; k += j + 1)
		{
			//翻转数组arr的第k个元素的值
			if (arr[k])
				arr[k] = false;
			else
				arr[k] = true;
		}
	}
	cout << "开着的存物柜是：";
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