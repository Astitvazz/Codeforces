#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        vector<long long> vv;
        for(long long i=0;i<n;i++){
            long long temp;
            cin>>temp;
            vv.push_back(temp);
        }
        long long i=0;
        long long j=vv.size()-1;
        while(k>0&&i<=j){
            long long min_val=min(vv[i],vv[j]);
            if(i==j){
                if(k>=vv[i]){
                    k=k-vv[i];
                    vv[i]=0;
                    
                    
                    i++;
                    j--;
                }
                else{
                    vv[i]=vv[i]-k;
                    k=0;
                    i++;
                    j--;
                }
            }
            else{
            if(2*min_val<=k){
                vv[i]=vv[i]-min_val;
                vv[j]=vv[j]-min_val;
                k=k-2*min_val;
                if(vv[i]==0){
                    i++;
                }
                if(vv[j]==0){
                    j--;
                }
            }
            
            else{
                long long div=k/2;
                long long mod=k%2;
                vv[i]=vv[i]-div-mod;
                vv[j]=vv[j]-div;
                k=0;
            }
        }
        }
        long long count=0;
        for(long long i=0;i<vv.size();i++){
            if(vv[i]==0){
                count++;
            }
        }
        cout<<count<<"\n";
    }
}