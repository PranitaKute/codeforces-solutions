#include <iostream>
#include <algorithm> 
using namespace std;
 
int main() {
   int n;
   cin>>n;
   int count = 0;
   while(n--){
       int p,v,t;
       cin>>p>>v>>t;
       if(p+v == 2 || p+t == 2 || v+t == 2){
           count += 1;
       }
   }
   cout<<count<<endl;
    return 0;
}
