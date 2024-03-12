#include <bits/stdc++.h> 
using namespace std;
 
int n,m,k;
void ans()
{
    cin>>n;
    vector<int>a(n);
    for(int i = 0;i < n;i ++)
    cin>>a[i];
    a[1] -= 2 * a[0];
    a[2] -= a[0];
    a[0] = 0;
    for(int i = 1;i < n - 2;i ++)
    { 
        if( a[i] < 0)
        {
            cout<< "NO" <<endl;
            return ;
        }
        a[i + 1 ] -= 2 * a[i];
        a[i + 2] -= a[i];
        a[i] = 0;
    }
    for(int i = 0; i < n; i ++)
    {
        if(a[i] != 0)
        {
            cout<< "NO" <<endl;
            return ;
        }
    }
    cout<< "YES" <<endl;
}
int  main()
{
   int t;cin>>t;
   while(t--)
   {
      ans();
   }
    return 0;
}
