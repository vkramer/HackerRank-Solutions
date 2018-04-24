#include <bits/stdc++.h>

using namespace std;

void miniMaxSum(vector <int> arr) {
    // Complete this function
    int minValue = arr[0]; 
    int maxValue = arr[0];
    long long sum = arr[0];
    
    for(int i = 1; i < 5; i++) {
        minValue = min(minValue, arr[i]);
        maxValue = max(maxValue, arr[i]);
        sum += arr[i];
    }
    
    cout << sum - maxValue << " " << sum - minValue << endl;
}

int main() {
    vector<int> arr(5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       cin >> arr[arr_i];
    }
    miniMaxSum(arr);
    return 0;
}
