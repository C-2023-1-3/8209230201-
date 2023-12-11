//输入自然数m和n，
//（1）求他们的最大公约数（或称最大公因数）。
//要求输入、输出在主函数中进行，求公约数由函数实现。
//（2）在函数中求最大公约数与最小公倍数。（提示：使用引用参数）
#include<iostream>
using namespace std;
int gys(int a,int b)
{
		if (b == 0) {
			return a; // 当b等于0时，a即为最大公约数
		}
		else {
			return gys(b, a % b);//递归调用gys（公约数)函数，将b和a除以b的余数作为新的参数传入
		}
}

int main()
{
	int m, n;
	cout << "请输入两个数m、n： " << endl;
	cin >> m >> n;
	int x = gys(m,n);
	cout << "这两个数的最大公约数为： " << x << endl;
	cout << "这两个数的最小公倍数为： " << (m * n) / x << endl;
	system("pause");
	return 0;
}