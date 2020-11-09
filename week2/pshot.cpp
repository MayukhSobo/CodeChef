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

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input", "r", stdin);
        // freopen("output", "w", stdout);
    #endif

    #ifdef ONLINE_JUDGE
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
    #endif

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin  >> n;
        string s;
        cin >> s;
        int aScore = 0;
        int bScore = 0;
        int aRemains = n;
        int bRemains = n;
        bool gotBefore = false;
        FOR(s.size()) {
            if (!(i%2)) aRemains--;
            if (i%2) bRemains--;
        
            if (s[i] == '1' and !(i%2)) {
                aScore++;
            }
            if (s[i] == '1' and i%2) {
                bScore++;
            }
            
            if (aScore > bScore) {
                // A has a chance to win
                if ((bRemains + bScore) < aScore) {
                    // B can't win even if it wins every match from now on
                    cout << i + 1 << endl;
                    gotBefore = true;
                    break;
                }
            } else {
                // B has a chance to win
                if ((aRemains + aScore) < bScore) {
                    // A can't win even if it wins every match from now on
                    cout << i + 1 << endl;
                    gotBefore = true;
                    break;
                }
            }
        } 
        if (not gotBefore) {
            cout << 2*n << endl;
        }   
    }


   return 0;
}
