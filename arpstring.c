#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void print_array(int *a, int length)
{
	int i;
	printf("Array: [");
	for (i = 0; i < length; i++)
		printf("%d ", a[i]);
	printf("] \n");
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
	for (i = 0; i < length; i++)
	{
		*(b + i) = a[i];
	}
	return 0;
}

int string_length(char *a)
{
	int length = 0;
	int i = 0;
	while (a[i])
	{
		length++;
		i++;
	}
	return length;
}

int main()
{
	int a[10];
	int i;
	for (i = 0; i < 10; i++)
	{
		a[i] = i;
	}
	print_array(a, 10);
	printf("array avg: %f\n", array_avg(a, 10));

	int b[10];
	print_array(a, 10);
	print_array(b, 10);
	printf("copied array: \n");
	array_copy(a, b, 10);
	print_array(b, 10);

	char *c = "StringTest";
	printf("Length of string: %d\n", string_length(c));


	char d[22];
	strcpy(d,c);
	printf("strcpy: [");
	for (i = 0; i < 11; i++)
		printf("%c ", d[i]);
	printf("] \n\n");

	strcat(d,c);
	printf("strcat: [");
	for (i = 0; i < 22; i++)
		printf("%c ", d[i]);
	printf("] \n\n");






	return 0;
}