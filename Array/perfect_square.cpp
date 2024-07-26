#include <iostream>
using namespace std;
// int main() {
//     int num=64;

//     int i=1;

//     // while(num%i==0){
//     while(1){
//         cout<<num<<endl;
//         cout<<i<<endl;
//         if(i*i==num){
//             cout<<i<<"  "<<" yes "<<endl;            
//             break;
//         }
//         i++;
//     }
//     for(int i=0; i<=num/2; i++){
//         if(num==i*i){
//             cout<<i<<" "<<" yes "<<endl;
//             break;
//         }
//     }

//     return 0;
// }

void Perfect_Square(int num){
    int left=1;
    int right=num/2;
    while(left<=right){
        int mid=(left+right)/2;
        if(mid*mid==num){
            cout<<mid<<endl;
            cout<<"yes"<<endl;
            return ;
            // break;
        }
        else if(mid*mid>num){
            right=mid-1;
        }
        else if(mid*mid<num){
            left=mid+1;
        }
    }
    cout<<"Not Found!"<<endl;
}
int main(){
    int num;
    cin>>num;

    Perfect_Square(num);

    return 0;
}