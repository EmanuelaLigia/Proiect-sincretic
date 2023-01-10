#include<stdio.h>
#include<stdlib.h>
#define N 20

int m[N][N];
int l, c;

void initializare()
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

void minmaxdp()
{
	int min = 9, max = 0;
	int i, j;
	for (i = 0;i < l;i++)
		for (j = 0;j < c;j++)
		{
			if (i > j)
			{
				if (m[i][j] < min)
					min = m[i][j];
				if (m[i][j] > max)
					max = m[i][j];

			}
		}
	printf("\nMINIMUL ESTE %d", min);
	printf("\nMAXIMUL ESTE %d", max);
	printf("\n");
}


void minmaxds()
{
	int min = 9, max = 0;
	int i, j;
	for (i = 0;i < l;i++)
		for (j = 0;j < c;j++)
		{
			if (i < j)
			{
				if (m[i][j] < min)
					min = m[i][j];
				if (m[i][j] > max)
					max = m[i][j];

			}
		}
	printf("\nMINIMUL ESTE %d", min);
	printf("\nMAXIMUL ESTE %d", max);
	printf("\n");
}


int main()
{
		system("Color 9");
		int opt;
		while (1) {
			printf("\n---------MENIU---------\n");
			printf("\n1.Initializare matrice\n");
			printf("2.Afisare matrice\n");
			printf("3.Calcularea sumei elementelor de pe diagonala principala\n");
			printf("4.Calcularea sumei elementelor de pe diagonala secundara\n");
			printf("5.Afisarea minimului si maximului elementelor aflate sub diagonala principala\n");
			printf("6.Afisarea minimului si maximului elementelor aflate sub diagonala secundara\n");
			printf("0.Iesire\n");
			printf("\nIntroduceti optiunea dorita: ");
			scanf("%d", &opt);
			switch (opt)
			{
			case 0:
				printf("\nLA REVEDERE!(^_^)\n");
				exit(1);
			case 1:
				initializare();
				break;
			case 2:
				afisare();
				break;
			case 3:
				printf("\nSuma elementelor de pe diagonala principala este:");
				sumadp();
				break;
			case 4:
				printf("\nSuma elementelor de pe diagonala secundara este:");
				sumads();
				break;
			case 5:
				minmaxdp();
				break;
			case 6:
				minmaxds();
				break;
			default:
				printf("\nTASTATI O OPTIUNE EXISTENTA!\n");
				break;
			}
		};

	return 0;
}