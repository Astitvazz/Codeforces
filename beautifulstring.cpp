#include <bits/stdc++.h>
using namespace std;
bool isIncreasing(string& str){
    for(int i=0;i<str.length()-1;i++){
        if(str[i+1]<str[i]){
            return false;
        }
    }
    return true;
}
bool isDecreasing(string & str){
    for(int i=0;i<str.length()-1;i++){
        if(str[i+1]>str[i]){
            return false;
        }
    }
    return true;
}
void reverse(string & str){
    int i=0;
    int j=str.length()-1;
    while(i<j){
        swap(str[i],str[j]);
    }
    i++;
    j--;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int len;
        cin>>len;
        string str;
        cin>>str;
        int i=0;
        int j=len-1;
        while(i<j){
            if(str[i]!=str[j]){
                break;
            }
        }
        string temp;
        for(int k=i;k<=j;k++){
            temp.push_back(str[k]);
        }
        if(isIncreasing(temp)){
            for(int l=i;l<=j;l++){
                cout<<l<<" ";
            }
        }
        if(isDecreasing(temp)){
            reverse(temp);
        
            int sz=temp.length();
            int left=0;
            string store="";
            for(int right=0;i<str.length();i++){
                store+=str[right];
                if(right-left+1==sz){
                    if(store==temp){
                        for(int p=left;p<=right;p++){
                            cout<<p<<" ";
                        }
                    }
                }
            }
        }
    }
}