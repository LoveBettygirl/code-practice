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
        head->next = removeElements(head->next, val);
        return head->val == val ? head->next : head;
    }
};

int main()
{
    return 0;
}