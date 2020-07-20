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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *t1 = l1, *t2 = l2, *head = nullptr, *curr = nullptr;
        bool flag = false;
        while (t1 || t2 || flag)
        {
            int temp = 0;
            if (t1 && t2)
            {
                temp = t1->val + t2->val;
                t1 = t1->next;
                t2 = t2->next;
            }
            else if (t1 && !t2)
            {
                temp = t1->val;
                t1 = t1->next;
            }
            else if (!t1 && t2)
            {
                temp = t2->val;
                t2 = t2->next;
            }
            if (flag)
                temp++;
            ListNode *t = new ListNode(temp % 10);
            flag = temp >= 10 ? true : false;
            if (!head)
                head = curr = t;
            else
            {
                curr->next = t;
                curr = curr->next;
            }
        }
        return head;
    }
};

int main()
{
    return 0;
}