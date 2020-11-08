#include "bits/stdc++.h"
// #define ONLINE_JUDGE
using namespace std;


int main() {
    #ifndef ONLINE_JUDGE
        freopen("input", "r", stdin);
        freopen("output", "w", stdout);
    #endif

    #ifdef ONLINE_JUDGE
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
    #endif

    int t;
    cin >> t;
    while (t--) {
        long long int profit = 0;
        int n;
        int s, v, p;
        cin >> n;
        for (int i=0; i<n; i++) {
            cin >> s >> p >> v;
            profit = max<long long int>(profit, (p / (s + 1)) * v);
        }
        cout << profit << endl;
    }
    return 0;
}