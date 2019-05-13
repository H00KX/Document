#include <stdio.h>
#include <cstring>

int myAtoi(char * str){
	if (str == NULL)
	{
		return 0;
	}

	// ���Կո�
	int index = 0;
	while (str[index] == ' ')
	{
		index++;
	}

	// �жϵ�һ�����Ƿ�Ϊ���ֻ򸺺�
	if (!(str[index] >= '0' && str[index] <= '9' || str[index] == '-' || str[index] == '+'))
	{
		return 0;
	}

	int strLen = strlen(str);

	// ������
	if (str[index] == '-')
	{
		int i = index+1;
		int temp = 0;
		while (str[i] >= '0' && str[i] <= '9' && i < strLen)
		{
			//�ж��Ƿ�������
			if (temp > 2147483648 /10)
			{
				return (0-2147483648);
			}
			if (temp == 2147483648 / 10 && str[i] - 48 >= 8)
			{
				return (0-2147483648);
			}

			//str[i] - 48 �ַ�0ת����0
			temp = temp * 10 + (str[i] - 48);

			i++;
		}
		return (0 - temp);
	}

	// ��������

	int i = 0;
	if (str[index] == '+')
	{
		i = index + 1;
	}
	else
	{
		i = index;
	}
	int temp = 0;
	while (str[i] >= '0' && str[i] <= '9' && i < strLen)
	{
		//�ж��Ƿ�������
		if (temp > 2147483647 / 10)
		{
			return 2147483647;
		}
		if (temp == 2147483647 / 10 && str[i] - 48 > 7)
		{
			return 2147483647;
		}

		//str[i] - 48 �ַ�0ת����0
		temp = temp * 10 + (str[i] - 48);

		i++;
	}
	return temp;

}


int main(int argc, char* argv[])
{
	myAtoi("2147483646");
	return 0;
}
