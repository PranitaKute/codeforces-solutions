#include <bits/stdc++.h> 
using namespace std;
void capital(char str[100]){
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 97){
            str[i] = str[i] - 32;
        }
        
    }
}
void small(char str[100]){
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] <= 90){
            str[i] = str[i] + 32;
        }
    }
}
int main()
{
    char str[100];
    cin>>str;
    int u = 0, l = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 97){
            l++;
        }
        else{
            u++;
        }
    }
    if(u > l){
        capital(str);
    }
    else{
        small(str);
    }
    cout<<str<<endl;
}
