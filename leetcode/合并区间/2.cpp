#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector< vector<int> > merge(vector< vector<int> > &intervals)
    {
        sort(intervals.begin(), intervals.end());
        vector< vector<int> > result;
        int size = intervals.size();
        if (size == 0)
            return result;
        result.push_back(intervals[0]);
        for (int i = 1; i < size; i++)
        {
            if (result.back()[1] >= intervals[i][0])
                result.back()[1] = max(result.back()[1], intervals[i][1]);
            else
                result.push_back(intervals[i]);
        }
        return result;
    }
};

int main()
{
    return 0;
}