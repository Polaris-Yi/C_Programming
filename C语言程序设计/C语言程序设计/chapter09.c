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

//(1)编写一个交换变量值的函数，利用该函数交换数组a和数组b中的对应元素值
void swap(int* x, int* y);

//(2)不用strcat函数，编写实现字符串连接函数strcat的功能，将字符串t连接到字符串s的尾部
void myStrcat(char* dstStr, char* srcStr);

void myStrcat2(char dstStr[], char srcStr[]);

//(3)编程判断输入的一串字符是否为"回文"。所谓"回文"是指顺读和倒读都一样的字符串。如"level"、"ABCCBA"都是回文
bool isPalindrome(char* string);

/**
 * (4)编写一取某字符串子串的函数char* substr(char* s，int startloc，int len)
 *    其中s为字符串，startloc为起始位置（0表示第一个字符的位置），len为子串的长度
 */
char* subStr(char* srcStr, int startLoc, int length);

//(5)编写一函数strlshif(char* s，int n)，其功能是把字符串s中的所有字符左移n个位置，字符串中的前n个字符移到最后
void strLeftShift(char* s, int n);

//(6)编写一个函数delDigit，它的功能是：删除字符串中的数字字符。例如输入字符串48CTYP9E6，则输出CTYPE
void delDigit(char* srcStr);

//(7)编写一个函数totalSubstrNum(char* str，char* substr)，它的功能是:统计子字符串substr在字符串str中出现的次数
int totalSubstrNum(char* str, char* subStr);

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
	/*char s[50] = "Uzi，";
	char t[50] = "The best ADC in the world";
	myStrcat2(s, t);

	printf("%s\n", s);*/

	//(3)编程判断输入的一串字符是否为"回文"。所谓"回文"是指顺读和倒读都一样的字符串。如"level"、"ABCCBA"都是回文
	/*printf("请输入一段字符串判断是否为回文字符:\n");
	char buffer[MAX_SIZE];
	memset(buffer, 0, sizeof(char) * MAX_SIZE);
	scanf("%s", buffer);
	int result = isPalindrome(buffer);
	printf("%s回文字符\n", result == true ? "是" : "非");*/

	//(4)编写一取某字符串子串的函数char* substr（char*s，int startloc，int len，其中s为字符串，startloc为起始位置（0表示第一个字符的位置），len为子串的长度
	/*char str[MAX_SIZE] = "Royal Never Give Up";
	char* subString = subStr(str, 6, 5);
	printf("%s的子串为%s\n", str, subString);*/

	//(5)编写一函数strlshif(char* s，int n)，其功能是把字符串s中的所有字符左移n个位置，字符串中的前n个字符移到最后
	/*char str[MAX_SIZE] = "Royal Never Give Up";
	printf("%s\n", str);
	strLeftShift(str, 5);
	printf("左移5位得%s\n", str);*/

	//(6)编写一个函数delDigit，它的功能是：删除字符串中的数字字符。例如输入字符串48CTYP9E6，则输出CTYPE
	/*char str[MAX_SIZE] = "Royal Never 6666666 Give 66666666 Up";
	printf("%s\n", str);
	delDigit(str);
	printf("删除数字字符得%s\n", str);*/

	//(7)编写一个函数totalSubstrNum(char* str，char* substr)，它的功能是：统计子字符串substr在字符串str中出现的次数
	char str[MAX_SIZE] = "Royal Never Give Up";
	char subString[MAX_SIZE] = "ve";
	int total = totalSubstrNum(str, subString);
	printf("%s在%s中出现的次数:%d次\n", subString, str, total);

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

//(3)编程判断输入的一串字符是否为"回文"。所谓"回文"是指顺读和倒读都一样的字符串。如"level"、"ABCCBA"都是回文
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
 * (4)编写一取某字符串子串的函数char* substr（char*s，int startloc，int len）
 *    其中s为字符串，startloc为起始位置（0表示第一个字符的位置），len为子串的长度
 */
char* subStr(char* srcStr, int startLoc, int length)
{
	static char subString[MAX_SIZE];
	if ((startLoc < 0) || (startLoc >= strlen(srcStr) || (length < 0)))
	{
		printf("参数错误！\n");
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

//(5)编写一函数strlshif(char* s，int n)，其功能是把字符串s中的所有字符左移n个位置，字符串中的前n个字符移到最后
void strLeftShift(char* s, int n)
{
	char first;
	int length = strlen(s);
	for (int i = 0; i < n; i++)
	{
		first = s[0];//将源字符串的第一个字符暂存
		strncpy(s, s + 1, length - 1);//从第二个字符开始的length-1个字符左移
		s[length - 1] = first;//将原首字符置于字符串尾部
	}
}

//(6)编写一个函数delDigit，它的功能是：删除字符串中的数字字符。例如输入字符串48CTYP9E6，则输出CTYPE
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

//(7)编写一个函数totalSubstrNum(char* str，char* substr)，它的功能是：统计子字符串subStr在字符串str中出现的次数
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