#include<iostream>
#include"mytemperature.h"
using namespace std;
int main()
{
	double c;
	cout << "���������¶�";
	cin >>c;
	cout <<"�����¶�Ϊ"<< celsius_to_fash(c) << endl;
	double f;
	cout << "���뻪���¶�";
	cin >> f;
	cout << "�����¶�Ϊ" << fahrenheit_to_cels(f) << endl;

}