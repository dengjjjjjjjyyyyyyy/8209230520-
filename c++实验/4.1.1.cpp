#include<iostream>
using namespace std;
int main()
{
	int num[10];
	cout << "enter ten numbers:";
	for (int i = 0; i < 10; i++)
	{
		cin >> num[i];
	}
	cout << "the distinct numbers are:";
	cout << num[0]<<" ";
	for (int j = 1;  j< 10; j++)
	{
		for (int k= 0; k < j; k++)
		{
			if (num[j] != num[k])
			{
				if (k == j - 1)
				
					cout << num[j]<<" ";
				
				else
					continue;
			}
			else
				break;
		}
	}
	return 0;
}