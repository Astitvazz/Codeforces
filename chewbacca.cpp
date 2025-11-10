#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    string res="";
    for(int i=0;i<str.length();i++){
        
        
        int temp=str[i]-'0';
        int max1=min(temp,9-temp);
        if(i==0&&max1==0){
            res=res+str[i];
        }
        else{
        res=res+to_string(max1);
        }
        
    }
    cout<< res;
}