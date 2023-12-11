//5、猴子吃桃：猴子第一天摘若干桃子，当即吃了一半，还不过瘾，又吃了一个。
// 第二天又将剩下的桃子吃掉一半，又多吃一个，以后每天如此，到第10天，发现只剩最后一个桃子，
// 问，第一天猴子共摘多少桃子（用递归实现）。
//10——1/9——4/8——（4+1）*2/7——（10+1）*2.。。。。。
//1——1534个桃
#include<iostream>
using namespace std;
int number(int days)
{
	if (days == 10)
	{
		return 1;
	}
	else
	{
		return (number(days +1)+1)*2 ;
	}
}
int main()
{
	int n;
	n =number(1);
	cout << "第一天猴子共摘了"<<n<<"个桃子。" << endl;
	return 0;
}