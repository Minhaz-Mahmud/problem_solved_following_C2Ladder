#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        ll n,a,b,score;
        cin>>n>>a>>b;
        string s;
        cin>>s;
        int m=1;
        int j=0;
           for(ll i=1;i<n;i++){
                if(s[i]==s[j])continue;
                else {m++;j=i;}
           }

        int mm=(m/2)+1;
        if(b>-1){score=n*a+n*b;}
        else {score=n*a+mm*b;}
        cout<<score<<endl;

        }
return 0;
    }


