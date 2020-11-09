/*
author: Mayukh Sarkar
email: mayukh2012@hotmail.com
GitHub: /MayukhSobo
*/

#include "bits/stdc++.h"
// #define ONLINE_JUDGE
#define FOR(N) for(int i=0; i<N; i++)
#define FORR(N) for(int i=N-1; i>0; i--)
#define DB(x) cout<<"\n"<<#x<<" = "<<(x)<<"\n";
#define ll long long
#define ull unsigned long long
#define mod 1000000007LL
using namespace std;

template <typename T>
T index(vector<T> &v, ll int elem) {
    auto it = find(v.begin(), v.end(), elem);
    return (it != v.end()) ? (it - v.begin()): -1;
}

void solve(int t) {
    while (t--) {    
        ll int n;
        cin >> n;
        vector<ll int> S(n);
        ll int temp;
        FOR(n) {
            cin >> temp;
            // Not taking anything beyond 0
            if (temp) 
                S[i] = temp;
            else break;
        }

        ll total = 0;
        while (not S.empty()) {
            // Find the index of the minimum element
            ll int min_value = *min_element(S.begin(), S.end());
            // You can decrease the array that many times
            total += min_value * S.size();
            // Find the index of the maximum element
            ll int minIndex = index<ll int>(S, min_value);
            // Strip the array off
            S.resize(minIndex);
            // Decrese all the elements by `min_value`
            FOR(S.size()) {
                S[i] -= min_value;
            }
        }

        cout << total << endl;
    }
}

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
    solve(t);
    cout << endl;
    
    return 0;
}
