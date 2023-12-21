//建立一个对象数组，内放5个学生的（学号，成绩），
// 设立一个函数max，用指向对象的指针作函数参数，
// 在max函数中找出5个学生的最高成绩者，并输出其学号。

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
    cout << "最高成绩者的学号为：" << stu[maxId].id << endl;
}

int main() {
    Student students[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "请输入第" << i + 1 << "个学生的学号和成绩：" << endl;
        cin >> students[i].id >> students[i].score;
    }
    max(students);
    system("pause");
    return 0;
}