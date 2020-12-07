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
    int maxPath;
    int path(TreeNode *root)
    {
        if (!root)
            return 0;
        int left = 0, right = 0;
        left = path(root->left);
        right = path(root->right);
        maxPath = max(maxPath, left + right);
        return 1 + max(left, right);
    }
    int diameterOfBinaryTree(TreeNode *root)
    {
        path(root);
        return maxPath;
    }
};

int main()
{
    return 0;
}