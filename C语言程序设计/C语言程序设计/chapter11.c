#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main20211216(int argc, char* argv[])
{
	//(5)�ڴ��������ɺ졢�ơ������ס���5����ɫ����ÿ�δӿڴ���ȡ��3���򣬱�̴�ӡ���õ�3�ֲ�ͬ��ɫ��������п���ȡ��
	char* ballColor[] = { "��","��","��","��","��" };
	int m = 0;

	for (int i = 0; i < 5; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			for (int k = j + 1; k < 5; k++)
			{
				m++;
				printf("%d %s %s %s\n", m, ballColor[i], ballColor[j], ballColor[k]);
			}
		}
	}

	return 0;
}