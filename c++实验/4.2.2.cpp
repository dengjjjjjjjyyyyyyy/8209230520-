#include<iostream>
#include<cstring>
#include<math.h>
using namespace std;
int transf(char ch)
{
	if ((int)ch >= 65 && (int)ch <= 70)
		return (int)ch - 55;
}
int parseHex(const char* const hexString)
{
	
	int size = strlen(hexString);
	int num = 0, time = 0;
	for (int i =  size - 1; i >= 0; i--)
	{
		if (hexString[i] >= 65 && hexString[i] <= 70)
		{
			num += transf(hexString[i]) * pow(16, time);

		}
		else
		{
			num += (hexString[i] - '0') * pow(16, time);
		}
		time++;
	}
	return num;


}
int main()
{
	char str[999];
	cout << "enter a string:";
	cin.getline(str, 999);
	cout << parseHex(str) << endl;
	
}