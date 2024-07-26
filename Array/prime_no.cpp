// #include <iostream>
// using namespace std;
// void pattern(){
//     int i,j;
//     int val=0;
//     for(i=2;i<=10000;i++){
//         val=0;
//         for(j=2;j<=i/2;j++){
//             if(i%j==0){
//                 val=1;
//                 break;
//             }
//         }
//          if(val==0){
//                 cout<<i<<"\t";
//             }
//     }
// }
// int main() {
//     pattern();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// bool check_num(int num){
//     int cnt=0;
//     for(int i=1;i<=num;i++){
//         if(num%i==0){
//             cnt++;
//         }
//     }
//     if(cnt>2){
//         return false;
//     }
//     return true;
// }
// int main() {
//     int n;
//     cin>>n;

//     for(int i=2;i<=n;i++){
//         if(check_num(i)){
//             cout<<i<<"\t";
//         }
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
bool check_num(int num){
    int cnt=2;
    for(int i=2;i<=(num+1)/2;i++){

        if(cnt>2){
            return false;
        }

        if(num%i==0){
            cnt++;
        }
    }
    // if(cnt>2){
    //     return false;
    // }
    // return true;
}
int main() {
    int n;
    cin>>n;

    for(int i=2;i<=n;i++){
        if(check_num(i)){
            cout<<i<<"\t";
        }
    }
    return 0;
}