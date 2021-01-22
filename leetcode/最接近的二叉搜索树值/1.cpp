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
    int closest;
    int findClose(TreeNode *root, double target)
    {
        if (!root)
            return closest;
        if (fabs(target - root->val) < fabs(target - closest))
            closest = root->val;
        if (target < root->val)
            return findClose(root->left, target);
        else
            return findClose(root->right, target);
    }
    int closestValue(TreeNode *root, double target)
    {
        closest = root->val;
        return findClose(root, target);
    }
};

int main()
{
    return 0;
}