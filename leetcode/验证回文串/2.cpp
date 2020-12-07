#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {
        int size = s.length(), i = 0, j = size - 1;
        while (i < j && i < size && j >= 0)
        {
            if (!isalnum(s[i]))
                i++;
            else if (!isalnum(s[j]))
                j--;
            else if (tolower(s[i]) != tolower(s[j]))
                return false;
            else
            {
                i++;
                j--;
            }
        }
        return true;
    }
};

int main()
{
    return 0;
}