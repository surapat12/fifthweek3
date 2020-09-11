#include<stdio.h>
#include<conio.h>
void multipleTable(int k)
{
	int a[20][20], i, j, x;
	for (i = 1; i <= k; i++)
	{
		for (j = 1; j <= k; j++)
		{
			x = i - 1;
			a[x][j - 1] = i * j;

		}
	}
	int n = 1;
	printf("*    |");
	for (n = 1; n <= k; n++)
	{
		printf("\t%d", n);
	}
	printf("\n");
	printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	for (i = 0; i < k; i++)
	{
		printf("%d    |\t", i + 1);
		for (j = 0; j < k; j++)
		{
			printf("%d\t", a[i][j]);

		}
		printf("\n");

	}

}
int main()
{
	int m;
	printf("Enter the number (no more than 20) : ");
	scanf_s("%d", &m);
	multipleTable(m);
	return 0;
}
