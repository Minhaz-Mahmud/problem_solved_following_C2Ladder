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
    ll tot=0;
    for(ll i=0;i<n-1;i++){
        if(a[i]!=c){tot++;break;}
    }
    if(a[n-1]!=c){tot++;}

    if(tot==2){
        cout<<2<<endl<<n<<" "<<n-1<<endl;
       }

    else if(tot==1){
         if(a[n-1]!=c){cout<<1<<endl<<n-1<<endl;}
         else{cout<<1<<endl<<n<<endl;}}


    else{cout<<0<<endl;}


  }

return 0;}
