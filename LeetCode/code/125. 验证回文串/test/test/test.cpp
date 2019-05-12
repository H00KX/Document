#include <stdio.h>
#include <cstring>

bool isPalindrome(char * s){

	if(s == NULL)
	{
		return true;
	}

	int sLen = strlen(s);

	for(int i=0, j=sLen-1; i<j; i++,j--)
	{
		// ����������ֻ���ĸ������
		if(!(s[i]>='0' && s[i]<='9' || s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z'))
		{
			// i�� j��������j++һ��
			j++;
			continue;
		}

		if(!(s[j]>='0' && s[j]<='9' || s[j] >= 'A' && s[j] <= 'Z' || s[j] >= 'a' && s[j] <= 'z'))
		{
			// j�� i��������i--һ��
			i--;
			continue;
		}

		// ȫ��ת��д
		if(s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}

		if(s[j] >= 'a' && s[j] <= 'z')
		{
			s[j] -= 32;
		}

		if(s[i] != s[j])
		{
			return false;
		}

	}

	return true;

}


int main(int argc, char* argv[])
{
	isPalindrome("0P");
	return 0;
}
