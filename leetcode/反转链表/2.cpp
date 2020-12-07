/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
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
    ListNode *reverseList(ListNode *head)
    {
        ListNode *list = nullptr, *curr = head;
        while (curr)
        {
            ListNode *temp = curr;
            curr = curr->next;
            temp->next = list;
            list = temp;
        }
        return list;
    }
};

int main()
{
    return 0;
}