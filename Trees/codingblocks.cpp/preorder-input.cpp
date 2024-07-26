#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    getline(cin, s1);
    getline(cin, s2);
    stringstream ss1(s1),ss2(s2);

    string word1, word2;
    vector<string> vec1,vec2;
    while(ss1>>word1){
        vec1.push_back(word1);
    }
    while(ss2>>word2){
        vec2.push_back(word2);
    }
    return 0;

}