#include <bits/stdc++.h>
using namespace std;

// "o1" -> " + -"       &       "10" -> " - +"


int main(){
    int n,num = 0;
    int arr[100000];
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for(int i = 0; i < n; i++){
        if(arr[i] != arr[i + 1]){
        num += 1;
        }
    }
     cout<<num;
     return 0;
}
