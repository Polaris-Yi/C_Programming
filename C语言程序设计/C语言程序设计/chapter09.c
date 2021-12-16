#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>

#define LENGTH 10

void traverseArray(int arr[], int n);

//(1)��дһ����������ֵ�ĺ��������øú�����������a������b�еĶ�ӦԪ��ֵ
void swap(int* x, int* y);

//(2)����strcat��������дʵ���ַ������Ӻ���strcat�Ĺ��ܣ����ַ���t���ӵ��ַ���s��β��
void myStrcat(char* dstStr, char* srcStr);

void myStrcat2(char dstStr[], char srcStr[]);

int main(int argc, char* argv[])
{
	//(1)��дһ����������ֵ�ĺ��������øú�����������a������b�еĶ�ӦԪ��ֵ
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

	////�����������ӦԪ��ֵ
	//for (int i = 0; i < LENGTH; i++)
	//{
	//	swap(&a[i], &b[i]);
	//}

	//printf("================������================\n");

	//traverseArray(a, LENGTH);
	//traverseArray(b, LENGTH);

	//(2)����strcat��������дʵ���ַ������Ӻ���strcat�Ĺ��ܣ����ַ���t���ӵ��ַ���s��β��
	char s[50] = "Uzi��";
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

//(1)��дһ����������ֵ�ĺ��������øú�����������a������b�еĶ�ӦԪ��ֵ
void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

//(2)����strcat��������дʵ���ַ������Ӻ���strcat�Ĺ��ܣ����ַ���t���ӵ��ַ���s��β��
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
