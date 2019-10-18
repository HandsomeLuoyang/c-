#include <iostream>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}	
};

class Solution 
{
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
	{
		ListNode* re = new ListNode(0);
		ListNode* ans = re;
		int carry = 0;
		ListNode* pl1 = l1;
		ListNode* pl2 = l2;
		while (pl1->next != nullptr&&pl2->next != nullptr)
		{
			int temp = pl1->val + pl2->val + carry;
			ans->next = new ListNode(temp % 10);
			carry = temp > 10 ? 1 : 0;
		}
		if (pl1->next != nullptr&&pl2->next == nullptr)
		{
			if (carry > 0)
			{
				pl1 = pl1->next;
				ans->next = new ListNode(carry+pl1->val);
				carry = 0;
				pl1 = pl1->next;
			}
			while (pl1 != nullptr)
			{
				ans->next = new ListNode(pl1->val);
				pl1 = pl1->next;
			}
			return re->next;
		}
		if (pl1->next == nullptr&&pl2->next != nullptr)
		{
			if (carry > 0)
			{
				pl2 = pl2->next;
				ans->next = new ListNode(carry + pl2->val);
				carry = 0;
				pl2 = pl2->next;
			}
			while (pl2 != nullptr)
			{
				ans->next = new ListNode(pl2->val);
				pl2 = pl2->next;
			}
			return re->next;
		}
		else
		{
			if(carry == 0)
			{ 
				return re->next;
			}
			else
			{
				ans->next = new ListNode(1);
				return re->next;
			}
			
		}

	}
};

int main()
{

	return 0;
}

