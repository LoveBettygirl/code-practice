/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include <iostream>
#include <vector>
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
    bool isPalindrome(ListNode *head)
    {
        vector<int> list;
        ListNode *curr = head;
        while (curr)
        {
            list.push_back(curr->val);
            curr = curr->next;
        }
        int size = list.size();
        for (int i = 0; i < size / 2; i++)
        {
            if (list[i] != list[size - 1 - i])
                return false;
        }
        return true;
    }
};

int main()
{
    return 0;
}