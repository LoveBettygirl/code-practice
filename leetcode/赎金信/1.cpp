#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        unordered_map<int, int> m1, m2;
        for (int i = 0; i < magazine.length(); i++)
            m1[magazine[i]]++;
        for (int i = 0; i < ransomNote.length(); i++)
            m2[ransomNote[i]]++;
        for (unordered_map<int, int>::iterator i = m2.begin(); i != m2.end(); i++)
        {
            if (m1.find(i->first) == m1.end() || m1[i->first] < i->second)
                return false;
        }
        return true;
    }
};

int main()
{
    return 0;
}