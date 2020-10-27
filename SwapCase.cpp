#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
char str[201];
char* p;

void check() {

	for (int i = 0; i < strlen(str); i++)
	{
		if (*p >= 'a' && *p <= 'z')
		{
			printf("%c", (*p - 'a' + 'A'));
			p++;
		}
		else if (*p >= 'A' && *p <= 'Z')
		{
			printf("%c", (*p + 'a' - 'A'));
			p++;
		}
		else
		{
			printf("%c", *p);
			p++;
		}

	}
}
int main() {

	scanf("%[^\n]", str);
	p = str;
	check();
	return 0;
}