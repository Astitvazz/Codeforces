#include <bits/stdc++.h>
using namespace std;
int helper(vector<long long>& vv,long long i,long long prefixsum){
    //base case

    //recursive equation
    long long a=INT_MIN;
    long long b=INT_MIN;
    if(vv[i]<0){
        a=prefixsum+abs(vv[i]);
        b=helper(vv,i+1,prefixsum);
        return max(a,b);
    }
    else{
        a=vv[i]+helper(vv,i+1,prefixsum+vv[i]);
        b=helper(vv,i+1,prefixsum);
        return max(a,b);
    }
}
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> vv;
        for(long long i=0;i<n;i++){
            long long temp;
            cin>>temp;
            vv.push_back(temp);
        }
        cout<<helper(vv,0,0);
    }
}