#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    vector<ll>b;

     for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        b.push_back(x);

    }

    if(b[0]<=b[1]){cout<<2*b[0]<<endl;}
    else if(b[0]>b[1]){cout<<b[0]+b[1]<<endl;}



}

return 0;}

