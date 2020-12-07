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
#include <map>
#include <queue>
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
        queue< pair<TreeNode *, TreeNode *> > q;
        if (t1 && t2)
            q.push(pair<TreeNode *, TreeNode *>(t1, t2));
        else if (t1)
            return t1;
        else if (t2)
            return t2;
        while (!q.empty())
        {
            int size = q.size();
            for (int i = 0; i < size; i++)
            {
                pair<TreeNode *, TreeNode *> temp = q.front();
                q.pop();
                if (temp.first && temp.second)
                {
                    temp.first->val += temp.second->val;
                    if (temp.first->left && temp.second->left)
                        q.push(pair<TreeNode *, TreeNode *>(temp.first->left, temp.second->left));
                    else if (temp.second->left)
                        temp.first->left = temp.second->left;
                    if (temp.first->right && temp.second->right)
                        q.push(pair<TreeNode *, TreeNode *>(temp.first->right, temp.second->right));
                    else if (temp.second->right)
                        temp.first->right = temp.second->right;
                }
            }
        }
        return t1;
    }
};

int main()
{
    return 0;
}