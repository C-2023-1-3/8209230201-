#include<iostream>
using namespace std;
int main()
{
	int a=0, x=0, y=0;
	cout << "请输入一个a值：" << endl;
	cin >> a;
	if (a < 0)
	{
		a = -a;
		cout << "已对负数a进行处理，改为正数" << endl;
	}
		x = a;
		while (1)
		{
			y = (x + a / x) / 2;
			x = (y + a / y) / 2;
			if (abs(y - x) < 1e-5)
			{
				cout << "这个数的平方根为：" << x << endl;
				break;
			}
			y = x;
		}

	system("pause");
	return 0;
}