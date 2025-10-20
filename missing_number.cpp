#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;cin>>n;
    int ans=n*(n+1)/2;
    n--;
    for(;n--;){
        int x;cin>>x;
        ans-=x;
    }
    cout<<ans<<'\n';
}

