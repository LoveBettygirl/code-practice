#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        unordered_map<int, int> m;
        for (int i = 0; i < magazine.length(); i++)
            m[magazine[i]]++;
        for (int i = 0; i < ransomNote.length(); i++)
        {
            m[ransomNote[i]]--;
            if (m[ransomNote[i]] < 0)
                return false;
        }
        return true;
    }
};

int main()
{
    return 0;
}