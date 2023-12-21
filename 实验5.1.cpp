#include<iostream>
using namespace std;
class Time
{
public:
	void set_time()
	{
		cin >> hour;
		cin >> minute;
		cin >> sec;
	}
	void show_time()
	{
		cout << "hour:minute:second = "<<hour << ":" << minute << ":" << sec << endl;
	}
private:
	int hour;
	int minute;
	int sec;
};

int main()
{
	Time tl;
	tl.set_time();
	tl.show_time();
	return 0;

}