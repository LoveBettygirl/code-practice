#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int size;
    vector<bool> visited;
    vector< vector<int> > result;
    void dfs(vector<int> &nums, vector<int> &path)
    {
        if (path.size() == size)
        {
            result.push_back(vector<int>(path.begin(), path.end()));
            return;
        }
        for (int i = 0; i < size; i++)
        {
            if (visited[i])
                continue;
            path.push_back(nums[i]);
            visited[i] = true;
            dfs(nums, path);
            path.pop_back();
            visited[i] = false;
        }
    }
    vector< vector<int> > permute(vector<int> &nums)
    {
        size = nums.size();
        visited = vector<bool>(size, false);
        vector<int> path;
        dfs(nums, path);
        return result;
    }
};

int main()
{
    return 0;
}
