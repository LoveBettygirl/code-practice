#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        if (s.length() == 0)
            return 0;
        int result = 1;
        for (int i = 0; i < s.length(); i++)
        {
            for (int j = i + 1; j < s.length(); j++)
            {
                bool flag = false;
                int k;
                for (k = i; k < j; k++)
                {
                    if (s[j] == s[k])
                    {
                        flag = true;
                        break;
                    }
                }
                if (!flag)
                    result = max(result, j - i + 1);
                else
                    break;
            }
        }
        return result;
    }
};

int main()
{
    cout << Solution().lengthOfLongestSubstring("bbbbb") << endl;
}