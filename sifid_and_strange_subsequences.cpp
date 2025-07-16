#include <bits/stdc++.h>
#define ll long long int
#include <cmath>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>a;
        ll in;
        for(ll i=0;i<n;i++){
            cin>>in;
            a.push_back(in);
        }
        for(int i=0;i<a.size()-1;i++){
            if ((a[i]==a[i+1]) && a[i]>0){
                 a.erase(a.begin() + i+1);
                 n--;
                 i--;
            }
        }

        vector<ll>d;
        sort(a.begin(), a.end());

        ll count=0;

       if (a.size() > 2) {
        for(int i=0;i<a.size()-1;i++){
            d.push_back(fabs(a[i+1]- a[i]));
        }

        for(int i=0;i<d.size();i++){cout<<d[i]<<" ";}
        cout<<endl;

        sort(d.begin(), d.end());





        for(int i=0;i<a.size();i++){
            if (d[0] < a[i])
            {count++;
            cout<<d[0]<<"   "<<a[i]<<endl;
            }
        }
    }



        cout<<a.size()-count<<endl;


    }


return 0;}
