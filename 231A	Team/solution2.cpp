#include <bits/stdc++.h>
using namespace std;

int main() {
	
    int n, p, v, t;
    cin>>n;
    int count = 0;
    
    while(n--){
        cin>>p>>v>>t;
        
        if(p == 1 && v == 1){
            count +=1;
        }
        else if(p == 1 && t == 1){
            count +=1;
        }
        else if(v == 1 && t == 1){
            count += 1;
        }
        else if((p == 1 && v == 1) && t == 1){
            count += 1;
        }
        
    }
    cout<<count<<"\n";
    
    return 0;
}
