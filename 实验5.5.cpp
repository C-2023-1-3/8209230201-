//����һ������������Point����˽�б���x��y����һ�����(x, y)����ֵ��
// ���д����ʵ�����¹��ܣ����ù��캯�����ݲ������ڶ������ʱ��x��y����ֵ��ʼ��Ϊ��60, 80����
// ���ù��г�Ա����void setPoint(int i, int j)������ֵ�޸�Ϊ(60 + i, 80 + j)��
// ���ù��г�Ա����display()����޸ĺ������ֵ����������ͨ�����������֤����������
#include<iostream>
using namespace std;
class Point
{
public:
	Point(int a, int b)
	{
		x = a;
		y = b;
	}
	void setPoint(int i, int j)
	{
		x = 60 + i;
		y = 80 + j;
	}
	void display()
	{
		cout << "("<<x << "," << y<<")" << endl;
	}
private:
	double x;
	double y;
};
 
int main()
{
   Point a(60, 80);
   int i, j;
   cin >> i >> j;
	a.setPoint(i, j);
    a.display();
	system("pause");
	return 0;
}