#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pb push_back


int main() {
    auto sum=[](vi vec)->int{

        int s=0;
        for(int x:vec)s+=x;
        return s;
    };

    int t;cin>>t;
    vi og(t);
    for(int x=0;x<t;++x)cin>>og[x];
    int ogsum=sum(og);
    cout << ogsum << '\n';
}
