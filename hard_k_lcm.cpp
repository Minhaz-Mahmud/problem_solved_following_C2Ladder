#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
   ll t;
   cin>>t;
   while(t--){
    ll n,k;
    cin>>n>>k;
    k=k-3;
    n=n-k;
    for(int i=0;i<k;i++){cout<<1<<" ";}
    if(n%2 !=0){cout<<1<<" "<<(n-1)/2<<" "<<(n-1)/2<<endl;}
    else if(n%4==0){cout<<n/4<<" "<<n/2<<" "<<n/4<<endl;}
    else{cout<<2<<" "<<(n-1)/2<<" "<<(n-1)/2<<endl;}
   }

return 0;}
