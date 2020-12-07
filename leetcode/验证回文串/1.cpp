#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {
        int size = s.length();
        int i = 0, j = 0;
        string s1;
        for (i = 0; i < size; i++)
        {
            if (isdigit(s[i]) || isalpha(s[i]))
                s1.push_back(tolower(s[i]));
        }
        size = s1.length();
        i = 0;
        j = size - 1;
        while (i < j && i < size && j >= 0)
        {
            if (s1[i] != s1[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};

int main()
{
    return 0;
}