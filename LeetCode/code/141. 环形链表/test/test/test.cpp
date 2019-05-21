#include <stdio.h>


struct ListNode {
    int val;
    struct ListNode *next;
};

bool hasCycle(struct ListNode *head) {

	if (head == NULL || head->next == NULL)
	{
		return false;
	}

	/*
	 * ˼·������ָ�룬��ָ��ÿ����һ��
	 * ��ָ��ÿ��������
	 * ����л��Ļ�����ָ��һ����׷����ָ��
	 */
	struct ListNode * slow = head;
	struct ListNode * fast = head;

	while (fast != NULL)
	{
		slow = slow->next;
		fast = fast->next ? fast->next->next : NULL;

		if (fast == slow)
		{
			return true;
		}
	}

	return false;

}

int main(int argc, char* argv[])
{
	return 0;
}
