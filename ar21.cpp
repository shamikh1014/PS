// Rotate image.


#include<bits/stdc++.h>
using namespace std;

// class Solution{
//     public:

    void rotate(vector<vector<int>>& matrix){

        int n=matrix.size();
        int store[n][n];

        for(int i=0;i<n;i++){

            for(int j=0;j<n;j++){

                store[j][i]=matrix[n-1-i][j];

            }
        }

        for(int i=0;i<n;i++){

            for(int j=0;j<n;j++){

                matrix[i][j]=store[i][j];
            }
        }

        return;

    }


// };

int main(){
    
    return 0;
}