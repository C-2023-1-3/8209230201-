#include<iostream> 
using namespace std;
int main()
{
	int a, b;
	int max = 0;
	cout << "请输入两个正整数：" << endl;
	cin >> a >> b;
	for (int i = 1; i <= a && i <= b; i++)
	{
		if(a%i==0&&b%i==0)
		{
			max = i;
			cout << "最大公约数为：" <<i<< endl;
		}
	}
	int MAX = (a > b ? a : b);
	do {
		if (MAX % a == 0 && MAX % b == 0)
		{
			cout << "最小公约数为：" << MAX << endl;
			break;
		}
		else MAX++;
	} while (true);
	system("pause");
	return 0;
}