#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	int seed;
	int seed2;
	scanf_s("%d", &seed);
	srand(seed);
	int a[11] = {0};
	int b = 0;
	int dice1,dice2;
	int total;
	int i,j;
	int k[6][6] = {0};
	int w,h;
	while (b < 36000)
	{
		
		dice1 = (rand() % 6) + 1;
		
		dice2 = (rand() % 6) + 1;
		total = dice1 + dice2;
		
		if (dice1 == 1)
		{
			for (w = 1; w <= 6; w++)
			{
				if (dice1 + w == total)
				{
					k[dice1 - 1][w-1]++;
				}
			}
		}
		else if (dice1 == 2)
		{
			for (w = 1; w <= 6; w++)
			{
				if (dice1 + w == total)
				{
					k[dice1 - 1][w-1]++;
				}
			}
		}
		else if (dice1 == 3)
		{
			for (w = 1; w <= 6; w++)
			{
				if (dice1 + w == total)
				{
					k[dice1 - 1][w-1]++;
				}
			}
		}
		else if (dice1 == 4)
		{
			for (w = 1; w <= 6; w++)
			{
				if (dice1 + w == total)
				{
					k[dice1 - 1][w-1]++;
				}
			}
		}
		else if (dice1 == 5)
		{
			for (w = 1; w <= 6; w++)
			{
				if (dice1 + w == total)
				{
					k[dice1 - 1][w-1]++;
				}
			}
		}
		else if (dice1 == 6)
		{
			for (w = 1; w <= 6; w++)
			{
				if (dice1 + w == total)
				{
					k[dice1 - 1][w-1]++;
				}
			}
		}

		a[total - 2]++;
		
		b++;
		total = 0;
	}
	for (j = 0; j <= 10; j++)
	{
		printf("a [%d] = %d \n", j+2, a[j]);
	}
	for (h = 0; h <= 5; h++)
	{
		for (w = 0; w <= 5; w++)
		{
				printf("%d	",k[h][w]);
			
		}
		printf("\n");
	}
	system("pause");
	return 0;
}