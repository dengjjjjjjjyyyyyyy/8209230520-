#include<iostream>
using namespace std;
int main()
{
	double a,x,t,x1;
	cin >> a;
	x = a;
	do
	{
		x1 = (x + a / x) / 2;
		t = x;
		x = x1;
		x1 = t;
	}
	while (fabs(x - x1) > 1 / 1000000000);
	cout << x << endl;
	return 0;
}