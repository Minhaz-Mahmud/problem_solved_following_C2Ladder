#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
int t;
cin>>t;
while(t--){
    ll n,k;
    cin>>n>>k;

    if(k<n){
        int q=n/k;
        if  (n%k==0){k=q*k;}
        else k=(q+1)*k;
    }

    ll d=k/n;
    if(k%n==0){cout<<d<<endl;}
    else cout<<d+1<<endl;

}
 return 0;
}
