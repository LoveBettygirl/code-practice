#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    vector< vector<string> > groupAnagrams(vector<string> &strs)
    {
        int size = strs.size();
        vector< vector<string> > result;
        unordered_map< string, vector<int> > m;
        for (int i = 0; i < size; i++)
        {
            string si = strs[i];
            sort(si.begin(), si.end());
            m[si].push_back(i);
        }
        for (unordered_map< string, vector<int> >::iterator i = m.begin(); i != m.end(); i++)
        {
            vector<string> temp;
            for(int j = 0; j < i->second.size(); j++)
            {
                temp.push_back(strs[i->second[j]]);
            }
            result.push_back(temp);
        }
        return result;
    }
};

int main()
{
    return 0;
}
