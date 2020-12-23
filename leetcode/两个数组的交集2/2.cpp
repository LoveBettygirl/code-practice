#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> result;
        unordered_map<int, int> m1, m2;
        for (int i = 0; i < nums1.size(); i++)
            m1[nums1[i]]++;
        for (int i = 0; i < nums2.size(); i++)
            m2[nums2[i]]++;
        for (unordered_map<int, int>::iterator i = m2.begin(); i != m2.end(); i++)
        {
            if (i->second >= 1 && m1.find(i->first) != m1.end() && m1[i->first] >= 1)
            {
                int minCount = min(i->second, m1[i->first]);
                for (int j = 0; j < minCount; j++)
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