#include <bits/stdc++.h> 
using namespace std;

 int count(int n, int m, int k, vector<int>& arr1, vector<int>& arr2) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr1[i] + arr2[j] <= k) {
                count++;
            }
        }
    }
      
    return count;
}
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        vector<int> arr1(n);
        vector<int> arr2(m);
        for(int i = 0; i < n; i++){
            cin>>arr1[i];
        }
        for(int j = 0; j < m; j++){
            cin>>arr2[j];
        }
    
        int ans = count(n, m, k, arr1, arr2);
        cout << ans << endl;
    }
    
return 0;
}
