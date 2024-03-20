#include <bits/stdc++.h> 
using namespace std;
 
int a,b,c;

void ans()
{
    
    cin>>a>>b>>c;
    int n, m;
    if(a > b)
    m = a - b;
    else
    m = b - a;
    n = m * 2;
    
    if ( a > n || b > n || c > n)
    cout<<"-1 \n";
    else
    if( c + m <= n)
        cout<<c + m<<endl;
    else if(c - m <= n && c - m > 0)
        cout<< c - m<<endl;
    else
        cout<<"-1\n";
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
