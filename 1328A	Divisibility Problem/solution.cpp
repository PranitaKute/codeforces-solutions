#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a,b;
        int count = 0;
        cin >> a >> b;
        if( a % b == 0){
            cout<<count<<endl;
        }
        else{
            cout<<b - (a % b)<<endl;
        }
    }

    return 0;
}
