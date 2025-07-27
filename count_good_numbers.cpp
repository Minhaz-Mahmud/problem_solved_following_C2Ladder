#include <bits/stdc++.h>
#include <cmath>
#define ll long long int

using namespace std;

ll sing(ll n, ll b){
  return b/n;
}


ll mul( ll b){

ll x=sing(2,b)+sing(5,b)+sing(3,b)+sing(7,b);
ll y=sing(6,b)+sing(10,b)+sing(14,b)+sing(15,b)+sing(21,b)+sing(35,b);
ll w=sing(30,b)+sing(70,b)+sing(42,b)+sing(105,b);
ll q=sing(210,b);

ll z=b-x+y-w+q-1;

return z;

}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        ll a,b;
        cin>>a>>b;
        cout<<mul(b)- mul(a-1)<<endl;
    //  cout<<mul(2)<<endl;

    }

    return 0;
}
