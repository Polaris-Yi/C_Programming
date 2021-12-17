#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdbool.h>

#define LENGTH 10
#define MAX_SIZE 256

void traverseArray(int arr[], int n);

//(1)��дһ����������ֵ�ĺ��������øú�����������a������b�еĶ�ӦԪ��ֵ
void swap(int* x, int* y);

//(2)����strcat��������дʵ���ַ������Ӻ���strcat�Ĺ��ܣ����ַ���t���ӵ��ַ���s��β��
void myStrcat(char* dstStr, char* srcStr);

void myStrcat2(char dstStr[], char srcStr[]);

//(3)����ж������һ���ַ��Ƿ�Ϊ"����"����ν"����"��ָ˳���͵�����һ�����ַ�������"level"��"ABCCBA"���ǻ���
bool isPalindrome(char* string);

/**
 * (4)��дһȡĳ�ַ����Ӵ��ĺ���char* substr(char* s��int startloc��int len)
 *    ����sΪ�ַ�����startlocΪ��ʼλ�ã�0��ʾ��һ���ַ���λ�ã���lenΪ�Ӵ��ĳ���
 */
char* subStr(char* srcStr, int startLoc, int length);

//(5)��дһ����strlshif(char* s��int n)���书���ǰ��ַ���s�е������ַ�����n��λ�ã��ַ����е�ǰn���ַ��Ƶ����
void strLeftShift(char* s, int n);

//(6)��дһ������delDigit�����Ĺ����ǣ�ɾ���ַ����е������ַ������������ַ���48CTYP9E6�������CTYPE
void delDigit(char* srcStr);

//(7)��дһ������totalSubstrNum(char* str��char* substr)�����Ĺ�����:ͳ�����ַ���substr���ַ���str�г��ֵĴ���
int totalSubstrNum(char* str, char* subStr);

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
	/*char s[50] = "Uzi��";
	char t[50] = "The best ADC in the world";
	myStrcat2(s, t);

	printf("%s\n", s);*/

	//(3)����ж������һ���ַ��Ƿ�Ϊ"����"����ν"����"��ָ˳���͵�����һ�����ַ�������"level"��"ABCCBA"���ǻ���
	/*printf("������һ���ַ����ж��Ƿ�Ϊ�����ַ�:\n");
	char buffer[MAX_SIZE];
	memset(buffer, 0, sizeof(char) * MAX_SIZE);
	scanf("%s", buffer);
	int result = isPalindrome(buffer);
	printf("%s�����ַ�\n", result == true ? "��" : "��");*/

	//(4)��дһȡĳ�ַ����Ӵ��ĺ���char* substr��char*s��int startloc��int len������sΪ�ַ�����startlocΪ��ʼλ�ã�0��ʾ��һ���ַ���λ�ã���lenΪ�Ӵ��ĳ���
	/*char str[MAX_SIZE] = "Royal Never Give Up";
	char* subString = subStr(str, 6, 5);
	printf("%s���Ӵ�Ϊ%s\n", str, subString);*/

	//(5)��дһ����strlshif(char* s��int n)���书���ǰ��ַ���s�е������ַ�����n��λ�ã��ַ����е�ǰn���ַ��Ƶ����
	/*char str[MAX_SIZE] = "Royal Never Give Up";
	printf("%s\n", str);
	strLeftShift(str, 5);
	printf("����5λ��%s\n", str);*/

	//(6)��дһ������delDigit�����Ĺ����ǣ�ɾ���ַ����е������ַ������������ַ���48CTYP9E6�������CTYPE
	/*char str[MAX_SIZE] = "Royal Never 6666666 Give 66666666 Up";
	printf("%s\n", str);
	delDigit(str);
	printf("ɾ�������ַ���%s\n", str);*/

	//(7)��дһ������totalSubstrNum(char* str��char* substr)�����Ĺ����ǣ�ͳ�����ַ���substr���ַ���str�г��ֵĴ���
	char str[MAX_SIZE] = "Royal Never Give Up";
	char subString[MAX_SIZE] = "ve";
	int total = totalSubstrNum(str, subString);
	printf("%s��%s�г��ֵĴ���:%d��\n", subString, str, total);

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

//(3)����ж������һ���ַ��Ƿ�Ϊ"����"����ν"����"��ָ˳���͵�����һ�����ַ�������"level"��"ABCCBA"���ǻ���
bool isPalindrome(char* string)
{
	char* pStart, * pEnd;
	int length = strlen(string);
	pStart = string;
	pEnd = string + length - 1;
	while (*pStart == *pEnd && pStart <= pEnd)
	{
		pStart++;
		pEnd--;
	}
	return pStart < pEnd ? false : true;
}

/**
 * (4)��дһȡĳ�ַ����Ӵ��ĺ���char* substr��char*s��int startloc��int len��
 *    ����sΪ�ַ�����startlocΪ��ʼλ�ã�0��ʾ��һ���ַ���λ�ã���lenΪ�Ӵ��ĳ���
 */
char* subStr(char* srcStr, int startLoc, int length)
{
	static char subString[MAX_SIZE];
	if ((startLoc < 0) || (startLoc >= strlen(srcStr) || (length < 0)))
	{
		printf("��������\n");
		return NULL;
	}
	int i;
	for (i = 0; i < length && srcStr[startLoc + i] != '\0'; i++)
	{
		subString[i] = srcStr[startLoc + i];
	}
	subString[i] = '\0';
	return subString;
}

//(5)��дһ����strlshif(char* s��int n)���书���ǰ��ַ���s�е������ַ�����n��λ�ã��ַ����е�ǰn���ַ��Ƶ����
void strLeftShift(char* s, int n)
{
	char first;
	int length = strlen(s);
	for (int i = 0; i < n; i++)
	{
		first = s[0];//��Դ�ַ����ĵ�һ���ַ��ݴ�
		strncpy(s, s + 1, length - 1);//�ӵڶ����ַ���ʼ��length-1���ַ�����
		s[length - 1] = first;//��ԭ���ַ������ַ���β��
	}
}

//(6)��дһ������delDigit�����Ĺ����ǣ�ɾ���ַ����е������ַ������������ַ���48CTYP9E6�������CTYPE
void delDigit(char* srcStr)
{
	int length = strlen(srcStr);

	for (char* pStr = srcStr; *pStr != '\0'; pStr++)
	{
		while (*pStr >= '0' && *pStr <= '9')
		{
			strcpy(pStr, pStr + 1);
		}
	}
}

//(7)��дһ������totalSubstrNum(char* str��char* substr)�����Ĺ����ǣ�ͳ�����ַ���subStr���ַ���str�г��ֵĴ���
int totalSubstrNum(char* str, char* subStr)
{
	int i = 0;
	int count = 0;
	int strLen = strlen(str);
	int subStrLen = strlen(subStr);
	while (i <= strLen - subStrLen)
	{
		if (strncmp(str + i, subStr, subStrLen) == 0)
		{
			count++;
			i = i + subStrLen;
		}
		else
		{
			i++;
		}
	}
	return count;
}