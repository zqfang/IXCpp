#include <iostream>
using namespace std;
//int fun(char* s1, char* s2);
/*void main102()
{
	char s1[1024];
	char s2[256];
	cout << "please input a string:" << endl;
	cin.getline(s1, 1024);
	cout << "please input other string:" << endl;
	cin.getline(s2, 256);
	cout << fun(s1, s2) << endl;
	return;
}
*/
/*int fun(char* s1, char* s2)
{
	int size;
	int s1_len;
	int s2_len;
	for (s1_len = 0; s1[s1_len] != 0; s1_len++);
	for (s2_len = 0; s2[s2_len] != 0; s1_len++);

	for (int i = 0; i < s1_len; i++)
	{
		int j = 0;
		for (; j < s2_len; j++)
		{
			if (s1[i + j] != s2[j])
				break;
			if (j == s2_len)
			{
				++size;
				i += j;
				--i;

			}
		}
	}
	return size;
} */