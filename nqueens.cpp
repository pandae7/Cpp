#include<iostream>
#include<bits/stdc++.h>
#define N 5

using namespace std;



void printSolution(int board[N][N]){
    for (int i = 0; i < N; i++) { 
        for (int j = 0; j < N; j++) 
            cout << board[i][j]; 
        cout << "\n"; 
    } 
}

bool issafe(int board[N][N],int row,int column){
    for(int i = 0; i < row ; i++){
        if(board[i][column])
            return false;
    }
    for(int i = row, j = column; i >=0 && j>=0; i--,j--){
        if(board[i][j]) return false;
    }
    for(int i = row, j = column; i < N && j< N; i++,j++){
        if(board[i][j]) return false;   
    }

    return true;
}

bool solverNQ(int board[N][N],int row){
    // int count = 0;
    if(row >= N) return true;
    // for(int i = row; i < N; row++){
        for(int column = 0; column < N; column++){
            if(issafe(board,row,column)){ 
                board[row][column] = 1;
                if(solverNQ(board,row+1)) return true;
                else board[row][column] = 0;
            }  
        }
    // }
    return false;

}


bool solveNQ(){
    int board[N][N] = {{0,0,0,0,0},
                       {0,0,0,0,0},
                       {0,0,0,0,0},
                       {0,0,0,0,0},
                       {0,0,0,0,0}};
    if(solverNQ(board,0) == false) {
        cout << "lol";
        return false;
    }

    printSolution(board);
    return true;

}


int main(){
    solveNQ();
    return 0;
}