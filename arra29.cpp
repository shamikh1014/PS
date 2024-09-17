// Max value of equation.


#include<bits/stdc++.h>
using namespace std;

// class Solution{
//     public:

    int findMaxValueOfEquation(vector<vector<int>>& points, int k){

        // int ans=INT_MIN;
        // for(int i=0;i<points.size();i++){

        //     for(int j=i+1;j<points.size();j++){

        //         if(points[j][0]-points[i][0]<=k){
        //             ans=max(ans, points[i][1]+points[j][1]+(points[j][0]-points[i][0]));
        //         }
        //     }
        // }



        priority_queue<pair<int, int>> p;
        // 1st value is xi-yi and 2nd value is xi

        int ans=INT_MIN;

        for(int i=0;i<points.size();i++){

            // if xj-xi>k
            while(!p.empty() && (points[i][0]-p.top().second)>k){
                p.pop();
            }

            if(!p.empty()){
                ans=max(ans, points[i][0]+points[i][1]+p.top().first);
            }

            p.push({points[i][1]-points[i][0], points[i][0]});
        }


        return ans;
    }


// };

int main(){
    
    return 0;
}