#include <iostream>
#include <vector>
using namespace std;
int x1, y1, s1, p1;
vector< vector<char> > m1;
vector< vector<int> > v1;

void dfs(int cx, int cy)
{
    if (cx == -1 || cy == -1 || cx == x1 || cy == y1) // 已经走到边界
    {
        printf("%d step(s) to exit\n", p1);
        return;
    }
    if (v1[cx][cy] > 0) // 有环
    {
        v1[cx][cy]++;
        // 环的大小？？？
        int c1 = 1;
        int cx1, cy1;
        if (m1[cx][cy] == 'W')
        {
            cx1 = cx;
            cy1 = cy - 1;
        }
        else if (m1[cx][cy] == 'E')
        {
            cx1 = cx;
            cy1 = cy + 1;
        }
        else if (m1[cx][cy] == 'S')
        {
            cx1 = cx + 1;
            cy1 = cy;
        }
        else if (m1[cx][cy] == 'N')
        {
            cx1 = cx - 1;
            cy1 = cy;
        }
        while (!(cx1 == cx && cy1 == cy))
        {
            if (m1[cx1][cy1] == 'W')
            {
                cy1--;
                c1++;
            }
            else if (m1[cx1][cy1] == 'E')
            {
                cy1++;
                c1++;
            }
            else if (m1[cx1][cy1] == 'S')
            {
                cx1++;
                c1++;
            }
            else if (m1[cx1][cy1] == 'N')
            {
                cx1--;
                c1++;
            }
        }
        printf("%d step(s) before a loop of %d step(s)\n", p1 - c1, c1);
        return;
    }
    else
    {
        v1[cx][cy]++;
        p1++;
        if (m1[cx][cy] == 'W')
            dfs(cx, cy - 1);
        else if (m1[cx][cy] == 'E')
            dfs(cx, cy + 1);
        else if (m1[cx][cy] == 'S')
            dfs(cx + 1, cy);
        else if (m1[cx][cy] == 'N')
            dfs(cx - 1, cy);
    }
}
int main()
{
    while (cin >> x1 >> y1 >> s1 && x1 && y1 && s1)
    {
        m1 = vector< vector<char> >(x1, vector<char>(y1));
        v1 = vector< vector<int> >(x1, vector<int>(y1));
        for (int i = 0; i < x1; i++)
        {
            for (int j = 0; j < y1; j++)
            {
                cin >> m1[i][j];
            }
        }
        p1 = 0;
        dfs(0, s1 - 1);
    }
    return 0;
}