//检验子串：
//编写如下函数，检验C字符串s1是否是C字符串s2的子串。如果匹配，返回s1在s2中的下标，否则返回–1。
//int indexOf(const char s1[], const char s2[])
//编写测试程序，读入两个C字符串，检验C字符串s1是否是C字符串s2的子串。下面是程序的运行样例：

#include<iostream>
#include<string>
using namespace std;
int indexOf(const char s1[], const char s2[])
{
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    for (int i = 0; i <= len2 - len1; i++) {
        int j;
        for (j = 0; j < len1; j++) {
            if (s1[j] != s2[i + j]) {
               
                break;
            }
        }
        if (j==len1) 
        {
            return i;
        }
    }
    return -1;
}

int main() {
    char s1[100];
    char s2[100];
    cout << "Enter the first string: ";
    cin.getline(s1, 100);
    cout << "Enter the second string: ";
    cin.getline(s2, 100);

    int result = indexOf(s1, s2);
    if (result != -1)
    {
        cout << "indexOf(“" << s1 << "”, “" << s2 << "”) is  " << result << endl;
    }
    else {
        cout << "indexOf(“" << s1 << "”, “" << s2 << "”) is  " << -1 << endl;
    }

    system("pause");
    return 0;
}