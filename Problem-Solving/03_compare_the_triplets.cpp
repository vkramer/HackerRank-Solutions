#include <bits/stdc++.h>

/*

Alice and Bob each created one problem for HackerRank. A reviewer rates the two challenges, awarding points on a scale from  to  for three categories: problem clarity, originality, and difficulty.

We define the rating for Alice's challenge to be the triplet A = (a[0],a[1],a[2]), and the rating for Bob's challenge to be the triplet B = (b[0],b[1],b[2]).

Your task is to find their comparison points by comparing a[0] with b[0], a[1] with b[1], and a[2] with b[2].

If a[i] > b[i], then Alice is awarded  point.
If a[i] < b[i], then Bob is awarded  point.
If a[i] = b[i], then neither person receives a point.
Comparison points is the total points a person earned.

Given  and , can you compare the two challenges and print their respective comparison points?

Input Format

The first line contains 3 space-separated integers, a[0], a[1], and a[2], describing the respective values in triplet . 
The second line contains 3 space-separated integers, b[0], b[1], and b[2], describing the respective values in triplet .

Constraints

  - 1 <= a[i] <= 100
  - 1 <= b[i] <= 100

Output Format

Print two space-separated integers denoting the respective comparison points earned by Alice and Bob.

Sample Input

5 6 7
3 6 10
Sample Output

1 1 

*/

using namespace std;

vector < int > solve(int a0, int a1, int a2, int b0, int b1, int b2){
    // Complete this function
    int a=((a0>b0)?1:0) + ((a1>b1)?1:0)+ ((a2>b2)?1:0);
    int b=((b0>a0)?1:0) + ((b1>a1)?1:0)+ ((b2>a2)?1:0);
    
    vector <int> result;
    result.push_back(a);
    result.push_back(b);
    return result;
}

int main() {
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    vector < int > result = solve(a0, a1, a2, b0, b1, b2);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;
    

    return 0;
}
