/*����һϵ��Ӣ�ĵ��ʣ�����֮���ÿո������һ������ո񣩣��á�###����ʾ���������ͳ���������Щ�����Լ������ʳ��ֵĴ�����ͳ��ʱ���ִ�Сд��ĸ������ٶ������ظ��ĵ�����������100����ÿ�����ʳ���������20���ڡ�
���룺
ռһ��
�����
ռһ�У����ʽΪ������1 - ���� ����2 - ���� ��������������м��ü������ӣ��������֮����һ���ո�ָ����������ճ��ֵ��Ⱥ����ͳ�ƣ�
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

typedef struct wordCount
{
	char word[30];
	char count;
} WordCount;

int main()
{
	WordCount wordCount[100];
	char inStr[30];
	int n = 0;
	scanf("%s", inStr);
	while (strcmp(inStr, "###"))
	{
		int flag = 0; //�Ƿ��ظ�
		//�����Ƿ��Ѿ�ͳ�ƹ����ظ���
		for (int i = 0; i < n; i++)
		{
			if (strcmp(inStr, wordCount[i].word) == 0)
			{
				wordCount[i].count++;
				flag = 1;
				break;
			}
		}
		if (flag == 0) //�µ���
		{
			strcpy(wordCount[n].word, inStr);
			wordCount[n++].count = 1;
		}
		scanf("%s", inStr);
	}

	//���
	printf("%s-%d", wordCount[0].word, wordCount[0].count);
	for (int i = 1; i < n; i++)
	{
		printf(" %s-%d", wordCount[i].word, wordCount[i].count);
	}
	return 0;
}