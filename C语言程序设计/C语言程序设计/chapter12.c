#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX_SIZE 256

int main(int argc, char* argv[])
{
	//(1)��дһ�����书������ʾָ�����ı��ļ�������ʾ�ļ�����ʱͬʱ�����к�
	/*FILE* fp;
	char string[MAX_SIZE];

	if (argc != 2)
	{
		printf("��������!\n");
		return -1;
	}

	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		printf("��%s�ļ�ʧ�ܣ�\n", argv[1]);
		exit(0);
	}

	int i = 1;
	while (fgets(string, MAX_SIZE, fp) != NULL)
	{
		printf("%d %s", i++, string);
	}

	fclose(fp);*/


	//(2)��дһ�����书���ǽ������ļ������ݺϲ���һ���ļ��У�����ʾ�ϲ�����ļ����ݡ������ļ�����������һ�����룬����ʱԭ�����ļ����ļ�����ǰ���ϲ��ļ����ļ����ں�
	/*FILE* sourceFile1, * sourceFile2, * dstFile;
	char buffer[MAX_SIZE];

	memset(buffer, 0, sizeof(char) * MAX_SIZE);

	if (argc != 4)
	{
		printf("��������\n");
		exit(0);
	}

	if ((sourceFile1 = fopen(argv[1], "r")) == NULL)
	{
		printf("���ļ�%sʧ�ܣ�\n", argv[1]);
		return -1;
	}

	if ((sourceFile2 = fopen(argv[2], "r")) == NULL)
	{
		printf("���ļ�%sʧ�ܣ�\n", argv[2]);
		return -1;
	}

	if ((dstFile = fopen(argv[3], "w")) == NULL)
	{
		printf("���ļ�%sʧ�ܣ�\n", argv[3]);
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

	//(3)��д�ı��ļ���ʾ��������������ָ���ı��ļ���ʾ�ķ�Χ
	FILE* fp;
	char buffer[MAX_SIZE];
	memset(buffer, 0, sizeof(char) * MAX_SIZE);

	if (argc != 2 && argc != 4)//δָ����Χ����ʾȫ��������ָ��������ʾ
	{
		printf("��������\n");
		exit(0);
	}

	int start = 0, end = 0;

	if (argc == 4)
	{
		start = atoi(argv[2]);
		end = atoi(argv[3]);
		if (start > end)
		{
			printf("����������ʼ����������ֹ����\n");
			exit(0);
		}
	}

	//���ļ�
	if ((fp = fopen(argv[1], "r")) == NULL)
	{
		printf("���ļ�ʧ�ܣ�\n");
		exit(0);
	}

	int flag = 0;

	if (argc == 4)//����ֹ�кţ���ʾ��start��end�е�����
	{
		int i;
		for (i = 1; i < start; i++)//��ȡ��start-1�У�����ʾ
		{
			if (fgets(buffer, MAX_SIZE, fp) == NULL)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)//δ���ļ���β����ʾstart��end������
		{
			for (; i <= end && fgets(buffer, MAX_SIZE, fp) != NULL; i++)
			{
				printf("%s", buffer);
			}
		}
	}
	else//����ֹ�кţ�ȫ����ʾ
	{
		while (fgets(buffer, MAX_SIZE, fp) != NULL)
		{
			printf("%s", buffer);
		}
	}

	return 0;
}