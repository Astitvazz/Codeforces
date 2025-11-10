#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>> t;
    while(t--){
        long long time,req;
        cin>>req>>time;
        vector<pair<long long,long long>> vv;
        vv.push_back({0,0});
        while(req--){
            
            long long a,b;
            cin>>a>>b;
            vv.push_back({a,b});
            
        }
        long long count=0;
        for(int i=0;i<vv.size()-1;i++){
            if(vv[i].second==vv[i+1].second){
                if((vv[i+1].first-vv[i].first)%2==0){
                    count+=vv[i+1].first-vv[i].first;
                }
                else{
                    count+=vv[i+1].first-vv[i].first-1;
                }
            }
            else{
                if((vv[i+1].first-vv[i].first)%2==0){
                    count+=vv[i+1].first-vv[i].first-1;
                }
                else{
                    count+=vv[i+1].first-vv[i].first;
                }
            }
        }
        long long x=time-vv[vv.size()-1].first;

        cout<<count+x<<"\n";
    }
}