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
       int n;
       cin >> n;
       string s;
       stack<char> S;
       map<char, int> m;
       m['-'] = m['+'] = 0;
       m['*'] = m['/'] = 1; 
       m['^'] = 2;
       cin >> s;
       FOR(s.size()) {
           if (s[i] >= 'A' and s[i] <= 'Z') {
               // If it is a operand
               cout << s[i]; //;
           }else if (s[i] == '(') {
               S.push('(');
           }else if (s[i] == ')') {
               while ((not S.empty()) and (S.top() != '(')) {
                   cout << S.top();
                   S.pop();
               }
               if (S.top() == '(') S.pop();
           }else{
               // It is an operator
                if (S.empty() or S.top() == '(' or m[s[i]] > m[S.top()]) {
                    S.push(s[i]);
                }else{
                    while((not S.empty()) and S.top() != '(' and m[S.top()] >= m[s[i]]) {
                        cout << S.top();
                        S.pop();
                    }
                    // if (S.top() == '(') S.pop();
                    S.push(s[i]);
                }
           }
       }
       while (not S.empty()) {
               if (S.top() != '(') cout << S.top();
               S.pop();
        }
        cout << endl;
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
