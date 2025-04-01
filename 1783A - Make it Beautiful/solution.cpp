// Make it Beautiful
/* If the sum of array elements is the same as the next element in the array,
then the array is ugly */
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int no; cin>>no;    // Number of elements in array
    int arr[no];
    
    // Input array
    for(int i = 0; i < no; i++){
        cin>>arr[i];
    }
    
    // Swap elements of array 
    swap(arr[0], arr[1]);
    swap(arr[no - 1], arr[0]);
    
    // Check if the first & second element is same, if yes then array is ugly
    if(arr[0] == arr[1]){
        cout<<"NO \n";
    }
    else{
        // Checks if any possible beautiful array 
        cout<<"YES \n";
        for(int i = 0; i < no; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int t;  cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
