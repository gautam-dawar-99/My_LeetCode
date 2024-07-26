#include <iostream>
using namespace std;
void permutation(string& s, int i,int n){
    if(i==n)
        cout<<s<<endl;
    else{
        for(int j=i;j<n;j++){
            swap(s[i],s[j]);
            permutation(s,i+1,n);
            swap(s[j],s[i]);
        }
    }
}
int main() {
    string str = "ABC";
    permutation(str, 0, str.length());

    return 0;
}