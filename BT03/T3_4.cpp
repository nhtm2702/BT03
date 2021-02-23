#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    int m,n;
    string s;
    int a[20][20];
    int b[20][20];
    cin >> m >> n;
    for (int i=1;i<=m;i++)
        {
            cin >> s;
            for (int j=0;j<s.length();j++)
                a[i][j+1]=s[j]-48;
        }
    for (int j=0;j<=n+1;j++) a[0][j]=-2;
    for (int j=0;j<=n+1;j++) a[m+1][j]=-2;
    for (int i=0;i<=m+1;i++) a[i][0]=-2;
    for (int i=0;i<=m+1;i++) a[i][n+1]=-2;
    for (int i=1;i<=m;i++)
        for (int j=1;j<=n;j++)
            b[i][j]=0;
    for (int i=1;i<=m;i++)
    {
        for (int j=1;j<=n;j++)
        {
            if (a[i][j]==-6) b[i][j]=-6;
            else
            {
                if (a[i-1][j-1]==-6) b[i][j]++;
                if (a[i-1][j]==-6) b[i][j]++;
                if (a[i-1][j+1]==-6) b[i][j]++;
                if (a[i][j-1]==-6) b[i][j]++;
                if (a[i][j+1]==-6) b[i][j]++;
                if (a[i+1][j-1]==-6) b[i][j]++;
                if (a[i+1][j]==-6) b[i][j]++;
                if (a[i+1][j+1]==-6) b[i][j]++;
            }
        }
    }
    for (int i=1;i<=m;i++)
    {
        for (int j=1;j<=n;j++)
        {
            if (b[i][j]==-6) cout << "* ";
            else cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
