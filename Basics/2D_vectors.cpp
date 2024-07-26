// #include <iostream>
// #include<vector>
// using namespace std;
// int main() {
//     // declaration 
//     vector<vector<int>> nums;
    
//     // declare + initialization
//     vector<vector<int>> nums2={{1,2,3},{4,5,6},{7,8,9}};

//     // int n=nums.size();
//     // int m=nums[0].size();

//     int rows=nums2.size();
//     int cols=nums2[0].size();
    
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             cout<<nums2[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;

//     vector<vector<int>> nums3={{1,2,3,4,5,6},{7,8,9}};

//     rows=nums3.size();
//     for(int i=0;i<rows;i++){
//         int cols=nums3[i].size();
//         for(int j=0;j<cols;j++){
//             cout<<nums3[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;
// pass by reference
void print_2DArray(vector<vector<char>>& array){
    int n=array.size();
    int m=array[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main() {
    int n,m;
    cin >> n>>m;
    vector<vector<char>> vec(n,vector<char>(m,'a'));
    print_2DArray(vec);

    return 0;
}