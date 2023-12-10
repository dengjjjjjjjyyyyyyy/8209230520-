#include<iostream>
#include<string>
#include<fstream>
using namespace std;
const int num1 = 26;
const int num2 = 99;
void count(const char s[], int counts[])
{
	for (int i = 0; i < num1; i++)
	{
		counts[i] = 0;
	}
	for (int j = 0; j < num2; j++)
	{
		counts[s[j] - 'a']++;
		counts[s[j] - 'A']++;

	}
}
void Counts(const int counts[])
{
	for (int k = 0; k < num1; k++)
	{
		if (counts[k] != 0)
		{
			cout << static_cast<char>(k + 'a') << "£º" << counts[k] << "times" << endl;
		}
	}
}
int main()
{
	char s[num2];
	int counts[num1];
	cout << "enter a string:";
	cin.getline(s, num2);
	count(s, counts);
	Counts(counts);
	return 0;


}
