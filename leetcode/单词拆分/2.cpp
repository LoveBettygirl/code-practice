#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution
{
public:
    bool wordBreak(string s, vector<string> &wordDict)
    {
        vector<bool> f(s.length() + 1, false);
        f[0] = true;
        int i;
        for (i = 1; i < f.size(); i++)
        {
            for (int j = 0; j < wordDict.size(); j++)
            {
                int len = wordDict[j].length();
                if (i >= len)
                {
                    bool temp = f[i - len] && s.substr(i - len, len) == wordDict[j];
                    if (temp)
                        f[i] = temp;
                }
            }
        }
        return f[s.length()];
    }
};

int main()
{
    return 0;
}