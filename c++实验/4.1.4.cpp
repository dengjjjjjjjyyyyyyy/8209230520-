#include<iostream>
#include<string>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	
	int temp;
	for (int m = 0; m < size1; m++)
		list3[m] = list1[m];
	for (int n = 0; n < size2; n++)
		list3[size1 + n] = list2[n];
	cout << "the merged list is£º";
	for (int a = 0; a < (size1 + size2)-1; a++)
	{
		for (int b = 0; b < (size1+size2)- 1; b++)
		{
			if (list3[b] > list3[b + 1])
			{
				temp = list3[b];
				list3[b] = list3[b + 1];
				list3[b + 1] = temp;
			}
		}
	}
	for (int c = 0; c < (size1 + size2); c++)
	{
		cout << list3[c] << " ";
	}
	

}
int main()
{
	int size1,size2,size3;
	cout << "enter size1£º";
	cin >> size1;
	int *list1;
	list1 = new int[size1];
	cout << "enter list1£º";
	for (int i = 0; i < size1; i++)
	{
		cin >> list1[i];
	}
	cout << "enter size2£º";
	cin >> size2;
	int* list2;
	list2 = new int[size2];
	cout << "enter list2£º";
	for (int j = 0; j < size2; j++)
		cin >> list2[j];
	int* list3;
	size3 = size1 + size2;
	list3 = new int[size3];
	merge(list1, size1, list2, size2, list3);
}
