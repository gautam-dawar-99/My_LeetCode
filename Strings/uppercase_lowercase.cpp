#include<iostream>
using namespace std;
int main(){
    string str="abc",str2="ABC";
    bool ans=true;
    for(int i=0;i<str.length();i++){
        // if(str[i]==str2[i]+32){
        //     ans=true;
        // }
        // else{
        //     ans=false;
        //     break;
        // }
        if(str[i]!=str2[i]+32){
            ans=false;
            break;
        }
    }
    if(ans==true){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}