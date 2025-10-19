#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int t=s.size();
    int f;
    auto fact = [&](int x) -> int {
        f=1;
        for(int r=2;r<=x;++r)f*=r;
        return f;
    };
    t=fact(t);
    int a[26]={0};
    for(char c:s)a[c-'a']++;
    for(int x:a)t/=fact(x);
    cout << t << endl;
    
    for(;t--;){
        cout << s << '\n';
        next_permutation(s.begin(),s.end());
    }

}
