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
    void inorder(TreeNode *root, vector<int> &arr)
    {
        vector<TreeNode *> s;
        TreeNode *curr = root;
        while (!s.empty() || curr)
        {
            while (curr)
            {
                s.push_back(curr);
                curr = curr->left;
            }
            curr = s.back();
            s.pop_back();
            arr.push_back(curr->val);
            curr = curr->right;
        }
    }
    int closestValue(TreeNode *root, double target)
    {
        vector<int> nums;
        inorder(root, nums);
        int size = nums.size();
        if (target > nums[size - 1])
            return nums[size - 1];
        if (target < nums[0])
            return nums[0];
        int l = 0, r = size - 1;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (target == nums[mid])
                return target;
            else if (nums[mid] > target)
                r = mid - 1;
            else if (nums[mid] < target)
                l = mid + 1;
        }
        return fabs(target - nums[l]) < fabs(target - nums[r]) ? nums[l] : nums[r];
    }
};

int main()
{
    return 0;
}