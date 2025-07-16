#include<bits/stdc++.h>
#define ll long long int
#include <cmath>
using namespace std;



ll hit(ll x,ll arr[],ll n){
    ll ht=0;
    for(ll i=0;i<n-1;i++){

        if((arr[i+1]-arr[i])>x){ht+=x;}
        else{ht+=(arr[i+1]-arr[i]);}
    }
    return (ht+x);
}


int main(){

ll t;
cin>>t;
while(t--){
    ll n,h;
    cin>>n>>h;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }

    vector<ll>dif;
    for(ll i=0;i<n-1;i++){
      dif.push_back(a[i+1]-a[i]);

    }

   //ll mx = *max_element(dif.begin(), dif.end());
   ll mx=h;
   ll mn = 1;

  // cout<<mx<<"   "<<hit(310,a,n)<<"    "<<hit(653,a,n)<<endl;

   ll k=0;

  // cout<<(hit(470,a,n))<<endl;

     while(1){
       // cout<<"here"<<endl;
       if(hit(mn,a,n)>=h){k=mn;break;}
       else if( (hit((mx+mn)/2,a,n)>h)  ){mx=ceil((mx+mn)*1.0/2);
             //cout<<"here  mx1:   "<<mx<<endl;
              }
       else {mn=ceil((mx+mn)*1.0/2);
            //cout<<"here  mn2:   "<<mn<<endl;
            }

   }

while(1){
    if(hit(k-1,a,n)>=h){k-=1;}
    else{break;}

}

cout<<k<<endl;
}

return 0;}

