// #include <bits/stdc++.h>
// using namespace std;
// int main() {
    
//     // char a[1000];
//     // cin.getline(a,1000,'\n');
//     // cout<<a<<endl;

//     char name[100];
//     int i=0;
//     char ch;
//     ch=cin.get();
//     while(ch!='\n'){
//         name[i]=ch;
//         i++;
//         ch=cin.get();
//     }
//     name[i]='\0';
//     cout<<name<<endl;

    // // to find size of string

    //  i=0;
    // while(name[i]!='\0'){
    //     i++;
    // }
    // cout<<i<<endl;  
    // cout<<strlen(name)<<endl;    
    // cout<<i-1<<endl;    // not to count the space bw name & surname

    // check palindrome or not
    // int boolean =0;
    // for(int i=0; i<strlen(name)/2; i++){
    //     if(name[i]==name[strlen(name)-i-1]){
    //         boolean=1;
    //     }
    // }
    // if(boolean==1){
    //     cout<<"Palindrome"<<endl;
    // }
    // else{
    //     cout<<"Not Palindrome"<<endl;
    // }

//     char str[1000];
//     cin>>str;
//     int n=strlen(str);
//     int left=0,right=n-1;
//     while(left<=right&&str[left]==str[right]){
//         left++;
//         right--;
//     }
//     if(left>=right){
//         cout<<"Palindrome"<<endl;
//     }
//     else{
//         cout<<"Not Palindrome"<<endl;
//     }

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// void rotate_string(string& str, int N) {
//     int len = str.length();

//     N = N % len;  // In case N is larger than the length of the string
//     if (N == 0) return;  // No need to rotate if N is 0

//     while (N--) {
//         char lastChar = str[len - 1];  // Save the last character
//         for (int i = len - 1; i > 0; i--) {
//             str[i] = str[i - 1];  // Shift characters to the right
//         }
//         str[0] = lastChar;  // Place the last character at the start
//     }
// }

// int main() {
//     string str;
//     getline(cin, str);
//     int n;
//     cin >> n;

//     rotate_string(str, n);

//     cout << str << endl;

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main() {
    // transorm()-> to transform from lower case to upper case
    // string s3="gautam";

    // transform(s3.begin(), s3.end(),s3.begin(),::toascii);
    // cout<<s3<<endl;
    // transform(s3.begin(), s3.end(),s3.begin(),::tolower);
    // cout<<s3<<endl;
    // transform(s3.begin(), s3.end(),s3.begin(),::toupper);
    // cout<<s3<<endl;

    // string arr[5]={"Gautam","Kartik","abc","leetcoder","gth"};
    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    // sort(arr,arr+5);
    
    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<" ";
    // }
    // return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main() {
    string str="abcdef";
    cin>>str;
    char arr[50]="abcdef";
    cin>>arr;
    cout<<str.length()<<"   "<<strlen(arr)<<endl;

    cout<<1;
    cout<<"1";
    cout<<-1;
    cout<<"-1";

    return 0;
}
