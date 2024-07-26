#include <bits/stdc++.h>
using namespace std;
void solve_rat_in_maze(vector<string>& grid,int i,int j,vector<vector<int> >&path){
    int n = grid.size();
    int m = grid[0].size();

    // last cell p phunch gya -- base case    
    if(i==n-1||j==m-1){
        path[i][j]=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<path[i][j]<<" ";
            }
            cout<<endl;
        }
            cout<<endl;
            return ;
    }
    // recursion    

    if(grid[i][j]=='.' && i<n && j<m){
        path[i][j]=1;

        // right check kriye
        solve_rat_in_maze(grid,i,j+1,path);

        // down check kriye
        solve_rat_in_maze(grid,i+1,j,path);
    }

}

int main() {
    vector<string> grid = {"....","..^^","....",".^.."};
    // int count = 0;
    int n=grid.size();
    int m=grid[0].size();
    vector<vector<int>> path(n,vector<int>(m,0));
    solve_rat_in_maze(grid,0,0,path);
    // solve_rat_in_maze(grid,n,m);


    return 0;
}