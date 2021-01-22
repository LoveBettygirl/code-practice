#include <iostream>
#include <cmath>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution
{
public:
    int closestValue(TreeNode *root, double target)
    {
        TreeNode *curr = root;
        int closest = root->val;
        while (curr)
        {
            if (fabs(target - curr->val) < fabs(target - closest))
                closest = curr->val;
            if (target < curr->val)
                curr = curr->left;
            else
                curr = curr->right;
        }
        return closest;
    }
};

int main()
{
    return 0;
}