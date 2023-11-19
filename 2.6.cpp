#include<iostream>
using namespace std;
int main()
{
	int a, b,c,d;
	cin >> a >> b;
	for (int i = 1; i <= a && i <= b; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			c=i;
		}
	}
	for (int i = 1;; i++)
	{
		if (i % a == 0 && i % b == 0)
		{
			d = i;
			break;
		}
	}
	cout << "最大公约数" << c << endl;
	cout << "最小公倍数" << d << endl;
	return 0;
}