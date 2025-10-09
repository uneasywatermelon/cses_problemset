
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll times;
    cin >> times;
 
    ll prev;
 
    ll sumofmoves=0;
 
    ll arr[times] = {};
 
    for(int x=  0 ; x< times ; ++x){
        ll current;cin>>current;arr[x]=current;
    }
 
    for(int x = 0 ; x<times; ++x){
        if(x!=0){
            if(prev>arr[x]){
                sumofmoves+=prev-arr[x];
                arr[x]=prev;
            }
 
        }
        prev = arr[x];
    }
    cout << sumofmoves;
 
return 0;}
