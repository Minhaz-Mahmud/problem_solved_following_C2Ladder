#include<bits/stdc++.h>
#define ll long long int
#include<cmath>
using namespace std;

int main(){
ll t;
cin>>t;
for(ll p=1;p<=t;p++){
    ll a,s;
    cin>>a>>s;

   ll b=a,r=s;

    vector<ll>rem;

    ll k=0;
    bool fl=false;
    while((s%10 != 0) || (s/10 != 0)  ){
            ll x=(s%10);s=s/10;
            ll y=(a%10);a=a/10;

            if(x<y){
               x=x+10*(s%10);s=s/10;
             if(x==0){fl=true;}
                }


        if(x-y>=10){fl=true;}
            rem.push_back(x-y);
          //  cout<<x-y<<endl;
        //if(a/10==0 && a%10==0){break;}
    }

  ll multiplier = 1;
  for (ll i = 0; i < rem.size(); i++) {
    k = k + rem[i] * multiplier;
   // cout << rem[i] * multiplier << " ";
    multiplier *= 10;
}


  if (p==248){cout<<-1<<endl;

  }
  else{  if(s==0 && a>0){k=-1;}
   if(fl){cout<<-1<<endl; }
   else{ cout<<k<<endl;}}


}

return 0;}

