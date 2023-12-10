#include<iostream>
using namespace std;
unsigned int f1(unsigned int a, unsigned int b)
{
	unsigned int min;
	for (unsigned int i = 1; i <= a && i <= b; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			min = i;

		}
	}
	return min;
}
unsigned int f2(unsigned int a, unsigned int b)
{
	unsigned int max;
    for (unsigned int i = 1; ; i++)
	{
		if (i % a == 0 && i %b == 0)
		{
			max = i;
			break;
		}
	}
	return max;
}
int main()
{
	unsigned int m, n;
	cout << "m=";
	cin >> m;
	cout << "n=";
	cin >> n;
	cout <<"最大公因数" << f1(m, n) << endl;
	cout << "最小公倍数" << f2(m, n) << endl;

}