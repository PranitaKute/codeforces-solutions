#include <bits/stdc++.h> 
using namespace std; 
int main() {
    int t;
    cin>>t;
    while(t--){ 
        string str;
        cin>>str;
        int n = str.length();
        int count = str.length() - 2;
        if( n > 10){
            cout<<str[0]<<count<< str[n - 1]<<endl;
        }
        else{
            cout<<str<<endl;
        }
    }
}
