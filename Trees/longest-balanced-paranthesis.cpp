#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool check(string str){
        stack<char> s;
        for(char c:str){
            if(c=='('){
                s.push(c);
            }else if(c==')'){
                if(!s.empty() && s.top()=='('){
                    s.pop();
                }else{
                    return false;
                }
            }
        }
        return s.empty();
    }
    int longestValidParentheses(string str) {
        int ans=0;
        int n=str.length();
        for(int i=0;i<n;i++){
            string tmp="";
            for(int j=i;j<n;j++){
                tmp+=str[j];
                if(check(tmp)){
                    // ans = max(ans,tmp.size());
                    //cout<<tmp<<" "<<check(tmp)<<endl;
                    ans = ans>tmp.size()?ans:tmp.size();
                }
                
            }
        }
        return ans;
    }
};
int main(){
    string str;
    cin>>str;
    Solution obj;
    cout<<obj.longestValidParentheses(str);
    return 0;
}