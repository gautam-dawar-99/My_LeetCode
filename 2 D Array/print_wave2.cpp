// #include <iostream>
// using namespace std;
// int main() {
//     int n,m;
//     cin>>n>>m;
//     int arr[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>arr[i][j];
//         }
//     }

//     for(int j=0;j<m;j++){
//         if(j%2==0){
//             for(int i=0;i<n;i++){
//                 cout<<arr[i][j]<<", ";
//             }
//         }
//         else{
//             for(int i=n-1;i>=0;i--){
//                 cout<<arr[i][j]<<", ";
//             }
//         }
//         // cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
// 	int m,n;
// 	cin>>m>>n;
// 	int arr[m][n];
// 	for(int i=0;i<m;i++){
// 		for(int j=0;j<n;j++){
// 			cin>>arr[i][j];
// 		}
// 	}
// 	for(int i=0;i<m;i++){
// 		if(i%2!=0){
// 			for(int k=n-1;k>=0;k--){
// 			cout<<arr[k][i]<<", ";
// 				}
// 		}
// 		else{
// 		for(int j=0;j<n;j++){
// 			cout<<arr[j][i]<<", ";
// 			}
// 		}
// 	}
// 	cout<<"END";
// 	return 0;
// }

// find row of matrix having maximum sum
// #include<iostream>
// using namespace std;

// int main() {
	// int m,n;
	// cin>>m>>n;
    // int sum=0,index=-1,max=0;
	// int arr[m][n];
	// for(int i=0;i<m;i++){
	// 	for(int j=0;j<n;j++){
	// 		cin>>arr[i][j];
	// 	}
	// }
// 	for(int i=0;i<m;i++){
//         sum=0;
//         for(int j=0;j<n;j++){
//             sum+=arr[i][j];
//         }
//         // cout<<sum<<" ";
//         if(sum>max){
//             max=sum;
//             index=i;
//         }
// 	}
//     cout<<index;
// 	return 0;
// }


// find the transpose of matrix

// #include <iostream>
// using namespace std;
// int main() {
//     	int m,n;
//         cin>>m>>n;
//         int arr[m][n];
//         int transpose[n][m];

// 	for(int i=0;i<m;i++){
// 		for(int j=0;j<n;j++){
// 			cin>>arr[i][j];
// 		}
// 	}
//     for(int i=0;i<n;i++){
// 		for(int j=0;j<m;j++){
//             transpose[i][j]=arr[j][i];
//         }
//     }
//     for(int i=0;i<m;i++){
// 		for(int j=0;j<n;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     cout<<endl;

//     for(int i=0;i<n;i++){
// 		for(int j=0;j<m;j++){
//             cout<<transpose[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     	int m,n;
//         cin>>m>>n;
//         int arr[m][n];
//         int transpose[n][m];

// 	for(int i=0;i<m;i++){
// 		for(int j=0;j<n;j++){
// 			cin>>arr[i][j];
// 		}
// 	}
//     for(int i=0;i<n;i++){
// 		for(int j=0;j<m;j++){
//             transpose[i][j]=arr[j][i];
//         }
//     }
//     for(int i=0;i<m;i++){
// 		for(int j=0;j<n;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     cout<<endl;

//     for(int i=0;i<n;i++){
// 		for(int j=0;j<m;j++){
//             cout<<transpose[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main() {
    	int n;
        cin>>n;
        int arr[n][n];

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
    for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}