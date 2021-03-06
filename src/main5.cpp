#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task5.h"
#define LEN 256
#define N 7

int main()
{
	srand(time(0));
	int arr[LEN];
	for (int i = 0; i < N; i++)
	{
		int side = rand() % 2;
		int sign = 1;
		if (side == 1)
			sign = -1;
		arr[i] = (rand() % 10)*sign;
	}
	printf("%d", getSumInt(arr, N));
	return 0;
}