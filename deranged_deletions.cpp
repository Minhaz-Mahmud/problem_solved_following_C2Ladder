#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    vector<ll>b,c,d;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        b.push_back(x);
        c.push_back(x);
    }

    sort(c.begin(), c.end());
    for(int i=0;i<n;i++){
        if(b[i]!= c[i])
            d.push_back(b[i]);
    }

    if(d.size()>0){cout<<"YES"<<endl<<d.size()<<endl;
             for(ll i=0;i<d.size();i++){cout<<d[i]<<" ";}
             cout<<endl;
        }

     else{cout<<"NO"<<endl;}

}

return 0;}

