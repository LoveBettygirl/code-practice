#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> result;
        unordered_map<int, int> m1, m2;
        for (int i = 0; i < nums1.size(); i++)
            m1[nums1[i]]++;
        for (int i = 0; i < nums2.size(); i++)
            m2[nums2[i]]++;
        if (m1.size() < m2.size())
        {
            for (unordered_map<int, int>::iterator i = m1.begin(); i != m1.end(); i++)
            {
                if (i->second >= 1 && m2.find(i->first) != m2.end() && m2[i->first] >= 1)
                    result.push_back(i->first);
            }
        }
        else
        {
            for (unordered_map<int, int>::iterator i = m2.begin(); i != m2.end(); i++)
            {
                if (i->second >= 1 && m1.find(i->first) != m1.end() && m1[i->first] >= 1)
                    result.push_back(i->first);
            }
        }
        return result;
    }
};

int main()
{
    return 0;
}