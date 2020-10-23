#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
char str[50];
char* p;
void Check()
{
	while (*p != '\0')
	{
		for (int i = 0; i < 10; i++) {
			printf("%c", *p);
			p += 1;
		}
		printf("\n");

	}
}
int main()
{
	scanf("%s", str);
	p = str;
	Check();
	return 0;
}