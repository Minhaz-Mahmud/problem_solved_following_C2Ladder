#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
  ll t;
  cin>>t;
  while(t--){
   ll n;
   char c;
   cin>>n;
   cin>>c;
   vector<char> a;
   for(ll i=0;i<n;i++){
    char x;
    cin>>x;
    a.push_back(x);
   }

  vector<ll>pos,ipos;
  for(ll i=0;i<n;i++){
    if(a[i] != c){pos.push_back(i+1);}
    else{ipos.push_back(i+1);}
  }

 // sort(pos.begin(),pos.end(),greater<ll>());
  sort(ipos.begin(),ipos.end(),greater<ll>());
  bool flag=true;
  ll res=-1;

  if(pos.empty()){cout<<0<<endl;flag=false;}
 // else if(*pos.begin() != n){cout<<1<<endl<<n<<endl;flag=false;}
  else{

    for(ll i=0;i<ipos.size();i++){
          ll hit=0;
          for(ll j=0;j<pos.size();j++){
            if (pos[j]%ipos[i] ==0 ){hit++;}
          }
          if (hit==0){cout<<1<<endl<<ipos[i]<<endl; flag=false;break; }
          }
        }
if (flag){cout<<2<<endl<<n<<" "<<n-1<<endl;}
}

return 0;}

