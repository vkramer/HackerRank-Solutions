#include <bits/stdc++.h>

using namespace std;

void plusMinus(vector <int> arr) {
    // Complete this function
    int pos = 0;
    int neg = 0;
    int zero = 0;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] < 0)
            neg += 1;
        else if(arr[i] > 0)
            pos += 1;
        else
            zero += 1;
    }
    
    cout << (float)pos / arr.size() << endl;
    cout << (float)neg / arr.size() << endl;
    cout << (float)zero / arr.size() << endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    plusMinus(arr);
    return 0;
}
