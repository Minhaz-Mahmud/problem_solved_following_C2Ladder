#include<bits/stdc++.h>
#define ll long long  int

using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        string s;
        cin>>n>>s;
        ll flag=0;
        for(ll i=0;i<n-1;i++){
            if (s[0]==s[1])break;
            else if(s[i]>=s[i+1])flag++;
            else break;
        }

        for(ll i=0;i<=flag;i++){cout<<s[i];}
        for(ll i=flag;i>-1;i--){cout<<s[i];}
        cout<<endl;

    }

return 0;}

