#include <iostream>
using namespace std;
 
int main() {
    long long n, m, a;
    cin>>n>>m>>a;
    
    //number of flagstones needed to cover the entire area
    long long flagstones = ((n + a - 1) / a) * ((m + a - 1) / a);
 
    cout<<flagstones<<endl;
 
    return 0;
}
