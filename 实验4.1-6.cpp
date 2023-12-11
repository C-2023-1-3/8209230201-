//请使用如下函数头编写函数，数出字符串中每个字母出现的次数。
//void count(const char s[], int counts[])
//counts是一个有26个元素的整数数组。const[0]，const[1]，…，const[25]分别记录a，b，…，z出现的次数。
// 字母不分大小写，例如字母A和字母a都被看作a。
//编写测试程序，读入字符串并调用count函数，显示非零的次数。
#include<iostream>
#include<string>
using namespace std;
void count(const char s[], int counts[])
{
    for (int i = 0; s[i]; i++) {
        char c = tolower(s[i]);
        if (c >= 'a' && c <= 'z') {
            counts[c - 'a']++;
        }
    }
 }
int main()
{
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    int counts[26] = { 0 };
    count(input.c_str(), counts);

    for (int i = 0; i < 26; i++) 
    {
        if (counts[i] > 0)
        {
            cout << char('a' + i) << ": " << counts[i] << " " <<"times" << endl;
        }
    }
    cout << endl;
	system("pause");
	return 0;
}