#include <stdio.h>


/**
	���룺["h","e","l","l","o"]
	�����["o","l","l","e","h"]
 */

/**
 *˼·����һ�������һ����
 *�ڶ����͵����ڶ�����
 *�Դ�����
 */

void reverseString(char* s, int sSize)
{
	int last = sSize - 1;
	for(int i=0; i<sSize/2; i++)
	{
		char temp = s[i];
		s[i] = s[last - i];
		s[last-i] = temp;
	}
}


int main()
{
	char test[5] = {'h','e','l','l','o'};
	reverseString(test, 5);

	for(int i=0; i<5; i++)
	{
		printf("%c ", test[i]);
	}
	return 0;
}