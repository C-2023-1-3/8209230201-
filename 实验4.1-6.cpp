//��ʹ�����º���ͷ��д�����������ַ�����ÿ����ĸ���ֵĴ�����
//void count(const char s[], int counts[])
//counts��һ����26��Ԫ�ص��������顣const[0]��const[1]������const[25]�ֱ��¼a��b������z���ֵĴ�����
// ��ĸ���ִ�Сд��������ĸA����ĸa��������a��
//��д���Գ��򣬶����ַ���������count��������ʾ����Ĵ�����
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