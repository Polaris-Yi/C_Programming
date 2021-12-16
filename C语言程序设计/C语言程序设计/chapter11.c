#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main20211216(int argc, char* argv[])
{
	//(5)口袋中有若干红、黄、蓝、白、黑5种颜色的球，每次从口袋中取出3个球，编程打印出得到3种不同颜色的球的所有可能取法
	char* ballColor[] = { "红","黄","蓝","白","黑" };
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