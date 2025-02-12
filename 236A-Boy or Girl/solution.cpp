#include <bits/stdc++.h>
using namespace std;

int main() {
// Distinct chars, no repetiting characters
// 	odd number of characters in name == male 
// even number of characters in the name == female 
    string name;
    cin>>name;
    
    int l = name.length();
    int count = 0;
    sort(name.begin(), name.end());
    
    /*
    for(int i = 0; i < l; i++){
        cout<<name[i]<<endl;
    }
    */
    
    for(int i = 1; i < l; i++){     //check if characters are same or distinct 
        if(name[i] != name[i-1]){
            count++;
        }
    }
    
    // cout<<count<<"\n";
    
    if(count % 2 == 0){
        cout<<"IGNORE HIM!"<<"\n";
    }
    
    else{
        cout<<"CHAT WITH HER!"<<"\n";
    }
    
    
        
    return 0;
}
