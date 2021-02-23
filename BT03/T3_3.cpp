#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
using namespace std;
bool PL(int n)
{
    string s;
    ostringstream convert;
    convert << n;
    s=convert.str();
    for (int i=0;i<s.length()/2;i++)
        if (s[i]!=s[s.length()-i-1]) return false;
    return true;
}
int main()
{
    int n,a,b,d;
    cin >> n;
    for (int i=0;i<n;i++)
    {
        cin >> a >> b;
        d=0;
        for (int j=a;j<=b;j++)
            if (PL(j)) d++;
        cout << d << endl;
    }
    return 0;
}
