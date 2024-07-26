#include <iostream>
using namespace std;
int cnt;
void solve_subsequences(string &s, int i,string output){

    int n=s.size();
    if(i==n){
        cout<<output<<endl;
        cnt++;
        return;
    }
    solve_subsequences(s,i+1,output);
    solve_subsequences(s,i+1,output+s[i]);
}

int main() {
    cnt=0;
    string s="abc";
    int n=s.length();
    solve_subsequences(s,0,"");
    cout<<"Total number of subsequences: "<<cnt<<endl;

    return 0;
}