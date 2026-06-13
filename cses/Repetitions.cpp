#include <bits/stdc++.h>

#define ll long long
#define lld long double
#define F first
#define S second
#define PB push_back
#define MP make_pair

using namespace std;

int main() {

    string s;
    cin >> s;
    int n = s.length(), best = 0, curr = 1;
    for (int i = 1 ; i < n ; i++) {
        if (s[i] != s[i - 1]) {
            best = max(best, curr);
            curr = 0;
        }
        curr++;
    }
    best = max(best, curr);
    cout << best << endl;

    return 0;

}