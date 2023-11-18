#include <iostream>
using namespace std;
const double PI = 3.141592657;
int main()
{
    double radius, height;

    cout << "请输入圆锥底的半径：";
    cin >> radius;

    cout << "请输入圆锥的高：";
    cin >> height;
    double volume = (PI * radius * radius * height) / 3;
    cout << "圆锥的体积为：" << volume << endl;
    system("pause");
    return 0;
}
