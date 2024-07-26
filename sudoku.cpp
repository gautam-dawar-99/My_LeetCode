#include <bits/stdc++.h>
using namespace std;
bool isValid(vector<vector<char>>& board,int i,int j,char c){
    for(int k=0;k<9;k++){
        if(board[i][k]==c || board[k][j]==c) return false;
        if(board[3*(i/3)+k/3][3*(j/3)+(k%3)]==c) return false;
    }
    return true;
}
// void printBoard(const vector<vector<char>>& board) {
// }
void sudoku(vector<vector<char>>& board,int i,int j){
    if(i==8 && j==8){
        for (const auto& row : board) {
            for (const auto& cell : row) {
                cout << cell << " ";
            }
            cout << endl;
        }
    }
    if(i==9) return;
    if(j==9) {
        sudoku(board,i+1,0);
        return;
    }
    if(board[i][j]!='.') {
        sudoku(board,i,j+1);
        return;
    }
    for(char c='1';c<='9';c++){
        if(isValid(board,i,j,c)){
            board[i][j]=c;
            sudoku(board,i,j+1) ;
            board[i][j] = '.';
        }
    }
}
int main() {
    vector<vector<char>>board={
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
    };
    sudoku(board,0,0);
    


    return 0;
}