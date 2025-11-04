#include <bits/stdc++.h>
using namespace std;

void reverseArrayAfterM(vector<int> &arr, int m) {
    // Reverse from m+1 to end
    reverse(arr.begin() + m + 1, arr.end());
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int m = 3;

    reverseArrayAfterM(arr, m);

    cout << "Reversed Array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}
