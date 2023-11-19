#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float f, c;
	cin >> f;
	c = 5 / 9.00 * (f - 32);
	cout <<fixed<<setprecision(2)<< c << endl;
	return 0;
}