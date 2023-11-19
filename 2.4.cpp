#include<iostream>
using namespace std;
int main()
{
	char p;
	cout << "请输入运算符" << endl;
	cin >> p;
	float num1, num2;
	cout << "请输入数字" << endl;
	cin >> num1 >> num2;
	switch (p)
	{
	case'+':
		cout << num1 + num2;
		break;
	case'-':
		cout << num1 - num2;
		break;
	case'*':
		cout << num1 * num2;
		break;
	case'/':
		if (num2 == 0)
		{
			cout << "除数不能为0";
			break;
		}
		else
		{
			cout << num1 / num2;
			break;
		}
	case'%':
		if (num2 == 0)
		{
			cout << "除数不能为0";
			break;
		}
		else
		{
			cout << int(num1) % int(num2);
			break;
		}
	default:
		cout << "运算符非法";
		break;
	}
}