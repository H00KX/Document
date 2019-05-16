#include <stdio.h>
#include <cstring>
#include <stdlib.h>

char * longestCommonPrefix(char ** strs, int strsSize)
{
	/*
	 * ˼·��
	 * �ȱȽϵ�һ�͵ڶ���������й�����ǰ׺������ǰ׺�͵������Ƚ�
	 * ���û�й���ǰ׺����ֱ�ӷ��أ�����Ĳ���Ҫ�Ƚ�
	 */

	char * temp = (char*)malloc(128);			//�����洢����ǰ׺
	memset(temp, 0, 128);

	if (strsSize == 0)
	{
		return "";
	}

	strcpy(temp, strs[0]);
	int count = strlen(temp);		//��������������ǰ׺�ַ���Ϊ0ʱ����û��

	for (int i = 0; i < strsSize; i++)
	{
		char * currentStr = strs[i];

		if (count == 0)
		{
			return "";
		}
		int j;
		for (j = 0; j < count; j++)
		{
			if (temp[j] != currentStr[j])
			{
				break;
			}
		}

		count = j;
		temp[j] = 0;
	}

	return temp;

}


int main(int argc, char* argv[])
{
	char * strs[3] = { "flower", "", "flight" };

	longestCommonPrefix(strs, 3);

	return 0;
}
