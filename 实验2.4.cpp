#include <iostream>
using namespace std;
int main()
{
    char op;
   int num1, num2;

   cout << "输入运算符：+、-、*、/ 、%: " << endl;;
    cin >> op;

    cout << "输入两个数: " << endl;;
    cin >> num1 >> num2;

    switch (op)
    {
    case '+':
        cout << num1 + num2 << endl;
        break;

    case '-':
        cout << num1 - num2 << endl;
        break;

    case '*':
        cout << num1 * num2<<endl;
        break;

    case '/':
        if (num2 == 0)
        {
            cout << "error,不能除以零"<<endl;
            break;
        }
        else
        {
            cout << num1 / num2<<endl;
            break;
        }
    case '%':
        if (num2 == 0)
        {
            cout << "error,不能除以零"<<endl;
            break;
        }
        else
        {
            cout << num1 % num2 << endl;//两个小数不能做取模运算
            break;
        }
    default:
        cout << "Error!  请输入正确运算符。"<<endl;
        break;
    }
    system("pause");
    return 0;
}