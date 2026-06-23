#include <bits/stdc++.h>

#define ll long long
#define lld long double
#define F first
#define S second
#define PB push_back
#define MP make_pair

using namespace std;

int main() {

    ll t;
    cin >> t;

    while(t--){
        ll y, x;
        cin >> y >> x;

        ll maxi = max(x, y);
        ll square = (maxi - 1) * (maxi - 1);
        if (maxi % 2 == 0) {
            if (x > y) {
                cout << square + y << endl;
            }
            else {
                cout << (maxi * maxi) - x + 1 << endl;
            }
        }
        else {
            if (x > y) {
                cout << (maxi * maxi) - y + 1 << endl;
            }
            else {
                cout << square + x << endl;
            }
        }
    }

    return 0;
}