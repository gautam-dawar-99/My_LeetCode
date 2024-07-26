#include <iostream>
using namespace std;
int main() {
    string str;
    cin >> str;
    int len = str.length();
    cout<<str<<endl;

    for(int i=0;i<len/2;i++) {
        swap(str[i],str[len-1-i]);
    }
    cout<<str<<endl;

    int left=0,right=str.length()-1;
    while(left<right) {
        swap(str[left],str[right]);
        left++,right--;
    }
    cout<<str<<endl;

    return 0;
}