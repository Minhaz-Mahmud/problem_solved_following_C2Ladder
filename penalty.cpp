#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main(){
int t;
cin>>t;
while(t--){
    vector<char>c0;
    vector<char>c1;
    vector<char>c2;
    vector<char>c3;


    for(int i=0;i<10;i++){
        char x;
        cin>>x;
        if(i%2==0){c0.push_back(x);c2.push_back(x);}
        else {c1.push_back(x);c3.push_back(x);}
    }

    for(int i=0;i<5;i++){
        if(c0[i]=='?')c0[i]='1';
        if(c1[i]=='?')c1[i]='0';
    }

    int x=0,y=0,count1=0,count2=0,u=0,v=0;
    for(int i=0;i<5;i++){
        if(c0[i]=='1')x++;
        if((x-y)>(5-i)){count1=2*(i+1)-1;break;}
        if(c1[i]=='1')y++;
        if((x-y)>(4-i)){count1=2*(i+1);break;}
    }
    if(count1==0)count1=10;

   // cout<<"ff"<<endl;
    //cout<<"ff2  "<<x<<" "<<y<<endl;

      for(int i=0;i<5;i++){
        if(c3[i]=='?')c3[i]='1';
        if(c2[i]=='?')c2[i]='0';
    }

    for(int i=0;i<5;i++){
        if(c2[i]=='1')u++;
        if((v-u)>(4-i)){count2=2*(i+1)-1;break;}
        if(c3[i]=='1')v++;
        if((v-u)>(4-i)){count2=2*(i+1);break;}
    }
    if(count2==0)count2=10;

    //cout<<count1<<"    "<<count2<<endl;

    if(count1>count2){cout<<count2<<endl;}
    else {cout<<count1<<endl;}



}

return 0;}
