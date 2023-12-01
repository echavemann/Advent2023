#include <iostream>
#include <bits/stdc++.h>

#define PB push_back
#define vt vector
#define ll long long

using namespace std;

int main() {
    ll sum = 0;
    string s;
    ifstream infile("input.txt");
    while (getline(infile, s)) {
        vt<ll> linenums;
        for (char x : s) {
            if (isdigit(x)) {
                linenums.PB(stoll(string(1, x)));
            }
        }
        sum += linenums[0]*10;
        sum += linenums[linenums.size() - 1];
    }
    cout << sum << "\n";
    return 0;
}
