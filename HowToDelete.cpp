#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
char str[500];
char* p;
void HowToDelete()
{
	while (*p != '\0')
	{
		if ((*p >= '0') && (*p <= '9'))
		{
			printf("%c", *p);
		}
		if ((*p >= 'a') && (*p <= 'z'))
		{
			printf("%c", *p);
		}
		if ((*p >= 'A') && (*p <= 'Z'))
		{
			printf("%c", *p);
		}
		p = p + 1;
	}
}
int main() 
{
	
	scanf("%s", str);
	p = str;
	HowToDelete();
	return 0;
}
