/*#include <iostream>
#include <string.h>
#include <string>
using namespace std;
int main()
{
	char s[1000000];
	char m[100];
	int loc = 0;
	int ct = 0;
	cin.getline(m, 10, '\n');
	cin.getline(s, 100000, '\n');
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] >= 'A'&&s[i] <= 'Z')
		{
			s[i] += 32;
		}
	}
	for (int i = 0; i < strlen(m); i++)
	{
		if (m[i] >= 'A'&&m[i] <= 'Z')
		{
			m[i] += 32;
		}
	}
	for (int i = 0; i < strlen(s); i++)
	{
		bool choice1 = false;
		bool choice2 = false;
		if (s[i] == m[0])   //找到第一个字母相同的地方
		{
			if ((i != 0 && s[i - 1] == ' ') || i == 0)
			{
				choice1 = true;
			}
			if (!choice1)
			{
				continue;
			}
			int k = i, j = 0;
			bool choice = true;
			while (j < strlen(m) && choice)
			{
				if (s[k++] == m[j++])
				{
					choice = true;
				}
				else
				{
					choice = false;
				}
			}
			if (!choice)
			{
				continue;
			}
			if (s[k] == ' ' || k == '\0')
			{
				choice2 = true;
			}
			if (choice2)
			{
				loc = i;
				ct++;
			}
		}
	}
	if (ct > 0)
	{
		cout << ct << " " << loc;
	}
	else
		cout << -1;
	return 0;
}

*/