#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl   '\n' 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
void solve() {
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        if(i%3 == 0) {
            cout << "Fizz\n";
        }
        else if(i%5 == 0) {
            cout << "Buzz\n";
        }
        else if(i%15 == 0) {
            cout << "FizzBuzz\n";
        }
        else {
            cout << i << "\n";
        }
    }
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc=1; //cin>>tc;
 while(tc--)
 solve();
return 0;
}