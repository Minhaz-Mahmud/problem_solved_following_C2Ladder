#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll t;
    cin>>t;
    for(ll q=0;q<t;q++){
        int n;
        cin>>n;
        vector<ll>a;
        ll tot=0;

        for(ll i=0;i<n+2;i++){
            ll x;
            cin>>x;
            a.push_back(x);
            tot+=x;
            }

            ll tot2=tot;
            sort(a.begin(),a.end());
            tot=tot-a[n+1];
            ll ex=tot-a[n+1];
            ll temp=a[n+1];
            a.erase(a.begin() + (n + 1));

            bool flag=true;
             auto it = find(a.begin(), a.end(), ex);
             if (it != a.end()) {
               a.erase(it);flag=false;  //cout<<"  here 1  "<<ex<<" "<<*it<<" "<<endl;
               }

            if(flag){

            a.push_back(temp);
            tot2=tot2-a[n];
            ex=tot2-a[n];
            a.erase(a.begin() + (n));

             auto it = find(a.begin(), a.end(), ex);
             if (it != a.end()) {
               a.erase(it);flag=false; // cout<<"  here 2  "<<endl;
               }
            }

            if(!flag){
                for(ll i=0;i<n;i++){
                    cout<<a[i]<<" ";
                }
                cout<<endl;

            }

            else{cout<<-1<<endl;}

    }

return 0;
}
