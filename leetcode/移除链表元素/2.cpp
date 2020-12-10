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
        ListNode *prev = head, *curr = head->next;
        while (curr)
        {
            if (prev->next->val == val)
                prev->next = prev->next->next;
            else
                prev = curr;
            curr = curr->next;
        }
        if (head->val == val)
            head = head->next;
        return head;
    }
};

int main()
{
    return 0;
}