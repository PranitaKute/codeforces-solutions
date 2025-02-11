#include <bits/stdc++.h>
using namespace std;

int main() {
	
   int code;
   vector<int>colors;
   int count = 0;
   int i = 0;
   
   while(i++ < 4 && cin >> code){
       colors.push_back(code);
    //   cout<<"input succesfull";
   }
   
//   for(int j = 0; j < colors.size(); j++){
//       cout<<colors[j]<<" ";
//   }

    sort(colors.begin(), colors.end());
    
    if(colors[0] == colors[1] || colors[0] == colors[2] || colors[0] == colors[3]){
        count += 1;
    }
    
    if(colors[1] == colors[2] || colors[1] == colors[3]){
        count += 1;
    }
    if(colors [2] == colors[3]){
        count += 1;
    }
   
    
    cout<<count<<"\n";
    
    return 0;
}
