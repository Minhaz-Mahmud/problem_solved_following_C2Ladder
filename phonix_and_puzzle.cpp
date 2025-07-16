#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#include <cmath>

int main(){
int t;
cin>>t;
while(t--){
    double n;
    cin>>n;
    double first=sqrt(n/2); //cout<<first<<endl;
    double second=sqrt(n/4); //cout<<second<<endl;

    if(fmod(first, 1)==0)cout<<"YES"<<endl;
    else if(fmod(second, 1)==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
return 0;
}
