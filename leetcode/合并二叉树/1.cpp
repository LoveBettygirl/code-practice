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
    TreeNode *mergeTrees(TreeNode *t1, TreeNode *t2)
    {
        TreeNode *temp = nullptr;
        if (t1 && t2)
        {
            temp = new TreeNode(t1->val + t2->val);
            temp->left = mergeTrees(t1->left, t2->left);
            temp->right = mergeTrees(t1->right, t2->right);
        }
        else if (!t1 && t2)
        {
            temp = new TreeNode(t2->val);
            temp->left = mergeTrees(nullptr, t2->left);
            temp->right = mergeTrees(nullptr, t2->right);
        }
        else if (t1 && !t2)
        {
            temp = new TreeNode(t1->val);
            temp->left = mergeTrees(t1->left, nullptr);
            temp->right = mergeTrees(t1->right, nullptr);
        }
        else
            return temp;
        return temp;
    }
};

int main()
{
    return 0;
}