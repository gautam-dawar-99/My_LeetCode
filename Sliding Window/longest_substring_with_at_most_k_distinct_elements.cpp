#include <bits/stdc++.h>
using namespace std;
// t.c.  O(n^2)*log(256)
//   n^2 means two loops and log wali mpp ke liye
// s.c. O(256)
// brute force for this implementation
int longest_substring_having_k_distinct(string str,int k){
    int n = str.length();
    unordered_map<char,int> mpp;
    int maxlen = 0;

    for(int i=0;i<n;i++){
        mpp.clear();
        for(int j=i;j<n;j++){
            mpp[str[j]]++;
            if(mpp.size()<=k){
                maxlen=max(maxlen,j-i+1);
            }
            else{
                break;  // break the inner loop if size of distinct characters exceeds k
            }

        }
    }

    return maxlen;  // Return the length of longest substring with k distinct characters

}
int longest_substring(string str,int k){
    int n = str.length();
    unordered_map<char,int> mpp;
    int maxlen = 0, l=0,r=0;

    while(r<n){
        mpp[str[r]]++;

        if(mpp.size()>k){
            mpp[str[l]]--;

            if(mpp[str[l]]==0){
                mpp.erase(str[l]);
                l++;
            }
        }
        if(mpp.size()<=k){
            maxlen=max(maxlen,r-l+1);
        }
        r++;
    }
    return maxlen;
}
int main() {
    string str;
    cin>> str;
    int k;
    cin>>k;
    // Function call to find the length of longest substring with k distinct characters
    cout<<longest_substring_having_k_distinct(str, k);

    cout<<longest_substring(str,k);

    return 0;
}
