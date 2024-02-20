#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        string test;
        cin>>test;
        
        if (test.length() != 5) {
            continue; 
        }
        
        int count_a = 0;
        int count_b = 0;
        for(char ch : test){
            if(ch == 'A'){
                count_a++;
            }
            else{
                count_b++;
            }
        }
        if(count_a > count_b){
            cout<<"A"<<endl;
        }
        else{
            cout<<"B"<<endl;
        }
        }
    return 0;
    }
