#include <stdio.h>
/**
 *main-function begins
 *
 *Return: function ends
 */
int main(void)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int m = 1;
	int jcount = 0;
	int kcount = 0;
	int mcount = 1;
	int count = 1;
	int kkcount = 0;
	int ccount = 1;

	for (; i < 10; i++)
	{
		for (; j < 9; j++)
		{
			for (; k < 10; k++)
			{
				for (; m < 10; m++)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(32);
					putchar(k + '0');
					putchar(m + '0');
					putchar(44);
					putchar(32);
				}
				count++;
				m = count;
			}
			kcount++;
			k = kcount;
			ccount++;
			count = ccount;
			m = ccount;

		}
		jcount++;
		j = jcount;
		kkcount++;
		k = kkcount;
		mcount++;
		m = mcount;
	}
	putchar('\n');
	return (0);
}
