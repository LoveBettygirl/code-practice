#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;

class Solution
{
public:
    int numUniqueEmails(vector<string> &emails)
    {
        set<string> result;
        int size = emails.size();
        for (int i = 0; i < size; i++)
        {
            string s;
            int len = emails[i].length(), j = 0, at = 0, plus = -1;
            for (j = 0; j < len; j++)
            {
                if (emails[i][j] == '@')
                {
                    at = j;
                    break;
                }
                if (plus == -1)
                {
                    if (emails[i][j] == '+')
                        plus = j;
                    else if (emails[i][j] != '.')
                        s.push_back(emails[i][j]);
                }
            }
            for (j = at; j < len; j++)
                s.push_back(emails[i][j]);
            result.insert(s);
        }
        return result.size();
    }
};

int main()
{
    return 0;
}