#include<iostream>
using namespace std;
void f(double list[10])
{
	
	bool changed = true;
	do
	{
		double t;
		changed = false;
		for (int j = 0; j < 9; j++)
			if (list[j] > list[j + 1])
			{
				
				t = list[j];
			    list[j] = list[j+1];
				list[j + 1] = t;
				changed = true;
			}
	} while (changed);

}
int main()
{
	double list[10];
	cout << "ÅÅĞòÇ°£º";
	for (int i = 0; i < 10; i++)
	{
		cin >> list[i];
	}
	f(list);
	cout << "ÅÅĞòºó£º";
	for (int j = 0; j < 10; j++)
	{
		cout << list[j] <<" ";

	}
	return 0;
	
}