//������Ȼ��m��n��
//��1�������ǵ����Լ������������������
//Ҫ�����롢������������н��У���Լ���ɺ���ʵ�֡�
//��2���ں����������Լ������С������������ʾ��ʹ�����ò�����
#include<iostream>
using namespace std;
int gys(int a,int b)
{
		if (b == 0) {
			return a; // ��b����0ʱ��a��Ϊ���Լ��
		}
		else {
			return gys(b, a % b);//�ݹ����gys����Լ��)��������b��a����b��������Ϊ�µĲ�������
		}
}

int main()
{
	int m, n;
	cout << "������������m��n�� " << endl;
	cin >> m >> n;
	int x = gys(m,n);
	cout << "�������������Լ��Ϊ�� " << x << endl;
	cout << "������������С������Ϊ�� " << (m * n) / x << endl;
	system("pause");
	return 0;
}