#include <stdio.h>
#include <string.h>
#include <string>

using namespace std;

string countAndSay(int n)
{
	if (n==1)
	{
		return "1";
	}

	//������һ������󱾴ν��

	string preResult = countAndSay(n - 1);

	string result;
	int count = 1;

	for (int i = 0; i < preResult.size(); i++)
	{
		// �����ж��ж��ٸ��ظ����ַ�
		if (preResult[i] == preResult[i+1])
		{
			count++;
			continue;
		}
		else
		{
			// ���ҵ�һ������ȵ�ʱ,��ʼƴ���ַ���
			result += to_string(count) + preResult[i];
			count = 1;
		}

	}

	return result;

}

int main(int argc, char* argv[])
{
	return 0;
}
