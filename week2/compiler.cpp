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
T index(vector<T> &v, int elem) {
    auto it = find(v.begin(), v.end(), elem);
    return (it != v.end()) ? (it - v.begin()): -1;
}

void solve(int t) {
   while(t--) {
       // Code here
       string s;
       cin >> s;
       stack<char> S;
       int count = 0;
       FOR(s.size()) {
           if (s[i] == '<') {
               S.push('<');
           }else{
             // It must be '>'
             if (not S.empty()) {
                 S.pop();
                 if (S.empty()) {
                     count = i + 1;
                 }
             }else{
                 break;
             }
           }
       }
       cout << count << endl;
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
   return 0;
}