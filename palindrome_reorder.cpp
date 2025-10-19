#include <bits/stdc++.h>
using namespace std;
#define umci unordered_map<char,int>
#define umii unordered_map<char,int>
#define usi unordered_set<int>
#define usc unordered_set<char>

int main() {
    int a[26]={0};
    string s;cin>>s;
    for(char c:s)a[c-'A']++;
    int od=0;
    for(int x:a)od+=x&1;
    if(od>1)cout<<"NO SOLUTION\n";
    else{
        string out="";
        for(int x=0;x<26;++x){
            if(!(a[x]&1)){
                int t=a[x]/2;
                for(;t--;)out+=(char)(x+'A');
            }
        }
        for(int x=0;x<26;++x){
            if(a[x]&1){

                for(int i=0;i<a[x];++i)out+=(char)(x+'A');
                
            }
        }
        for(int x=25;x>-1;--x){
            if(!(a[x]&1)){
                int t=a[x]/2;
                for(;t--;)out+=(char)(x+'A');
            }
        }
       
        cout<<out<<'\n';
    }
    
}
