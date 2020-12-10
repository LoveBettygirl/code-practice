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
    int getDecimalValue(ListNode *head)
    {
        ListNode *temp = head;
        int sum = 0;
        while (temp)
        {
            sum <<= 1;
            sum += temp->val;
            temp = temp->next;
        }
        return sum;
    }
};

int main()
{
    return 0;
}