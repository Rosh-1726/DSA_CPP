#include <bits/stdc++.h>
using namespace std;

string convertToTitle(int n) {
    string result = "";
    
    while(n > 0) {
        n--; // important (0 indexing sathi)
        char ch = 'A' + (n % 26);
        result += ch;
        n /= 26;
    }
    
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    cout << convertToTitle(28); // AB
}
