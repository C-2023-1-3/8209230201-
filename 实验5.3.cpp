//需要求3个长方柱的体积，请编一个基于对象的程序。
// 数据成员包括length(长)、width(宽)、height(高)。要求用成员函数实现以下功能：
//(1)由键盘分别输入3个长方柱的长、宽、高；
//(2)计算长方柱的体积；
//(3)输出3个长方柱的体积。
//请编程序，上机调试并运行。
#include<iostream>
using namespace std;
class Number
{
public:
	void set_value();
	void jisuan_value();
	void display();

private:
	int length;
	int width;
	int height;
	int result;
};
void Number::set_value()
{
	cout << "请输入长方柱的长、宽、高分别为:   " << endl;
	cin >> length;
	cin >> width;
	cin >> height;
}
void Number::jisuan_value()
{
	 result = length * width * height;
}
void Number::display()
{
	cout << "长方柱的体积为: " << result << endl;
}
int main()
{
	Number v1, v2, v3;
	v1.set_value();
	v1.jisuan_value();
	v1.display();
	cout << endl;
	v2.set_value();
	v2.jisuan_value();
	v2.display();
	cout << endl;
	v3.set_value();
	v3.jisuan_value();
	v3.display();
	cout << endl;
	system("pause");
	return 0;
}