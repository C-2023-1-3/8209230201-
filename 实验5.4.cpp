//����һ���������飬�ڷ�5��ѧ���ģ�ѧ�ţ��ɼ�����
// ����һ������max����ָ������ָ��������������
// ��max�������ҳ�5��ѧ������߳ɼ��ߣ��������ѧ�š�

#include <iostream>
using namespace std;
class Student 
{
public:
    int id;
    int score;
};

void max(Student* stu) 
{
    int maxScore = stu[0].score;
    int maxId = 0;
    for (int i = 1; i < 5; i++) 
    {
        if (stu[i].score > maxScore) 
        {
            maxScore = stu[i].score;
            maxId = i;
        }
    }
    cout << "��߳ɼ��ߵ�ѧ��Ϊ��" << stu[maxId].id << endl;
}

int main() {
    Student students[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "�������" << i + 1 << "��ѧ����ѧ�źͳɼ���" << endl;
        cin >> students[i].id >> students[i].score;
    }
    max(students);
    system("pause");
    return 0;
}