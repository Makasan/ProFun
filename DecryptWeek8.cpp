#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int num;
char str[50];
char* p;
void Decrypt()
{
	for (int i = 1; i <= num; i++)
	{
		printf("%d) ", i);
		scanf("%s", str, 49);
		p = str;
		printf("Ans % d = ", i);
		while (*p != '\0')
		{
			*p -= 6;
			printf(" %c", *p);
			p += 1;
		}
		printf("\n");
	}
}
int main() {
	printf("number of message = ");
	scanf("%d", &num);
	Decrypt();
	return 0;
}