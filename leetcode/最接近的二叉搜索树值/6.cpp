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
        double pred = INT64_MIN;
        while (!s.empty() || curr)
        {
            while (curr)
            {
                s.push_back(curr);
                curr = curr->left;
            }
            curr = s.back();
            s.pop_back();
            if (pred == INT64_MIN && target < curr->val)
                return curr->val;
            else if (pred <= target && target < curr->val)
                return fabs(target - pred) < fabs(target - curr->val) ? pred : curr->val;
            pred = curr->val;
            curr = curr->right;
        }
        return pred;
    }
};

int main()
{
    return 0;
}