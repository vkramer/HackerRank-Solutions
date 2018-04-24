#include <bits/stdc++.h>

using namespace std;

int diagonalDifference(vector < vector<int> > a) {
    // Complete this function
    int lsum = 0;
    int rsum = 0;
    int i = 0;
    while(i < a.size()) {
        lsum += a[i][i];
        rsum += a[i][a.size() - i - 1];
        ++i;
    }
    
    return abs(lsum - rsum);
}

int main() {
    int n;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }
    int result = diagonalDifference(a);
    cout << result << endl;
    return 0;
}
