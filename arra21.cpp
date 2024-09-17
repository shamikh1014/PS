// Spiral matrix.


#include<bits/stdc++.h>
using namespace std;

// class Solution{
//     public:

    vector<int> spiralOrder(vector<vector<int>>& matrix){

        int n=matrix.size();
        int m=matrix[0].size();

        vector<int> ans;
        int rowBegin=0, rowEnd=m-1, colBegin=0, colEnd=n-1;

        while(rowBegin<rowEnd && colBegin<colEnd){

            // right
            for(int j=colBegin;j<=colEnd;j++){
                ans.push_back(matrix[rowBegin][j]);
            }
            rowBegin++;

            // down
            for(int j=rowBegin;j<=rowEnd;j++){
                ans.push_back(matrix[j][colEnd]);
            }
            colEnd--;

            //left
            if(rowBegin<=rowEnd){
                for(int j=colEnd;j>=colBegin;j--){
                    ans.push_back(matrix[rowEnd][j]);
                }
            }
            rowEnd--;

            if(colBegin<=colEnd){
                for(int j=rowEnd;j>=rowBegin;j--){
                    ans.push_back(matrix[j][colBegin]);
                }
            }
            colBegin++;

        }
        
        return ans;
    }


// };

int main(){
    
    return 0;
}