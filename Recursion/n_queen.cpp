#include <bits/stdc++.h>
using namespace std;
bool safeHai(vector<vector<char>> &grid,int row,int col,int n){
    // horizontally check krega ye ki queen place kr skte hai ya ni 
    for(int j=col;j>=0;j--){
        if(grid[row][j]=='Q') return false;
    }
    for(int i=row,j=col;i>=0 && j>=0;i--,j--){
        if(grid[i][j]=='Q') return false;
    }
    for(int i=row,j=col;i<n&&j>=0;i++,j--){
        if(grid[i][j]=='Q') return false;
    }
    return true;
}
void solve(vector<vector<char>> &grid,int col,int n){
    // base case
    if(col==n){
        // print the solution
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<grid[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return;
    }
    // ek position pr hum place krenge baki recursion dekh lega
    for(int row=0;row<n;row++){
        if(grid[row][col]=='.'){
            if(safeHai(grid,row,col,n)){
            grid[row][col]='Q';
            // recursion
            solve(grid,col+1,n);
            // backtracking
            grid[row][col] = '.';
        }
        }
    }

}
int main() {
    int n;
    cin>>n;
    vector<vector<char>> grid(n,vector<char>(n,'.'));
    solve(grid,0,n);

    return 0;
}