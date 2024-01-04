#include<stdio.h>

int main()
{
	int i, j;
	for (i = 1; i<10 ; i++)
	{ 
		for (j = 9; j>0; j--)
		{
			if (j > i)
				printf("       ");//¾«»ª£¡£¡£¡£¡£¡£¡
			else printf("%d*%d=%-3d", i, j, i * j);


        }
		printf("\n");

	}



	return 0;
}