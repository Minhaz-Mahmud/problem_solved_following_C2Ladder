#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
ll t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    ll a[n],d[n];
    for(int i=0;i<n;i++){
            cin>>a[i];
            d[i]=a[i];
    }
    sort(d,d+n);
    int z=n/2;
    ll x;
   if(n%2==0)  x=d[z];
   else  x=d[z+1];
   // cout<<x<<"  "<<z<<endl;

   int qq=0;

           // cout<<"yo0o"<<endl;
    for(int i=2;i<=x;i++){
            int f1=0,f2=0;
           // cout<<"yoo"<<endl;
        for(int j=0;j<n-1;j+=2){
                if((a[j]%i!=0) && (a[j+1]%i==0)){
                continue;
                  }
            else {f1=1;
            //cout<<"yo1"<<endl;
            break;
            }
            }

        for(int j=0;j<n-1;j+=2){
                if((a[j]%i==0) && (a[j+1]%i!=0)){
                continue;
                  }
            else {f2=1;
            //cout<<"yo2"<<endl;
            break;
            }
            }

        if(f1==0){
            if(n%2==0){
                cout<<i<<endl;
                qq=1;
                break;
            }
            else{
                if((a[n-2]%i==0) && (a[n-1]%i!=0)){
                   cout<<i<<endl;
                   qq=1;
                   break;

                   }
            }
        }

          if(f2==0){
            if(n%2==0){
                cout<<i<<endl;
                 qq=1;
                break;

            }
            else{
                if((a[n-2]%i!=0) && (a[n-1]%i==0)){
                      cout<<i<<endl;
                       qq=1;
                       break;

                   }
            }
        }


    }
    if(qq==0)cout<<0<<endl;
}

return 0;}
