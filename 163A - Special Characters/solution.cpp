#include <bits/stdc++.h> 
using namespace std;
 
int n;

void ans()
{
    cin>>n;
    if(n % 2 == 1){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
        for(int i = 1; i <= n/2; i++){
            if(i & 1){          //if the least significant bit of i is 1 
                cout<<"AA";
            }
            else{
                cout<<"BB";
            }
        }
        cout<<endl;
    }
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
