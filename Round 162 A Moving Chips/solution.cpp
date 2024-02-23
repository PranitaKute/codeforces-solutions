#include <iostream>
using namespace std;

//minOperations takes an integer array cells & size of the array is n
int minOperations(int cells[], int n) {
    int operations = 0;
    
    // To Find the first chip
    int firstChipIndex = -1;
    for (int i = 0; i < n; ++i) {
        if (cells[i] == 1) {
            firstChipIndex = i;
            break;
        }
    }
    // Lets Move the chips to the left
    for (int i = firstChipIndex + 1; i < n; ++i) {
        if (cells[i] == 1) {
            operations += (i - firstChipIndex - 1);
            firstChipIndex = i;
        }
    }
    return operations;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int cells[n];
        for (int i = 0; i < n; ++i) {
            cin >> cells[i];
        }
        cout << minOperations(cells, n) << endl;
    }
    return 0;
}
