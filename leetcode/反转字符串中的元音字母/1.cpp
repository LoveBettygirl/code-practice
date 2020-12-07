#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Solution
{
public:
    bool isVowel(char c)
    {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            return true;
        return false;
    }
    string reverseVowels(string s)
    {
        int size = s.length(), i = 0, j = size - 1;
        while (i < j && i < size && j >= 0)
        {
            if (!isVowel(s[i]))
                i++;
            else if (!isVowel(s[j]))
                j--;
            else
                swap(s[i++], s[j--]);
        }
        return s;
    }
};

int main()
{
    return 0;
}