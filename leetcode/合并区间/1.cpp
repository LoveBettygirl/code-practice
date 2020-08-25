#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    // 原地修改（会在最后一个例子超时）
    vector< vector<int> > merge(vector< vector<int> > &intervals)
    {
        sort(intervals.begin(), intervals.end());
        vector< vector<int> >::iterator i = intervals.begin();
        while (i != intervals.end())
        {
            vector< vector<int> >::iterator temp = i + 1;
            if (temp != intervals.end())
            {
                if ((*i)[1] >= (*temp)[0])
                {
                    (*i)[1] = max((*i)[1], (*temp)[1]);
                    intervals.erase(temp, temp + 1);
                    continue;
                }
            }
            i++;
        }
        return intervals;
    }
};

int main()
{
    return 0;
}