#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<ll>a;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        a.push_back(x);

    }

    sort(a.begin(),a.end(),greater<ll>());
    ll alice=0,bob=0;

    ll j=0;
    while(j!=n){
        if(a[j]%2==0){alice+=a[j];j++;}
        else{j++; }

        if(j==n)break;

          if(a[j]%2!=0){bob+=a[j];j++;}
          else{j++; }

    }

    if(alice>bob){cout<<"Alice"<<endl;}
    else if(alice <bob){cout<<"Bob"<<endl;}
    else{cout<<"Tie"<<endl;}

  }

return 0;}
