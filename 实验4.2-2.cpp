//��дһ�����������ַ�����ʽ��ʾ��һ��16������ת��Ϊ10�������������������в��ԡ�
// ����ԭ�� int parseHex(const char *const hexString);
//�磺���ú��� parseHex(��A5��); ����165
#include<iostream>
using namespace std;
int parseHex(const char* const hexString)
{
    int decimal = 0;
    for (int i = 0; i < strlen(hexString); i++) {
        char hexChar = hexString[i];
        switch (hexChar) {
        case '0':
            decimal += 0;
            break;
        case '1':
            decimal += 1;
            break;
        case '2':
            decimal += 2;
            break;
        case '3':
            decimal += 3;
            break;
        case '4':
            decimal += 4;
            break;
        case '5':
            decimal += 5;
            break;
        case '6':
            decimal += 6;
            break;
        case '7':
            decimal += 7;
            break;
        case '8':
            decimal += 8;
            break;
        case '9':
            decimal += 9;
            break;
        case 'A':
            decimal += 10;
            break;
        case 'B':
            decimal += 11;
            break;
        case 'C':
            decimal += 12;
            break;
        case 'D':
            decimal += 13;
            break;
        case 'E':
            decimal += 14;
            break;
        case 'F':
            decimal += 15;
            break;
        }
        if (i < strlen(hexString) - 1) {
            decimal *= 16;
        }
    }
    return decimal;
}
int main()
{
   

    cout << parseHex("A5") << endl;
    system("pause");
    return 0;
}