#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {   int flag=0;
        int first=0;
        int n;
        cin>>n;
        int arr[100];
        for (int i=0;i<n-2;i++){
              cin>>arr[i]  ;      }

        int start=0;
        while(arr[start]!=1){start++;if(start==99){break;}}

        int end=n-3;
        while(arr[end]!=1){end--;if(end==0){break;}}

        if(end>start){
        for(int i=start;i<end;i++){

            if(arr[i]==1){continue;}
            else if((arr[i]==0 && arr[i+1]==0)  || (arr[i]==0 && arr[i-1]==0) ){
                continue;
            }
         else {flag=1;}
        } }
        
        if (flag){cout<<"NO"<<endl;}
        else{cout<<"YES"<<endl;}
    }
    
}