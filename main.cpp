//请完善该程序，在类中增加一个对数据成员赋初值的成员函数set_value。上机调试并运行。
//main.cpp                      主函数模块
#include <iostream>             //将类声明头文件包含进来
#include "student.h"
using namespace std;
int main()
{
	cout << "请输入学生的学号、姓名和性别: " << endl;
	Student stud;                //定义对象
    stud.set_value();
	stud.display();              //执行stud对象的display函数
	system("pause");
	return 0;
}
