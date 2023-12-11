#include<iostream>
using namespace std;
void bubblesort(double list[10])
{
	double temp;
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < 10 - 1; j++)
		{
			if (list[j] > list[j + 1])
			{
				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
				changed = true;
			}
		}
	} while (changed == true);
}

int main()
	{
		double list[10];
		cout << "请输入10个数: ";
		for (int i = 0; i < 10; i++)
		{
			cin >> list[i];
		}
		bubblesort(list);
		cout << "排序后的数为： ";
		for (int i = 0; i < 10; i++)
		{
			cout<< list[i]<<" ";
		}
		cout << endl;
		system("pause");
		return 0;
	}