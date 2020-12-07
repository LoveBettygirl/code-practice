#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    bool repeatedSubstringPattern(string s)
    {
        int size = s.length();
        string sub;
        int i, j = 0, count;
        for (int i = 0; i < size / 2; i++)
        {
            count = j = i + 1;
            bool found = true;
            for (; j < size; j += count)
            {
                int k = 0;
                while (k < count && s[k] == s[j + k])
                    k++;
                if (k != count)
                {
                    found = false;
                    break;
                }
            }
            if (found)
                return true;
        }
        return false;
    }
};

int main()
{
    return 0;
}