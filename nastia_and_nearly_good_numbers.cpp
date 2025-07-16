#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    int t;
    cin >> t;
     
    while (t--)
    {
        ll a,b;
        cin >> a >> b;
        if( b == 1) {
            cout << "NO" << endl;
            continue;
        }

        else{
        ll x,y,z;
        x=a*b*3;

        ll j=1;
        ll k=(2*b)-1;
        y=a;
        z=x-y;
        ll q[3]={x,y,z};
       sort(q, q + 3);
        cout << "YES" << endl;
        // cout<< x << " " << y << " " << z << endl;
        cout << q[0] << " " << q[1] << " " << q[2] << endl;}
    }
    
}