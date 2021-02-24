#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,kq;
    int *a=new int [n];
    int *s=new int [n];
    cin >> n;
    for (int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    kq=0;
    for (int i=1;i<n-1;i++)kq+=a[i];
    cout << kq;
    return 0;
}
