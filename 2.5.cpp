#include<iostream>
using namespace std;
int main()
{
	char a;
	int eng = 0, num = 0, space = 0, other = 0;
	while ((a=getchar()) != '\n')
	{
		if (a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z')
		{
			eng++;
		}
		else if (a >= '0' && a <= '9')
		{
			num++;
		}
		else if (a == ' ')
		{
			space++;
		}
		else
		{
			other++;
		}
	}
	cout << "\n英文字符" << eng << "\n数字" << num << "\n空格" << space << "\n其他" << other << endl;
	return 0;
		
}