#include <iostream>
#include <bits/stdc++.h>

#define PB push_back
#define vt vector
#define ll long long

using namespace std;

unordered_map<string, ll> nums = { {"one",1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6},
    {"seven", 7}, {"eight", 8}, {"nine", 9}};


int main() {
    ll sum = 0;
    string s;
    ifstream infile("input.txt");
    while (getline(infile, s)) {
        ll firstnum = 0;
        ll lastnum = 0;
        int sn = s.size();
        for (int i = 0; i < sn; ++i) {
            if (isdigit(s[i])) {
                firstnum = stoi(string(1, s[i]));
                break;
            }
            else {
                for (const auto& x: nums) {
                    ll n = x.first.size();
                    if (s.substr(i, n) == x.first) {
                        firstnum = x.second;
                        break;
                    }
                }
                if (firstnum != 0) break;
            }
        }
        for (int i = sn-1; i > -1; i--) {
            if (isdigit(s[i])) {
                lastnum = stoi(string(1, s[i]));
                break;
            }
            else {
                for (const auto& x: nums) {
                    ll n = x.first.size();
                    if (s.substr(i, n) == x.first) {
                        lastnum = x.second;
                        break;
                    }
                }
                if (lastnum != 0) break;
            }
        }
        sum += firstnum*10;
        sum += lastnum;
    }
    cout << sum << "\n";
    return 0;
}
