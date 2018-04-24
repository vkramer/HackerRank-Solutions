#include <bits/stdc++.h>

/*

Given an array of integers, find the sum of its elements.

Input Format

The first line contains an integer, , denoting the size of the array. 
The second line contains  space-separated integers representing the array's elements.

Output Format

Print the sum of the array's elements as a single integer.

Sample Input

6
1 2 3 4 10 11
Sample Output

31

*/

using namespace std;

int simpleArraySum(int n, vector <int> ar) {
    // Complete this function
    int sum = 0;
    for(int i = 0; i < ar.size(); i++)
       sum += ar[i];
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = simpleArraySum(n, ar);
    cout << result << endl;
    return 0;
}
