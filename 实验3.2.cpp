#include<iostream>
#include<iomanip>
using namespace std;
bool is_prime(int number);
bool is_prime(int number)
{
	for (int i = 2; i <=number/2; i++)
	{
		if(number%i==0)
		{
			return false;
		}
	}
	return true;
}
void printPrimeNumber(int prime)
{
	const int NUMBER_OF_PRIMES = 200;
	const int LINE = 10;
	int count = 0;
	int number = 2;
	while (count < prime)
	{
		if (is_prime(number))
		{
			count++;
			if (count % LINE == 0)
			{
				cout << setw(5) << number << endl;;
			}
		else
			cout << setw(5) << number;
	     }
		number++;
	}
}
int main()
{
	cout << "前200个素数为： " << endl;
	printPrimeNumber(200);
	system("pause");
	return 0;
}