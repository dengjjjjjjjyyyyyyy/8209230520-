#include<iostream>
#include<iomanip>
using namespace std;
bool is_prime(int num)
{
	for (int i = 2; i <= num / 2; i++)
	{
		if (num % i == 0)
		{
			return false;
		}	
	}
	return true;
}

void print(int max)
{
	int num = 2;

	int i = 0;
	while (i < max)
	{
		if (is_prime(num))
		{
			i++;
			if (i % 10 == 0)
			{
				cout << setw(5) << num << endl;
			}
			else
			{
				cout << setw(5) << num;
			}
		}
		num++;
	}

}
int main()
{
	cout << "前两百个素数："<< endl;
	print(200);

}