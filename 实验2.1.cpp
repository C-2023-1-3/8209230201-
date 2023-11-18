#include<iostream>
using namespace std;
int main()
{
	char input;
	cout << "请输入一个字符：" << endl;
	cin >> input;
	if (input >= 'a' && input <= 'z')
	{
		input = toupper(input);
		cout <<"其大写字符为："<<input << endl;
	}
	else {
		cout << input + 1 << endl;
	}

	system("pause");
	return 0;
}