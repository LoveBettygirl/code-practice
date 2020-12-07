#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution
{
public:
    int countBinarySubstrings(string s)
    {
        int size = s.length(), count = 0, prev = -1;
        vector<int> v1, v0;
        for (int i = 0; i < size; i++)
        {
            if (s[i] == '0')
            {
                if (v1.size())
                {
                    v1.pop_back();
                    count++;
                }
                if (prev != 0)
                    v0.clear();
                v0.push_back(i);
                prev = 0;
            }
            else if (s[i] == '1')
            {
                if (v0.size())
                {
                    v0.pop_back();
                    count++;
                }
                if (prev != 1)
                    v1.clear();
                v1.push_back(i);
                prev = 1;
            }
        }
        return count;
    }
};

int main()
{
    return 0;
}