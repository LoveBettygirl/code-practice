#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    ListNode *removeElements(ListNode *head, int val)
    {
        if (!head)
            return head;
        ListNode *temp = new ListNode(0);
        temp->next = head;
        ListNode *prev = temp, *curr = head;
        while (curr)
        {
            if (prev->next->val == val)
                prev->next = prev->next->next;
            else
                prev = curr;
            curr = curr->next;
        }
        return temp->next;
    }
};

int main()
{
    return 0;
}