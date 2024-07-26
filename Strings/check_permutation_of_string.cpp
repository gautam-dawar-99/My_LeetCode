// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     string str1,str2;
//     cin>>str1>>str2;
//     int permutation=0;
//     sort(str1.begin(), str1.end());
//     sort(str2.begin(), str2.end());
//     for(int i=0;i<str1.size();i++){
//         if(str1[i]!=str2[i]){
//             permutation++;
//             break;
//         }
//     }
//     if(permutation==0){
//         cout<<"Yes"<<endl;
//     }
//     else{
//         cout<<"No"<<endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
int main() {
    string str1,str2;
    cin>>str1>>str2;

    int n=str1.size();
    int freq1[26]={0},freq2[26]={0};

    for(int i=0;i<n;i++){
        int ind1=str1[i]-'a';
        freq1[ind1]++;
        int ind2=str2[i]-'a';
        freq2[ind2]++;
    }
    bool is_permuation=true;
    for(int i=0;i<26;i++){
        if(freq1[i]!=freq2[i]){
            is_permuation=false;
            break;
        }
    }
    if(is_permuation){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

    return 0;
}