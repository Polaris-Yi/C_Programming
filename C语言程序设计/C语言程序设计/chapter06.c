#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main1215(int argc, char* argv[])
{
	//��1����̼���2+4+6+��+98+100��ֵ
	int sum = 0;
	for (int i = 0; i <= 100; i += 2)
	{
		sum += i;
	}
	printf("2+4+6+��+98+100=%d\n", sum);

	//��2����̼���1��2��3+3��4��5+��+99��100��101��ֵ
	int term = 0;
	long sumNum = 0;
	for (int i = 1; i <= 99; i += 2)
	{
		term = i * (i + 1) * (i + 2);
		sumNum += term;
	}
	printf("1*2*3+3*4*5+��+99*100*101=%ld\n", sumNum);

	//��3����̼���1!+2!+3!+��+10!��ֵ
	int step = 1;
	long sumResult = 0;
	for (int i = 1; i <= 10; i++)
	{
		step = step * i;
		sumResult += step;
	}
	printf("1!+2!+3!+��+10!=%ld\n", sumResult);

	//��4����̼���a+a*a+a*a*a+��+a*a����a*a*a(n��a)��ֵ��n��a��ֵ�ɼ�������
	int a = 2;
	int n = 4;
	int termNum = 0;
	long sumValue = 0;
	for (int i = 1; i <= n; i++)
	{
		termNum = termNum * 10 + a;
		sumValue += termNum;
	}
	printf("a+a*a+a*a*a+��+a*a����a*a*a(n��a)=%ld\n", sumValue);

	return 0;
}