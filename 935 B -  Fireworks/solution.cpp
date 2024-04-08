#include <bits/stdc++.h>
using namespace std;

void fireworks(){
    long long a,b,m;    cin>>a>>b>>m;
    long long count;
    // a vala is m/a+1,     b vala is m/b+1
    
    count = (m/a) + (m/b) + 2;
    cout<<count<<endl;
}

int main(){
    int t;  cin>>t;
    while(t--){
        fireworks();
    }
}
