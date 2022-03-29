#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{

	int arr[] = { 1,2,3,4,5,6,7 };
	int size = sizeof(arr) / sizeof(int);
	int k = 3;
	int* array = (int*)malloc(sizeof(int) * 2*size);
	int n = 0;
	for (int i = 0; i < size; i++)
	{
		array[n++] = arr[i];
	}
	for (int i = 0; i < size; i++)
	{
		array[n++] = arr[i];
	}
	for (int i = k; i < size+k; i++)
	{
		printf("%d ", array[i]);
	}
	


	return 0;
}