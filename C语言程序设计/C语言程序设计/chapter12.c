#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX_SIZE 256

int main(int argc, char* argv[])
{
	//(1)编写一程序，其功能是显示指定的文本文件，在显示文件内容时同时加上行号
	/*FILE* fp;
	char string[MAX_SIZE];

	if (argc != 2)
	{
		printf("参数错误!\n");
		return -1;
	}

	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		printf("打开%s文件失败！\n", argv[1]);
		exit(0);
	}

	int i = 1;
	while (fgets(string, MAX_SIZE, fp) != NULL)
	{
		printf("%d %s", i++, string);
	}

	fclose(fp);*/


	//(2)编写一程序其功能是将两个文件的内容合并到一个文件中，并显示合并后的文件内容。三个文件名随命令行一起输入，输入时原有两文件的文件名在前，合并文件的文件名在后
	/*FILE* sourceFile1, * sourceFile2, * dstFile;
	char buffer[MAX_SIZE];

	memset(buffer, 0, sizeof(char) * MAX_SIZE);

	if (argc != 4)
	{
		printf("参数错误！\n");
		exit(0);
	}

	if ((sourceFile1 = fopen(argv[1], "r")) == NULL)
	{
		printf("打开文件%s失败！\n", argv[1]);
		return -1;
	}

	if ((sourceFile2 = fopen(argv[2], "r")) == NULL)
	{
		printf("打开文件%s失败！\n", argv[2]);
		return -1;
	}

	if ((dstFile = fopen(argv[3], "w")) == NULL)
	{
		printf("打开文件%s失败！\n", argv[3]);
		return -1;
	}

	while (fgets(buffer, MAX_SIZE, sourceFile1) != NULL)
	{
		fputs(buffer, dstFile);
	}

	while (fgets(buffer, MAX_SIZE, sourceFile2) != NULL)
	{
		fputs(buffer, dstFile);
	}

	fclose(sourceFile1);
	fclose(sourceFile2);
	fclose(dstFile);*/

	//(3)编写文本文件显示程序，在命令行中指定文本文件显示的范围
	FILE* fp;
	char buffer[MAX_SIZE];
	memset(buffer, 0, sizeof(char) * MAX_SIZE);

	if (argc != 2 && argc != 4)//未指定范围则显示全部，否则按指定行数显示
	{
		printf("参数错误！\n");
		exit(0);
	}

	int start = 0, end = 0;

	if (argc == 4)
	{
		start = atoi(argv[2]);
		end = atoi(argv[3]);
		if (start > end)
		{
			printf("参数错误！起始行数大于终止行数\n");
			exit(0);
		}
	}

	//打开文件
	if ((fp = fopen(argv[1], "r")) == NULL)
	{
		printf("打开文件失败！\n");
		exit(0);
	}

	int flag = 0;

	if (argc == 4)//有起止行号，显示从start到end行的内容
	{
		int i;
		for (i = 1; i < start; i++)//读取到start-1行，不显示
		{
			if (fgets(buffer, MAX_SIZE, fp) == NULL)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)//未到文件结尾，显示start到end行内容
		{
			for (; i <= end && fgets(buffer, MAX_SIZE, fp) != NULL; i++)
			{
				printf("%s", buffer);
			}
		}
	}
	else//无起止行号，全部显示
	{
		while (fgets(buffer, MAX_SIZE, fp) != NULL)
		{
			printf("%s", buffer);
		}
	}

	return 0;
}