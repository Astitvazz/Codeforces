#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int len;
        cin>>len;
        vector<int> vv(len,-1);
        for(int i=0;i<len;i++){
            cin>>vv[i];
        }
        int count=0;
        int maxtillnow=INT_MIN;
        for(int i=0;i<vv.size()-1;i++){
            maxtillnow=max(vv[i],maxtillnow);
            if(i%2==0){
                if(vv[i]>=vv[i+1]){
                    if(maxtillnow>vv[i+1]){
                        
                        vv[i+1]=maxtillnow;
                    }
                    if(vv[i]>=vv[i+1]){
                        count=count+vv[i]-vv[i+1]+1;
                        vv[i]=vv[i+1]-1;
                        
                    }
                }
            }
            else{
                if(vv[i+1]>=vv[i]){
                    if(maxtillnow>vv[i]){
                       
                        vv[i]=maxtillnow;
                        
                    }
                    if(vv[i+1]>=vv[i]){
                        count=count+vv[i+1]-vv[i]+1;
                        maxtillnow=max(maxtillnow,vv[i+1]);
                        vv[i+1]=vv[i]-1;
                        
                    }
                }
            }
        }
        cout<<count<<" ";
    }
}