#include <bits/stdc++.h> 
using namespace std;
 
int n;
string s;

void ans()
{
    cin>>n;
    cin>>s;
    int count = 0;
    for(int i = 0 ; i < n - 2 ; i++)
    {
        if(s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p')
        {
            count++;
        }
        if(s[i] == 'p' && s[i + 1] == 'i' && s[i + 2] == 'e')
        {
            count++;
            if(i > 1)
            {
                if( s[i - 1] == 'a' && s[ i - 2] == 'm')
                {
                    count--;
                }
            }
        }
    }
    cout<<count<<endl;
}
int  main()
{
   int t;cin>>t;
   while(t--){
      ans();
   }
    return 0;
}
