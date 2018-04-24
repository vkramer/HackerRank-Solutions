#include <bits/stdc++.h>

using namespace std;

int birthdayCakeCandles(int n, vector <int> ar) {
    // Complete this function
    int result = 0;
    int minValue = ar[0];
    int maxValue = ar[0];
    for(int i = 0; i < ar.size(); i++) {
        minValue = min(minValue, ar[i]);
        maxValue = max(maxValue, ar[i]);
    }
    
    for(int i = 0; i < ar.size(); i++) {
        //cout << ar[i] << ", ";
        if(ar[i] == maxValue)
            result += 1;
    }
    
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = birthdayCakeCandles(n, ar);
    cout << result << endl;
    return 0;
}
