#include <bits/stdc++.h>
using namespace std;
string arr[10]={".",".","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
int n;
void solve(string& digits,string& output,int i){
    if(i==n){
        cout<<output<<endl;
        return;
    }
    int digit= digits[i]-'0';
    string tmp=arr[digit];
    for(int j=0;j<tmp.size();j++){
        output.push_back(tmp[j]);
        solve(digits,output,i+1);
        output.pop_back();
    }

}
int main() {
    string digits="23";
    // cin>>digits;
    n= digits.size();
    string op="";
    solve(digits,op,0);
    return 0;
}