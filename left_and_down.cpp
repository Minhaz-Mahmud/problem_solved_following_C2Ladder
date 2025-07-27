#include <bits/stdc++.h>
#include <cmath>
#define ll long long int

using namespace std;
ll gcd(ll a, ll b){
  while(b!=0){
    ll rem=a%b;
    a=b;
    b=rem;
  }

  return a;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        ll a,b,k;
        cin>>a>>b>>k;
        ll x=gcd(a,b);

        a/=x;
        b/=x;

        if(a<=k && b<=k)cout<<1<<endl;
        else cout<<2<<endl;

    }

    return 0;
}
