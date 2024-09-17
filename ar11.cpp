// Pascal's triangle


#include<bits/stdc++.h>
using namespace std;

// class Solution{
//     public:

    vector<vector<int>> generate(int numRows){

        vector<vector<int>> result={{1}};

        for(int i=1;i<numRows;i++){
            vector<int> box={1};

            for(int j=0;j<result[i-1].size()-1;j++){
                box.push_back(result[i-1][j]+result[i-1][j+1]);
            }

            box.push_back(1);
            result.push_back(box);
        }

        return(result);

    }

// };

int main(){

    generate(5);
    
    return 0;
}