//�����Ƹó�������������һ�������ݳ�Ա����ֵ�ĳ�Ա����set_value���ϻ����Բ����С�
//main.cpp                      ������ģ��
#include <iostream>             //��������ͷ�ļ���������
#include "student.h"
using namespace std;
int main()
{
	cout << "������ѧ����ѧ�š��������Ա�: " << endl;
	Student stud;                //�������
    stud.set_value();
	stud.display();              //ִ��stud�����display����
	system("pause");
	return 0;
}
