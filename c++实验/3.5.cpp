#include<iostream>
using namespace std;
int f(int t)
{
	return (t + 1) * 2;
}
int main()
{
	int sum=1;
	for (int i = 1; i < 10; i++)
	{

		sum = f(sum);
	}
	cout << sum << endl;
	return 0;
}