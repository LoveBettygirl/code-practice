#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *deleteNodes(ListNode *head, int m, int n)
    {
        ListNode *fast = head, *slow = head;
        while (true)
        {
            int i;
            for (i = 0; i < m - 1 && slow; i++)
                slow = slow->next;
            if (!slow)
                break;
            fast = slow->next;
            for (i = 0; i < n && fast; i++)
                fast = fast->next;
            slow->next = fast;
            slow = slow->next;
        }
        return head;
    }
};

int main()
{
    return 0;
}