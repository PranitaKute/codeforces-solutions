#include <bits/stdc++.h> 
using namespace std;

string solve(string time) {
    int h = stoi(time.substr(0, 2));
    int min = stoi(time.substr(3, 2));
    
    string m;
    if (h < 12){
        m = "AM";
    }
    else{
        m = "PM";
    }
    if (h == 0)
        h = 12;
    else if (h > 12)
        h -= 12;
    
    string hstr = (h < 10) ? "0" + to_string(h) : to_string(h);
    string minstr = (min < 10) ? "0" + to_string(min) : to_string(min);
    
    return hstr + ":" + minstr + " " + m;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string time;
        cin >> time;
        
        string t2 = solve(time);
        
        cout << t2 << endl;
    }
    
    return 0;
}
