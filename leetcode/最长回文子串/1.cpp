#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class Solution
{
public:
    string longestPalindrome(string s)
    {
        if (s.length() == 0 || s.length() == 1)
            return s;
        int first, last, len = 0, size = s.length();
        for (int i = 0; i < size; i++)
        {
            for (int j = size - 1; j >= i; j--)
            {
                bool flag = true;
                for (int k = 0; k < (j - i + 1) / 2; k++)
                {
                    if (s[i + k] != s[j - k])
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                {
                    if (j - i + 1 > len)
                    {
                        first = i;
                        last = j;
                        len = j - i + 1;
                    }
                }
            }
        }
        return s.substr(first, last - first + 1);
    }
};

int main()
{
    cout << Solution().longestPalindrome("babad") << endl;
}