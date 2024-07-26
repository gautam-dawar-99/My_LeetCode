// #include <iostream>
// using namespace std;
// int print(int i,int n){
//     if(i>n){
//         return 0;
//     }
//     cout<<i<<endl;
//     return print(i+1,n);
// }
// int main() {
//     int n;
//     cin>>n;
//     print(1,n);
//     return 0;
// }

// &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
// Print in increasing order
// #include <iostream>
// using namespace std;
// void print(int n){
//     if(n==0) return ;
//     print(n-1);
//     cout<<n<<endl;
// }
// int main() {
//     int n;
//     cin>>n;
//     print(n);
//     return 0;
// }

// Print in decreasing order
// #include <iostream>
// using namespace std;
// void print(int n){
//     if(n==0) return ;
//     cout<<n<<endl;
//     print(n-1);
// }
// int main() {
//     int n;
//     cin>>n;
//     print(n);
//     return 0;
// }

// Sum of array using recursion
// int sum(int arr[],int n){
//     if(n==0){
//         return 0;
//     }
//     return (arr[0]+sum(arr+1,n-1));
// }
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<sum(arr,n);
//     return 0;
// }

// int sum(int arr[],int n,int i){
//     if(n==i){
//         return 0;
//     }
//     return (arr[i]+sum(arr,n,i+1));
// }
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<sum(arr,n,0);
//     return 0;
// }

// ********************************************************************
// power of x raised to n
// #include <iostream>
// using namespace std;
// int expo(int x,int n){
//     if(n==0){
//         return 1;
//     }
//     return x*expo(x,n-1);
// }
// int main() {
//     int x, n;
//     cin>>x>>n;
//     cout<<expo(x,n);
//     return 0;
// }

// ***********************************************************************
#include <iostream>
using namespace std;
string arr[10]={"zero", "one", "two", "three", "four", "five", "six", "seven", "eight","nine"};
void numToWords(int num){
    if(num ==0 )    return ;
    int ld=num%10;
    numToWords(num/10);
    cout<<arr[ld]<<" ";
}
void words(int num){
      if(num==0){
        return ;
    }
    int n=num%10;
    words(num/10);
    if(n==1){
        cout<< "one ";
    }
    if(n==2){
        cout<<  "two ";
    }
    if(n==3){
        cout<< "three ";
    }
    if(n==4){
        cout<< "four ";
    }
    if(n==5){
        cout<< "five ";
    }
    if(n==6){
        cout<< "six ";
    }
    if(n==7){
        cout<< "seven ";
    }
    if(n==8){
        cout<< "eight ";
    }
    if(n==9){
        cout<< "nine ";
    }
    if(n==0){
        cout<<"Zero ";
    }
  
}
int main() {
    int n;
    cin>>n;
    words(n);
    cout<<endl;
    numToWords(n);
    return 0;
}