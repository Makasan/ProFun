#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>
char str[1000];
char* p1;
char* p2;
char* p0;
int end, sum=0, check = 0;

void Palindrome()
{
	end = strlen(str);

	while (*p0 != '\0')
	{
		if ( !((*p0 >= '0') and (*p0 <= '9')))
		{
			check++;
		}
		p0++;
	}
	
	if ((*p1 >= '0' and *p1 <= '9'))
	{

		for (int i = 1; i <= end / 2; i++)
		{
			p2 = &str[end - i];
			if (*p1 != *p2)
			{
				sum++;
			}
			p1++;
		}
	}
	
}
int main()
{
	scanf("%s", str);
	p1 = str;
	p0 = str;
	Palindrome();
	if (check == 0)
	{
		if (sum != 0)
		{
			printf("Not Palindromes");
		}
		else if (sum == 0)
		{
			printf("Palindromes");
		}
	}
	else {
		printf("Error");
	}
	return 0;
}
	
