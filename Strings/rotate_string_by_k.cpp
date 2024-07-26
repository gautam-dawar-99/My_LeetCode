// #include <bits/stdc++.h>
// using namespace std;
// void rotate_string(string str,int N) {
//     for(int i=0;i<N;i++){

//         int n=str.length();

//         int tmp=str[n-1];
//         for(int i=n-2;i>=0;i--){
//             str[i+1]=str[i];
//         }
//         str[0]=tmp;
//     }
//     cout << str << endl;
// }

// int main() {
//     char str[1000];
//     cin.getline(str,1000,'\n');
//     int n;
//     cin>>n;

//     rotate_string(str,n);
//     return 0;
// }
// ________________________________________________________________________________________________________________

#include <bits/stdc++.h>
using namespace std;
void reverse_it(char str[],int left,int right){
    while(left<right){
        swap(str[left],str[right]);
        left++;
        right--;
    }
}
int main() {
    char str[1000];
    cin>>str;
    int n;
    cin>>n;

    int len=strlen(str);

    reverse_it(str,0,len-1);
    reverse_it(str,0,n-1);
    reverse_it(str,n,len-1);

    cout<<str<<endl;


    return 0;
}
