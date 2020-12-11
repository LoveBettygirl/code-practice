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
        ListNode *temp = head;
        while (temp)
        {
            for (int i = 0; i < m - 1 && temp; i++)
                temp = temp->next;
            for (int i = 0; i < n && temp && temp->next; i++)
                temp->next = temp->next->next;
            if (temp)
                temp = temp->next;
        }
        return head;
    }
};

int main()
{
    return 0;
}