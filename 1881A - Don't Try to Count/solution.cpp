// 1881A - Don't Try to Count
 
#include<bits/stdc++.h>
using namespace std;
 
void solution(){
    int n,m;
    cin>>n>>m;
    
    int count = 6, result = 0; 
    
    // char c1, c2;
    
    string x = "";
    string s = "";
    
    bool flag = 0;
    cin>>x;
    cin>>s;
    
    string temp = x;    // Store original x 
    
    // for(int i = 0; i < n; i++){
    //     x = x + c1;
    // }
    
    // cout<<x<<"\n";
    
    // for(int i = 0; i < m; i++){
    //     s = s + c2;
    // }
    
    // cout<<s<<"\n";
    
    while(count--){
        if(x.find(s) != string::npos){
            flag = 1;
            break;
        }
        
        x += x;
        result++;
    }
    
    if(flag == 1){
        cout<<result<<"\n";
    }
    
    else{
        cout<<-1<<"\n";
    }
    
    return;
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}
