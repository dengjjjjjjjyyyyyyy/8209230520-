#include<iostream>
using namespace std;
void f(int size,int* list)
{
	
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (list[j] > list[j + 1])
			{
				int t = list[j];
				list[j] = list[j + 1];
				list[j + 1] = t;
			}

		}
	}

}
int main()
{
	int size;
	cout << "enter the size:";
	cin >> size;
	cout << "enter the list:";
	int* list = new int[size];
	for (int i = 0; i < size; i++)
	{
		cin >> list[i];
	}
	f(size, list);
	for (int i = 0; i < size; i++)
	{
		cout << *(list + i) << " " ;
	}
	delete []list;
	return 0;
}