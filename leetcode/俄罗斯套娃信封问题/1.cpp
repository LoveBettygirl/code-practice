#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int maxEnvelopes(vector< vector<int> > &envelopes)
    {
        int size = envelopes.size();
        if (size == 0)
            return 0;
        sort(envelopes.begin(), envelopes.end());
        vector<int> dp(size, 1);
        int result = 1;
        for (int i = 1; i < size; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (envelopes[i][0] > envelopes[j][0] && envelopes[i][1] > envelopes[j][1])
                {
                    dp[i] = max(dp[i], dp[j] + 1);
                    if (dp[i] > result)
                        result = dp[i];
                }
            }
        }
        return result;
    }
};

int main()
{
    return 0;
}