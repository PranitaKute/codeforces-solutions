#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,z = 0, k = 0, p = 0;          
        cin>>n;

        for (int i = 0; i < n; i++){
            string s;
            cin>>s;
            for ( int m = 0; m < n; m++){
                if(s[m] == '1' && z == 0)
          k++;
          if(z == 1 && s[m] == '1')
          p++;
      }
      if(k)
      z++;
      
  }
  if(k == p)
  cout<< "SQUARE" <<endl;
  else{
  cout<< "TRIANGLE" <<endl;
            }
        }
    return 0;
}
