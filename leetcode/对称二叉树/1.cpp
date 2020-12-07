/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
#include <iostream>
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
    bool judgeSymmetric(TreeNode *left, TreeNode *right)
    {
        if (!left && !right)
            return true;
        else if (!left || !right)
            return false;
        else
            return left->val == right->val && judgeSymmetric(left->left, right->right) && judgeSymmetric(left->right, right->left);
    }
    bool isSymmetric(TreeNode *root)
    {
        if (!root)
            return true;
        return judgeSymmetric(root->left, root->right);
    }
};

int main()
{
    return 0;
}