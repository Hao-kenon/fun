#define  _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<Windows.h>



int main()
{
	float x, y, a;
	for (y = 1.6; y > -1.6; y -= 0.1)
	{
		for (x = -1.6; x < 1.6; x += 0.05)
		{
			a = x * x + y * y - 1;
			putchar(a * a * a - x * x * y * y * y <= 0.0 ? '*' : '.');

		}
		system("color 02");
		putchar('\n');
	}
	return 0;



}

