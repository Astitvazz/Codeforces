#include <bits/stdc++.h>
using namespace std;
int helper(string & str,int i,int smallActivated,vector<vector<int>>& vv){
    //base case
    if(i>=str.size()){
        return 0;
    }
    if(vv[i][smallActivated]!=-1){
        return vv[i][smallActivated];
    }
    //recursive equation
    if(smallActivated==0){
        if(isupper(str[i])){
            int a=helper(str,i+1,0,vv);
            int b=1+helper(str,i+1,1,vv);
            return vv[i][smallActivated]=min(a,b);
        }
        else{
            int a=1+helper(str,i+1,0,vv);
            int b=helper(str,i+1,1,vv);
            return vv[i][smallActivated]=min(a,b);
        }
    }
    else{
        if(isupper(str[i])){
            return vv[i][smallActivated]=1+helper(str,i+1,1,vv);
        }
        else{
            return vv[i][smallActivated]=helper(str,i+1,1,vv);
        }
    }
}
int main(){
    string str;
    cin>>str;
    vector<vector<int>> vv(str.size()+1,vector<int>(3,-1));
    cout<<helper(str,0,0,vv);
    return 0;
}