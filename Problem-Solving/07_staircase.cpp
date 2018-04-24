#include <bits/stdc++.h>

using namespace std;

void staircase(int n) {
    // Complete this function
    int i, j, k;
    for(i = 1; i <= n; i++) {
        for(j = 0; j < n - i; j++) {
            cout << " ";
        }
        for(k = 0; k < i; k++) {
            cout << "#";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    staircase(n);
    return 0;
}
