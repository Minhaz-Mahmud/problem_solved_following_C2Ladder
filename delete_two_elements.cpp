#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    vector<ll>a(n);
    map<ll,ll>freq;
    ll total=0,cunt=0;

    for(ll i=0;i<n;i++){
        cin>>a[i];
        total+=a[i];
        freq[a[i]]++;
    }

    if((total*2)%n != 0){
        cout<<0<<endl;continue;
    }

    ll target=((total*2)/n);

    for(ll i=0;i<n;i++){
        freq[a[i]]--;
        ll need=target-a[i];
        cunt+=freq[need];
    }

    cout<<cunt<<endl;
}

return 0;}
