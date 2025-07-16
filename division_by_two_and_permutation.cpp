#include <bits/stdc++.h>
#include <cmath>
using namespace std;

#define ll long long int

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll a[n];
        int flag=1;
        for(int i=0;i<n;i++)cin>>a[i];

        for(int i=0;i<n;i++){
            while(a[i]>n)
            {
                a[i]/=2;
            }
        }

         sort(a,a+n);

     /*    for (int i=0;i<n;i++){cout<<a[i]<<" ";}
         cout<<endl;  */

         int base = log2(n);

         while(base--){
                if(a[0]==1 && a[1]==1){flag=0;break;}

                 for(int i=0;i<n-1;i++){
                    if(a[i]==a[i+1]){
                      a[i]/=2; }
                    }
              sort(a,a+n);
              if(a[0]==1 && a[1]==1){flag=0;break;}

         }
         if(flag==1){cout<<"YES"<<endl;}
         else{cout<<"NO"<<endl;}

        }


return 0;
}
