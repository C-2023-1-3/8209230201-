//��Ҫ��3������������������һ�����ڶ���ĳ���
// ���ݳ�Ա����length(��)��width(��)��height(��)��Ҫ���ó�Ա����ʵ�����¹��ܣ�
//(1)�ɼ��̷ֱ�����3���������ĳ������ߣ�
//(2)���㳤�����������
//(3)���3���������������
//�������ϻ����Բ����С�
#include<iostream>
using namespace std;
class Number
{
public:
	void set_value();
	void jisuan_value();
	void display();

private:
	int length;
	int width;
	int height;
	int result;
};
void Number::set_value()
{
	cout << "�����볤�����ĳ������߷ֱ�Ϊ:   " << endl;
	cin >> length;
	cin >> width;
	cin >> height;
}
void Number::jisuan_value()
{
	 result = length * width * height;
}
void Number::display()
{
	cout << "�����������Ϊ: " << result << endl;
}
int main()
{
	Number v1, v2, v3;
	v1.set_value();
	v1.jisuan_value();
	v1.display();
	cout << endl;
	v2.set_value();
	v2.jisuan_value();
	v2.display();
	cout << endl;
	v3.set_value();
	v3.jisuan_value();
	v3.display();
	cout << endl;
	system("pause");
	return 0;
}