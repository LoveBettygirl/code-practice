#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution
{
public:
    string longestPalindrome(string s)
    {
        vector< vector<bool> > f(s.length(), vector<bool>(s.length(), false));
        int x = 0, y = 0, result = 0, size = s.length();
        for (int i = size - 2; i >= 0; i--) // 注意初始化顺序！！！
        {
            for (int j = i; j < size; j++)
            {
                if (i == j)
                    f[i][i] = true;
                else if (i + 1 == j)
                    f[i][i + 1] = (s[i] == s[i + 1]);
                else
                    f[i][j] = (f[i + 1][j - 1] && (s[i] == s[j]));
                if (f[i][j])
                {
                    if (j - i + 1 > result)
                    {
                        result = j - i + 1;
                        x = i;
                        y = j;
                    }
                }
            }
        }
        return s.substr(x, y - x + 1);
    }
};

int main()
{
    cout << Solution().longestPalindrome("abcba") << endl;
}