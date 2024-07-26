// #include <iostream>
// using namespace std;
// int stringToInt(string s,int i){
//     if(s[i]=='\0'){
//         return;
//     }
//     int num = s[i] - '0';
//     num += stringToInt(s,i+1)*10;
//     cout << num;
//     return num;
// }
// int main() {
//     string str;
//     cin >> str;
//     stringToInt(str,0);

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int stringToInt(string s,int n){
    if(n == 0) return 0;
    int digit = s[n-1] - '0';
    // return (digit * pow(10, n-1)) + stringToInt(s, n-1);
    return stringToInt(s, n-1)*10 + digit;
    
}
int main() {
    string str;
    cin >> str;
    int n=str.size();
    // int st = stoi(str);
    // cout << st;
    int ans=stringToInt(str,n);
    return 0;
}