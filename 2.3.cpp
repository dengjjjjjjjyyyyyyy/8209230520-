#include<iostream>
using namespace std;
int main()
{
	float a, b, c;
	cin >> a >> b >> c;
	float p;
	p = a + b + c;
	if (a + b > c && a - b < c)
	{
		cout << p;
	
		if (a == b || b == c || a == c)
			cout << "该三角形是等腰三角形" << endl;
		else
			cout << "该三角形不是等腰三角形" << endl;
	}
	else
		cout << "三边构不成三角形" << endl;

	return 0;



}