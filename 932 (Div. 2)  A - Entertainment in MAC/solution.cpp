#include <bits/stdc++.h> 
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string s2 = s;
        reverse(s2.begin(),s2.end());
        
        if(s <= s2)
        {
             	cout<<s<<endl;
        }
        else
        {
         		cout<<s2<<s<<endl;
        }
        
    }
    
return 0;
}
