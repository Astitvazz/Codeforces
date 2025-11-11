#include <bits/stdc++.h>
using namespace std;
int helper(string &str1,string & str2,int i,vector<int>& vv){
    //base case
    if(i>=str1.length()){
        return 0;
    }
    if(vv[i]!=-1){
        return vv[i];
    }
    //recursive equation
    if(str1[i]==str2[i]){
        return helper(str1,str2,i+1,vv);
    }
    else{
        //two options
        //1)-flip the current bit
        int op1=1+helper(str1,str2,i+1,vv);
        //2)-swap with any jth bit in same string
        int res=INT_MAX;
        for(int k=i+1;k<str1.length();k++){
            if(str1[k]=='0'&&str1[i]=='1'||str1[k]=='1'&&str1[i]=='0'){
                swap(str1[k],str1[i]);
                res=min(res,abs(k-i)+helper(str1,str2,i+1,vv));
                swap(str1[k],str1[i]);
            }
        }
        return min(res,op1);
    }
}
int main(){
    int n;
    cin>>n;
    string str1,str2;
    cin>>str1;
    cin>>str2;
    vector<int> vv(str1.length()+1,-1);
    cout<< helper(str1,str2,0,vv);
}