#include <iostream>
using namespace std;
int main()
{
    char c;
    int letterCount = 0;
    int spaceCount = 0;
    int digitCount = 0;
    int otherCount = 0;

    cout << "请输入一行字符："<<endl;

    while ((c = cin.get()) != '\n')//(c = cin.get()) != '\n'例如获取abc中的a
    {
        if (isalpha(c)) {
            letterCount++;
        }
        else if (isspace(c)) {
            spaceCount++;
        }
        else if (isdigit(c)) {
            digitCount++;
        }
        else {
            otherCount++;
        }
    }

    cout << "英文字母个数：" << letterCount << endl;
    cout << "空格个数：" << spaceCount << endl;
    cout << "数字字符个数：" << digitCount << endl;
    cout << "其他字符个数：" << otherCount << endl;
    system("pause");
    return 0;
}