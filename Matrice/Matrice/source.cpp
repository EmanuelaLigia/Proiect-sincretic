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

int main()
{


	return 0;
}