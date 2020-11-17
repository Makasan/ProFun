#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int Check = 0;
bool sum = true;
char str[201], x;
char* p;

void check() {

	for (int i = 0; i < strlen(str); i++)
	{
		if (*p == 'S' or *p == 's')
		{
			p++;
			Check++;
			if (*p == 'a')
			{
				p++;
				Check++;
				if (*p == 'l')
				{
					p++;
					Check++;
					if (*p == 'a')
					{
						p++;
						Check++;
						if (*p == 'd')
						{
							sum = false;
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
	if (sum == true) {
		printf("I love this!");
	}
	else if (sum == false) {
		printf("I hate this!");
	}
}

int main() {

	scanf("%[^\n]", str);
	p = str;
	check();
	return 0;
}