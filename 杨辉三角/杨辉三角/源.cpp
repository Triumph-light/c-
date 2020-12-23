#include<stdio.h>
#define N 10
int main()
{
	int i, k, j;//i为行数，j为个数
	int arr[N][N];
	for (i = 0; i < N; i++)
	{
		arr[i][0] = 1;
		arr[i][i] = 1;
		for (j = 1; j < i; j++)
		{
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}
	}
	for (i = 0; i < N; i++)
	{
		for (k = 0; k < N - 1 - i; k++)
		{
			printf("  ");
		}
		for (j = 0; j <= i; j++)
		{
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
