#include <iostream>
#include <unordered_set>
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        ListNode *tempA = headA, *tempB = headB;
        unordered_set<ListNode *> s;
        while (tempA)
        {
            s.insert(tempA);
            tempA = tempA->next;
        }
        while (tempB)
        {
            if (s.count(tempB))
                return tempB;
            tempB = tempB->next;
        }
        return nullptr;
    }
};

int main()
{
    return 0;
}