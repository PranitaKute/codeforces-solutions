#include <bits/stdc++.h>
using namespace std;

int main(){
    int y,w;
    cin>>y>>w;
    int num = max(y,w);
    num = 7 - num;
    int den = 6;
    if(num % 2 == 0){
        num = num / 2;
        den = den / 2;
    }
    if(num % 3 == 0){
        num = num / 3;
        den = den / 3;
    }
    cout<<num<<"/"<<den<<endl;
    return 0;
}
