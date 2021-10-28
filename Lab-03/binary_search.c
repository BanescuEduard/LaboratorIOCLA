#include <stdio.h>

int main(void)
{
	int v[] =  {1, 2, 15, 51, 53, 66, 202, 7000};
	int dest = v[2]; /* 15 */
	int start = 0, index = 0, middle;
	int end = sizeof(v) / sizeof(int) - 1;

	/* TODO: Implement binary search */


repet:
	middle = (start + end) / 2;


	if(v[middle] == dest){
		goto printare;
	}

	if(v[middle] > dest){
		goto end;
	}

	if(v[middle] < dest){
		goto start;
	}


end:
	end = middle;
	goto repet;

start:
	start = middle;
	goto repet;


printare:

	printf("Numarul %d se afla la indexul: %d\n", v[middle], middle);

}
