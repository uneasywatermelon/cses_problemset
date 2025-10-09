
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    cin >> s;
 
    char current;
    int times = 1;
    int maxtimes=0;
 
    if(s.size()!=1){
    for(int x = 0 ; x< s.size()-1 ; ++x){
        if(s[x]!=s[x+1]){current=s[x+1];times=1;}
        else ++times;
        if(times>maxtimes)maxtimes=times;
 
    }
    cout << maxtimes;}
    else cout << 1;
 
 
 
return 0;}
