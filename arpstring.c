#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_array(int *a, int length){
	int i;
	printf("Array: [");
	for(i=0;i<length;i++)
		printf("%d, ",a[i]);
	printf("]")
}

float array_avg(int *p, int length)
{
	int total = 0;
	float length2 = length;
	while (length)
	{
		total += (p[length - 1]);
		length--;
	}
	return total / length2;
}

int array_copy(int *a, int *b, int length)
{
	int i;
	for(i=0;i<length;i++){
		*b[i]=a[i];
	}
	return 0;
}

int main()
{
	int a[10];
	int i;
	for (i = 0; i < 10; i++)
	{
		a[i] = i;
	}
	print_array(a);
	printf("array avg: %f\n", array_avg(a, 10));

	print_array(a);
	int b[10];
	array_copy(a,b,10)
	print_array(b);
	return 0;
}