#include "stdio.h"

int main()
{
    int a[10][10], b[10][10], c[10][10];

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			a[i][j] = i + j;
			b[i][j] = i + j;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			int aux = 0;

			for (int l = 0; l < 10; l++)
			{
				aux += a[l][j] * b[i][l];
			}

			c[i][j] = aux;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("%d ", c[i][j]);
		}

		printf("\n");
	}
}
