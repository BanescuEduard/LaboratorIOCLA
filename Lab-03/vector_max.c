#include <stdio.h>

int main(void)
{
	int v[] = {4, 1, 2, -17, 15, 22, 6, 2};
	int max, len;
	int i;

	/* TODO: Implement finding the maximum value in the vector */
	max = v[0];
	i = 1;
	len = sizeof(v) / sizeof(int);



start:
	if(v[i] >= max){
		goto bigger;
	}

	if(i < len)
		goto incrementare;

	goto printare;


bigger:
	max = v[i];
	i++;
	goto start;

incrementare:
	i++;
	goto start;

printare:
	printf("max = %d\n", max);
	return 0;

}
