#include<stdio.h>
#include<stdlib.h>
#define N 20

int m[N][N];
int l, c;

int initializare()
{
	int i, j;
	printf("\nDati numarul de linii: ");
	scanf("%d", &l);
	printf("Dati numarul de coloane: ");
	scanf("%d", &c);
	printf("\n");
	for (i = 0;i < l;i++)
		for (j = 0;j < c;j++)
		{
			printf("\m[%d][%d]=", i, j);
			scanf("%d", &m[i][j]);
		}
}

void afisare()
{
	int i, j;
	for (i = 0;i < l;i++)
	{
		printf("\n");
		for (j = 0;j < c;j++)
		{
			printf("%d ", m[i][j]);

		}
	}
	printf("\n");
}

void sumadp()
{
	int s = 0;
	int i, j;
	for (i = 0;i < l;i++)
		for (j = 0;j < c;j++)
		{
			if (i == j)
				s = s + m[i][i];
		}
	printf("%d", s);
	printf("\n");

}

void sumads()
{
	int s = 0;
	int i, j;
	for (i = 0;i < l;i++)
		for (j = 0;j < c;j++)
		{
			if (i + j == c - 1)
				s = s + m[i][j];

		}
	printf("%d", s);
	printf("\n");
}



int main()
{


	return 0;
}