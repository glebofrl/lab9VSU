#include <stdio.h>
#include <locale.h>
#include <math.h>


void main()
{
	setlocale(LC_CTYPE, "RUS");
	int a;
	printf("¬ведите размер треугольника: ");
	scanf("%d", &a);

	for (int i = a, k = a; i > 0; i--, k--)
	{
		for (int j = k; j > 1; j--)
		{
			printf(" ");
		}

		for (int j = a * 2; j >= i * 2; j--) {

			if (i == a || j == a * 2 || j == i * 2 || i == 1)
				printf("*");
			else printf(" ");
		}


		printf("\n");
	}
	printf("\n");

}