#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    string countAndSay(int n)
    {
        if (n == 1)
            return "1";
        string s = countAndSay(n - 1), result;
        int size = s.length(), count = 1;
        for (int i = 1; i <= size; i++)
        {
            if (i < size && s[i - 1] == s[i])
            {
                count++;
                continue;
            }
            result += ('0' + count);
            result += s[i - 1];
            count = 1;
        }
        return result;
    }
};

int main()
{
    return 0;
}