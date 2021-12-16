#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>

#define LENGTH 10

void traverseArray(int arr[], int n);

void swap(int* x, int* y);

int main(int argc, char* argv[])
{
	//��дһ����������ֵ�ĺ��������øú�����������a������b�еĶ�ӦԪ��ֵ
	int a[LENGTH] = { 0 };
	int b[LENGTH] = { 0 };
	srand((unsigned int)time(NULL));

	for (int i = 0; i < LENGTH; i++)
	{
		a[i] = rand() % 50 + 1;
	}
	for (int i = 0; i < LENGTH; i++)
	{
		b[i] = rand() % 50 + 1;
	}

	traverseArray(a, LENGTH);
	traverseArray(b, LENGTH);

	//�����������ӦԪ��ֵ
	for (int i = 0; i < LENGTH; i++)
	{
		swap(&a[i], &b[i]);
	}

	printf("================������================\n");

	traverseArray(a, LENGTH);
	traverseArray(b, LENGTH);

	return 0;
}


void traverseArray(int arr[], int n)
{
	printf("Array:");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
