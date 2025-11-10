#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int sum1=0;
    int sum0=0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='1'){
            sum0=0;
            sum1++;
            if(sum1>=7){
                cout<<"YES";
                return 0;
            }
        }
        if(str[i]=='0'){
            sum1=0;
            sum0++;
            if(sum0>=7){
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
    return 0;
}