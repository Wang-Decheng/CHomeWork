/*��д���������ַ������ַ�����s�У�
������һ���ַ�������c���ж�s���Ƿ���c��
�����򽫸��ַ���s��ɾ�����������û�У�������ַ�����NotFound����
����2�У�1���ַ�����1���ַ���
�����ɾ������ַ���
����1��
���룺
smiles
s
�����
mile
����2��
���룺
smiles
a
�����
NotFound
*/
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int DelSomeChar(char* str, char ch);

int main()
{
	char inputStr[100];
	char delCh;
	(void)scanf("%[^\n]%*c%c", inputStr, &delCh);
	//����scanf���ȼ��ڣ�
	//gets(inputStr);
	//getchar();
	//delCh=getchar();

	printf("%s",
	       DelSomeChar(inputStr, delCh) == 0 ? "NotFound" : inputStr);
	return 0;
}

/// <summary>
/// ɾ���ַ�����ָ�����ַ�
/// </summary>
/// <param name="str">������ַ���</param>
/// <param name="ch">ɾ�����ַ�</param>
/// <returns>ɾ�����ַ�����</returns>

int DelSomeChar(char* str, char ch)
{
	int i = 0;
	int sum = 0;
	while (str[i])
	{
		if (str[i] == ch)
		{
			sum++;
			int j = 0;
			while (str[i + j + 1])
			{
				str[i + j] = str[i + j + 1];
				j++;
			}
			str[i + j] = 0;
		}
		else
		{
			i++;
		}
	}
	return sum;
}