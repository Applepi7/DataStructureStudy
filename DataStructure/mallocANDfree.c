#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* pi;

	pi = (int*)malloc(sizeof(int));
	*pi = 3;

	printf("%d\n", *pi);

	free(pi);

	return 0;
}