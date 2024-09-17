// Set matrix zeroes.


#include<bits/stdc++.h>
using namespace std;

// class Solution{
//     public:

    void SetZeores(vector<vector<int>>& matrix){

        bool x=false, y=false; // 1st row and 1st column

        int m=matrix.size();
        int n=matrix[0].size();

        for(int i=0;i<m;i++){
            
            for(int j=0;j<n;j++){

                if(matrix[i][j]==0){

                    if(i==0){
                        x=true;
                    }

                    if(j==0){
                        y=true;
                    }

                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }

        for(int i=1;i<m;i++){

            for(int j=1;j<n;j++){

                if(matrix[i][0]==0 || matrix[0][j]==0){

                    matrix[i][j]=0;
                }
            }
        }

        if(y){

            for(int i=0;i<n;i++){
                matrix[i][0]=0;
            }
        }

        if(x){

            for(int j=0;j<n;j++){
                matrix[0][j]=0;
            }
        }

    }


// };

int main(){
    
    return 0;
}