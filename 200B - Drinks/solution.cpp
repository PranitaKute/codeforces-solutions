#include <bits/stdc++.h> 
using namespace std;

int main()
{
    int n, arr[110];
    cin>>n;
    double res = 0.0, sum = 0.0;
    for(int  i = 0; i < n; i++){
        cin>>arr[i];
        sum += arr[i];
    }
    res = sum / n;
    cout<<res<<"\n";
    
return 0;
}
