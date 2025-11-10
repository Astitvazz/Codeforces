#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long len;
        cin>>len;
        string str;
        cin>>str;
        vector<long long> left(str.length(),-1);
        long long a=0;
        long long b=0;
        for(long long i=0;i<str.length();i++){
            if(str[i]=='a'){
                left[i]=b;
                a++;
            }
            else{
                left[i]=a;
                b++;
            }
        }
        a=0;
        b=0;
        vector<long long> right(str.length(),-1);
        for(long long i=str.length()-1;i>=0;i--){
            if(str[i]=='a'){
                right[i]=b;
                a++;
            }
            else{
                right[i]=a;
                b++;
            }
        }
        //move all b's to best position
        //move all a's to best position
        long long option3=0;
        long long option2=0;
        for(long long i=0;i<str.length();i++){
            if(str[i]=='a'){
                option3+=min(left[i],right[i]);
            }
            else{
                option2+=min(left[i],right[i]);
            }
        }
        cout<<min({option2,option3})<<"\n";
    }
}