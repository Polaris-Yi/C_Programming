#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>

#define LENGTH 10

void traverseArray(int arr[], int n);

//(1)编写一个交换变量值的函数，利用该函数交换数组a和数组b中的对应元素值
void swap(int* x, int* y);

//(2)不用strcat函数，编写实现字符串连接函数strcat的功能，将字符串t连接到字符串s的尾部
void myStrcat(char* dstStr, char* srcStr);

void myStrcat2(char dstStr[], char srcStr[]);

int main(int argc, char* argv[])
{
	//(1)编写一个交换变量值的函数，利用该函数交换数组a和数组b中的对应元素值
	//int a[LENGTH] = { 0 };
	//int b[LENGTH] = { 0 };
	//srand((unsigned int)time(NULL));

	//for (int i = 0; i < LENGTH; i++)
	//{
	//	a[i] = rand() % 50 + 1;
	//}
	//for (int i = 0; i < LENGTH; i++)
	//{
	//	b[i] = rand() % 50 + 1;
	//}

	//traverseArray(a, LENGTH);
	//traverseArray(b, LENGTH);

	////交换两数组对应元素值
	//for (int i = 0; i < LENGTH; i++)
	//{
	//	swap(&a[i], &b[i]);
	//}

	//printf("================交换后================\n");

	//traverseArray(a, LENGTH);
	//traverseArray(b, LENGTH);

	//(2)不用strcat函数，编写实现字符串连接函数strcat的功能，将字符串t连接到字符串s的尾部
	char s[50] = "Uzi，";
	char t[50] = "The best ADC in the world";
	myStrcat2(s, t);

	printf("%s\n", s);

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

//(1)编写一个交换变量值的函数，利用该函数交换数组a和数组b中的对应元素值
void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

//(2)不用strcat函数，编写实现字符串连接函数strcat的功能，将字符串t连接到字符串s的尾部
void myStrcat(char* dstStr, char* srcStr)
{
	while (*dstStr != '\0')
	{
		dstStr++;
	}
	while (*srcStr != '\0')
	{
		*dstStr = *srcStr;
		dstStr++;
		srcStr++;
	}
	*dstStr = '\0';
}

void myStrcat2(char dstStr[], char srcStr[])
{
	int i = 0, j = 0;
	while (dstStr[i] != '\0')
	{
		i++;
	}
	while (srcStr[j] != '\0')
	{
		dstStr[i++] = srcStr[j++];
	}
	dstStr[i] = '\0';
}
