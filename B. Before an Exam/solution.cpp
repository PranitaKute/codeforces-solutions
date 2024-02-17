#include <iostream>
using namespace std;

int main(){
    int d, sumTime;
    cin>>d>>sumTime;
    int minTime[d], maxTime[d];
    int totalMinTime = 0, totalMaxTime = 0;
    for (int i = 0; i < d; ++i) {
    cin >> minTime[i] >> maxTime[i];
    totalMinTime += minTime[i];
    totalMaxTime += maxTime[i];
}
    if(totalMinTime > sumTime || totalMaxTime < sumTime ){
        cout<<"NO\n";
        return 0;
    }
    else{
        cout<<"YES\n";
        for (int i = 0; i < d; ++i) {
        int allocatedTime = min(maxTime[i], sumTime - totalMinTime + minTime[i]);
        cout<<allocatedTime<<" ";
        sumTime -= allocatedTime;
        totalMinTime -= minTime[i];
        }
}
}
