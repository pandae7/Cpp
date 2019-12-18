#include<iostream>
#include<bits/stdc++.h>
#define N 4

using namespace std;



void printSolution(int board[N][N]){

}

bool issafe(int board[N][N],int row,int column){
    for(int i = 0; i < row ; i++){
        if(board[i][column])
            return false;
    }
    for(int i = row; int  )
}

bool solverNQ(int board[N][N],int row){
    // int count = 0;
    if(row >= N) return true;
    for(int row = row; row < N; row++){
        for(auto column = 0; column < N; column++){
            if(issafe(board,row,column)){ 
                board[row][column] = 1;
                if(solverNQ(board,row+1)) return true;
                else board[row][column] = 0;
            }  
        }
    }
    return false;

}


bool solveNQ(){
    int board[N][N] = {{0,0,0,0},
                       {0,0,0,0},
                       {0,0,0,0},
                       {0,0,0,0}};
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