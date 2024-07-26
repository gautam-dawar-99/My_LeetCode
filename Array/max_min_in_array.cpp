// #include <iostream>
// using namespace std;
// int main() {
//     int arr[5]={3,-1,-10,10,8};
//     int min=arr[0];
//     int max=arr[0];
//     for(int i=0;i<5;i++) {
//         if(arr[i]<min){
//             min=arr[i];
//         }
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     cout<<"Max : "<<max<<endl;
//     cout<<"Min : "<<min<<endl;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    long long arr[n];

	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    
	    long long max=INT_MIN;
	    for(int i=0;i<n;i++){
            if(arr[i]>max){
                max=arr[i];
            }
	    }
	    cout<<max;
	}
    return 0;
}
