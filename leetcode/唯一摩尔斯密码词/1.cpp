#include <iostream>
#include <vector>
#include <string>
#include <set>
using namespace std;

class Solution
{
public:
    int uniqueMorseRepresentations(vector<string> &words)
    {
        set<string> result;
        int size = words.size();
        string m[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
        for (int i = 0; i < size; i++)
        {
            int len = words[i].length();
            string s;
            for (int j = 0; j < len; j++)
                s += m[words[i][j] - 'a'];
            result.insert(s);
        }
        return result.size();
    }
};

int main()
{
    return 0;
}