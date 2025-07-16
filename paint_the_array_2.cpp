#include<bits/stdc++.h>
#define ll long long int
using namespace std;



ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}

ll gcd_of_array(vector<ll>& arr) {
    ll result = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        result = gcd(result, arr[i]);
    }
    return result;
}



int main(){

int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<ll>odd;
    vector<ll>even;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        if(i%2==0){even.push_back(x);}
        else odd.push_back(x);
    }

    ll o_r=gcd_of_array(odd);
    ll o_e=gcd_of_array(even);

    ll o_x=gcd(o_r,o_e);

   // cout<< o_r<<" "<<o_e<<" "<<o_x<<endl;

     bool f1=true,f2=true;int pp=0;

    if(o_r==1 && o_e==1)cout<<0<<endl;
    else if( o_r != 1){

        for(int i=0;i<even.size();i++){
            if(even[i]%o_r==0){f1=false;break;}
        }
        if (f1){pp=1;cout<<o_r<<endl;}
    }

    else{f1=false;}

     if(o_e != 1  ){
            if(pp==0){

        for(int i=0;i<odd.size();i++){
            if(odd[i]%o_e==0){f2=false;break;}
        }
        if (f2){cout<<o_e<<endl;}}
    }

    else{f2=false;}

     if(!f1 && !f2 ){
        cout<<0<<endl;
    }


}

return 0;
}
