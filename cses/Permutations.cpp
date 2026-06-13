#include <bits/stdc++.h>

#define ll long long
#define lld long double
#define F first
#define S second
#define PB push_back
#define MP make_pair

using namespace std;

int main() {

    int n;
    cin >> n;

    int value = 2;

    if (n == 2 || n == 3) {
        cout << "NO SOLUTION";
        return 0;
    }

    while(value <= n) {
        cout << value << " ";
        value += 2;
    }

    value = 1;

    while(value <= n) {
        cout << value << " ";
        value += 2;
    }

    return 0;
}