#include<bits/stdc++.h>
#include <cmath>
using namespace std;
#define ll long long int

int main(){
int t;
cin>>t;
while(t--){
   ll a[6];
   for(int i=0;i<6;i++){
     cin>>a[i];
   }
   double t=(a[0]*a[1])+(a[2]*a[3])+(a[4]*a[5]);
   double sq=sqrt(t);

   double r = fmod(sq, 1);


   ll mx = *max_element(a, a + 6);

   int p;
   for(int i=0;i<6;i++){
    if(a[i]==mx){p=i;break;}}

    ll q,w;
    bool flag=false;

    if(p%2==0){q=a[0]+a[2]+a[4]-mx;w=a[1]+a[3]+a[5];
           if(r==0  && q==mx){cout<<"YES"<<endl;flag=true;}
           else if(w==mx && a[0]==a[2] && a[2]==a[4] && r==0){cout<<"YES"<<endl;flag=true;}
    }
    else  {q=a[0]+a[2]+a[4];w=a[1]+a[3]+a[5]-mx;

           if(r==0  && w==mx){cout<<"YES"<<endl;flag=true;}
           else if(r==mx && a[1]==a[3] && a[3]==a[5] &&r==0){cout<<"YES"<<endl;flag=true;}

    }

    if(!flag){cout<<"NO"<<endl;}


}
 return 0;
}
