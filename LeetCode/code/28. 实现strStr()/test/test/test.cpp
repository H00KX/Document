#include <stdio.h>
#include <cstring>

int strStr(char * haystack, char * needle){

	if (haystack == NULL || needle == NULL || strlen(needle)==0)
	{
		return 0;
	}

	int hLen = strlen(haystack);
	int nLen = strlen(needle);

	// ���needle���ȴ���haystack���϶��Ҳ���
	if (nLen > hLen)
	{
		return -1;
	}

	int index = -1;

	for (int i = 0; i < hLen; i++)
	{
		if (needle[0] != haystack[i])
		{
			continue;
		}

		// �ҵ�h�е�һ����n��һ���ַ���ȵ�λ��

		//���hʣ��ĳ���С��n�ĳ��ȣ����Ҳ���
		if (hLen - i < nLen)
		{
			return -1;
		}

		index = i;

		//�ж�ʣ����ַ�����ʼ�Ƚϣ��������������Ĳ���
		for (int j = 0; j < nLen; j++,index++)
		{
			if (haystack[index] != needle[j])
			{
				index = -1;
				break;
			}
		}

		if (index == -1)
		{
			continue;
		}
		else
		{
			//�������Ѿ��ҵ������治��Ҫ���ң�ֱ���˳�
			return index - nLen;
		}

	}

	return -1;
}

int main(int argc, char* argv[])
{
	strStr("hello", "ll");
	return 0;
}
