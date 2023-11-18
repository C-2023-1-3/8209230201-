#include<iostream>
using namespace std;
int main()
{
	double a, b, c,l;
	cin >> a >> b >> c;
	if (a + b > c && b + c > a && a + c > b)
	{
		cout << "l=" << a + b + c << endl;
		if (a == b || b == c || a == c)
		{
			cout << "此三角形是等腰三角形" << endl;
		}
		else cout << "此三角形不是等腰三角形" << endl;
	}
	else  cout << "无法构成三角形" << endl;

	system("pause");
	return 0;
}