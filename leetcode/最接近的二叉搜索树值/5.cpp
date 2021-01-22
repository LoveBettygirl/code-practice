#include <iostream>
#include <vector>
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
        vector<TreeNode *> s;
        TreeNode *curr = root;
        int closest = root->val;
        while (!s.empty() || curr)
        {
            while (curr)
            {
                s.push_back(curr);
                curr = curr->left;
            }
            curr = s.back();
            s.pop_back();
            if (fabs(target - curr->val) < fabs(target - closest))
                closest = curr->val;
            curr = curr->right;
        }
        return closest;
    }
};

int main()
{
    return 0;
}