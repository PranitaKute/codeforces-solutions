#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a = 2 * n;
        int numbers[a];
        for (int i = 0; i < a; i++) {
            cin >> numbers[i];
        }
        sort(numbers, numbers + a);
        int sum = 0;
        for (int i = 0; i < a; i += 2) { 
            sum += numbers[i];
        }
        cout << sum << endl;
    }
    return 0;
}
