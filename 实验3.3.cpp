//���ʵ�������¶ȵ������¶ȵ�ת����
//��дһ��ͷ�ļ���������������������
//double celsius_to_fah(double cel)    //�����¶ȵ������¶�
//double fahrenheit_to_cels(double fah) //�����¶ȵ������¶�
//ʵ��ͷ�ļ�������д���Գ��򣬵��ú�����ʾ���½����
//Celsius    Fahrenheit | Fahrenheit       Celsius
//40.0       105.0 | 120.0            48.89
//39.0       102.0 | 110.0            43.33
//����       ���� | ����             ����
//31.0        87.8 | 30.0 - 1.11
//�����Գ���Ϊ��ģ�飬��main()�������ڵ�CPP�ļ���ͷ�ļ�mytemperature.hֻ�к�����������������д����һCPP�ļ�mytemperature.cpp��
#include<iostream>
#include<iomanip>
#include"mytemperature.h"
using namespace std;
int main()
{
    double cel1, fah1;
    double cel2, fah2;
    cout << "Celsius    Fahrenheit   |   Fahrenheit   Celsius    " << endl;

    for (double cel1 = 40.0, fah2=120.0; cel1 >= 31.0,fah2>=30.0; cel1--,fah2-=10.0)
    {
        fah1 = celsius_to_fah(cel1);
        cout << setiosflags(ios::fixed) << setprecision(1) << cel1 << "          " << setprecision(1) << fah1 << "         " ;
        cel2 = fahrenheit_to_cels(fah2);
        cout << setiosflags(ios::fixed) << setprecision(1)<< fah2 << "            " << setprecision(2)<<cel2 << "        " << endl;
    }
            
    system("pause");
    return 40.0;
}