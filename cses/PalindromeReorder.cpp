#include <bits/stdc++.h>
#include <map>

#define ll long long
#define ld long double
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define MOD 1000000007

const ll inf = INT_MAX;
const ld ep = 0.0000001;
const ld pi = acos(-1.0);
const ll md = 1000000007;

using namespace std;

int main() {
    string s, res;
    cin >> s;
    map<char, int> mp;
    int odd = 0;
    int left = 0, right = s.size() - 1;
    res.append(s.size(), ' ');

    for (int i = 0; i < (int)s.size(); i++)
        mp[s[i]]++;

    for (auto u : mp) {
        int count = u.second;
        if (count % 2) {
            odd++;
            if (odd > 1) break;
            res[s.size() / 2] = u.first;
            count--;
        }
        while (count) {
            res[left] = u.first;
            res[right] = u.first;
            left++; right--;
            count -= 2;
        }
    }

    if (odd > 1)
        cout << "NO SOLUTION\n";
    else
        cout << res << "\n";

    return 0;
}
