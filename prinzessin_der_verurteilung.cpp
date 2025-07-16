#include<bits/stdc++.h>
#include <string>
#define ll long long int
using namespace std;

string str;

void num_to_str(ll siz){
   if((siz-1)/26>=1){num_to_str((siz-1)/26);}
   str+=('a'+((siz-1)%26));

}


int main(){
ll t;
cin>>t;
   while(t--){
    ll n;
    cin>>n;
    string ss;
    cin>>ss;
    ll i=1;
    string  res;
    while(1){
        //cout<<"here"<<endl;
        str="";
        num_to_str(i);
       // cout<<str<<endl;
        ll check=ss.find(str);
     if(check == string::npos){
        res=str;
        break;
     }
     i++;
    }
    cout<<res<<endl;

    }

return 0;}
