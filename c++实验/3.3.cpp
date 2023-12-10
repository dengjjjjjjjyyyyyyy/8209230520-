#include<iostream>
#include"mytemperature.h"
using namespace std;
int main()
{
	double c;
	cout << "输入摄氏温度";
	cin >>c;
	cout <<"华氏温度为"<< celsius_to_fash(c) << endl;
	double f;
	cout << "输入华氏温度";
	cin >> f;
	cout << "摄氏温度为" << fahrenheit_to_cels(f) << endl;

}