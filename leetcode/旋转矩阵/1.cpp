#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void rotate(vector< vector<int> > &matrix)
    {
        int size = matrix.size();
        vector< vector<int> > result(size, vector<int>(size, 0));
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
                result[j][size - 1 - i] = matrix[i][j];
        }
        matrix = result;
    }
};

int main()
{
    return 0;
}