// Game of life.


#include<bits/stdc++.h>
using namespace std;

// class Solution{
//     public:

    int countNeighbours(vector<vector<int>>& board, int r, int c, int rows, int cols){

        int cnt=0;

        for(int i=r-1;i<r+2;i++){

            for(int j=c-1;j<c+2;j++){

                if((i==r && j==c) || i<0 || j<0 || i>=rows || j>=cols){
                    continue;
                }

                if(board[i][j]==1 || board[i][j]==3){
                    cnt++;
                }
            }
        }

        return cnt;
    }


    void gameOfLife(vector<vector<int>>& board){

        int rows=board.size(), cols=board[0].size();

        for(int i=0;i<rows;i++){

            for(int j=0;j<cols;j++){

                int cnt=countNeighbours(board, i, j, rows, cols);

                if(board[i][j]>=1 && (cnt==2 || cnt==3)){
                    board[i][j]=3;
                }

                else if(cnt==3){
                    board[i][j]=2;
                }
            }
        }

        for(int i=0;i<rows;i++){

            for(int j=0;j<cols;j++){

                if(board[i][j]==1){
                    board[i][j]=0;
                }

                else if(board[i][j]>=2){
                    board[i][j]=1;
                }

            }
        }

    }

// };

int main(){
    
    return 0;
}