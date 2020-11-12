#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int Check = 0, sum = 0;
char str[201], x;
char* p;

void check() {

	for (int i = 0; i < strlen(str); i++)
	{
		if (*p == 'N' or *p == 'n')
		{
			p++;
			Check++;
			if (*p == 'e')
			{
				p++;
				Check++;
				if (*p == 'v')
				{
					p++;
					Check++;
					if (*p == 'e')
					{
						p++;
						Check++;
						if (*p == 'r')
						{
							sum++;
							p++;
						}
					}
				}
			}
		}
		else
		{
			p++;
		}

	}
	printf("%d", sum);
}
int main() {

	scanf("%[^\n]", str);
	p = str;
	check();
	return 0;
}
