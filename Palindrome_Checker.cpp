#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl   '\n' 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
void solve() {
    string s;
    string x="";
    getline(cin, s);

    for (int i = 0; i < s.size(); i++) {
        if(isalpha(s[i])) { // check any charcter is alphabet.
            x += tolower(s[i]); // convert lowercase
        }
    }
    int len = x.size(); // size of the string which contain only alphabet
    int i = 0, j = len - 1;
    bool is_palindrome = true;
    if(len%2) { // if len is odd
        while(i<j) {
            if(x[i] != x[j]) {
                is_palindrome = false;
                break;
            }

            i++, j--;
        }
    }
    else {         // if len is even
        while(i<=j) {
            if(x[i] != x[j]) {
                is_palindrome = false;
                break;
            }
            i++, j--;
        }
    }
    if(is_palindrome) {
        cout << "Palindrom\n";
    }
    else {
        cout << "Not a palindrome\n";
    }
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc=1; //cin>>tc;
 while(tc--)
 solve();
return 0;
}