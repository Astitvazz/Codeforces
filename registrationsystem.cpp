#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    unordered_map<string,int> mpp;
    while(t--){
        string str;
        cin>>str;
        
        if(mpp.find(str)==mpp.end()){
            cout<<"OK"<<"\n";
            mpp[str]++;
        }
        else{
            cout<<str<<mpp[str]<<"\n";
            mpp[str]++;
        }
        
    }
    return 0;
}