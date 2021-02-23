#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    bool seen[n];
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
        seen[a[i]]=false;
    }
    for (int i=0;i<n;i++)
        if (seen[a[i]]==false) {seen[a[i]]=true;}
        else {cout <<"Yes";return 0;}
    cout << "No";
    return 0;
}
