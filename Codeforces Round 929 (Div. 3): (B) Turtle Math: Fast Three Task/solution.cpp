#include <bits/stdc++.h> 
using namespace std; 
 
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
 
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }
        map<int, int> p;
        for(auto i:arr){
            p[i%3]++;
        }
        if(sum % 3 == 0){
 
            cout<<0<<endl;
        }
        else if(sum % 3 == 2){
 
            cout<<1<<endl;
        }
        else{
 
            if(p[1]>0){
                cout<<1<<endl;
            }
            else{
 
                cout<<2<<endl;
            }
        }
    }
    return 0;
}
