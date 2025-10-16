#include <bits/stdc++.h>
using namespace std;
int factorial(int n) {
    int ret = 1;
    for(int x=2;x<=n;++x)ret *= x;
    return ret;
}
int main() {

    string s;
    cin >> s;
    unordered_map<char,int>dt;
    for (char c:s) {
        dt[c]++;
    }

    int t = 0;
    t = factorial(s.size());
    for (pair x: dt) t/=factorial(x.second);
    cout << t << endl;
    while(t--){
        
        cout << s << '\n';
        next_permutation(s.begin(), s.end());
    }
}
