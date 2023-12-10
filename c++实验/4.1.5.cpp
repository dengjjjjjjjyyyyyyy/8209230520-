 #include<iostream>
#include<cstring>
#define size 999
using namespace std;
int indexOf(const char s1[], const char s2[])
{
	int size1, size2, num = 0;
	int index[size], k[size];
	for (int i = 0; i < size; i++)
	{
		index[i] = -1;
		k[i] = 0;
	}
	size1 = strlen(s1);
	size2 = strlen(s2);
	for (int i = 0; i < size2; i++)
	{
		if (s1[0] == s2[i])
		{
			index[num] = i;
			num++;
		}
	}
	if (index[0] == -1)
	{
		return -1;
	}
	else
	{
		for (int j = 0; j < num; j++)
		{
			for (int i = 1; i < size1; i++)
			{
				for (int m = index[j] + 1; j < index[m] + size1; m++)
				{
					if (s1[i] == s2[m])
					{
						k[j]++;
						break;
					}
				}
			}
		}
	}
	for (int i = 0; i < num; i++)
	{
		int temp = index[i];
		if (k[i] == size1 - 1 && (s2[temp + size1] == 32 || temp + size1 == size2))
		{
			return index[i];
		}
		return -1;
	}

}
int main()
{
	char s1[size], s2[size];
	cout << "enter the first string:";
	cin.getline(s1, size);
	cout << "enter the second string:";
	cin.getline(s2, size);
	cout << "indexOf(¡°"<<s1<<","<<s2 << "¡±)" << "is:" << indexOf(s1, s2);
	return 0;
}