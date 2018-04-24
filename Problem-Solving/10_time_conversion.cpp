#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s) {
    // Complete this function
    int h1 = (int)s[1] - '0';
    int h2 = (int)s[0] - '0';
    int hh = (h2 * 10 + h1 % 10);
    
    string result;
    
    if(s[8] == 'A') {
        if(hh == 12)
            result = '0' + to_string(hh - 12) + s.substr(2,6);
        if(hh < 12) {
            result = '0' + to_string(hh) + s.substr(2,6);
        }
    }
    
    if(s[8] == 'P') {
        if(hh < 12) {
            hh += 12;
            result = to_string(hh) + s.substr(2,6);
        }
        else {
            result = to_string(hh) + s.substr(2,6);
        }
    }
    
    return result;
}

int main() {
    string s;
    cin >> s;
    string result = timeConversion(s);
    cout << result << endl;
    return 0;
}
