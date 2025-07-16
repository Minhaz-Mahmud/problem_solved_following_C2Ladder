#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}



int main(){
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    vector<ll>b,c;

     for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        b.push_back(x);
}
ll x=1;
for(ll i=0;i<n-1;i++){
    if(b[i+1]%b[i]!=0){}
    x=gcd(b[i+1],b[i]);
    c.push_back(b[i]/x);
}


   ll result = c[0];
    for (ll i = 1; i < c.size(); i++) {
        result = lcm(result, c[i]);
    }


   cout<<result<<endl;

}

return 0;}

