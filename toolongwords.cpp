#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>> str;
        int len=str.length();
        if(len<=10){
            cout<<str<<"\n";
        }
        else{
            string res;
            res.push_back(str[0]);
            res=res+to_string(len-2);
            res.push_back(str[len-1]);
            cout<<res<<"\n";
        }
    }
    return 0;
}