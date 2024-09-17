// Running sum of 1d array.


#include<bits/stdc++.h>
using namespace std;

// class Solution{
//     public:

    vector<int> runningSum(vector<int>& nums){

        vector<int> result;

        result.push_back(nums[0]);

        for(int i=1;i<nums.size();i++){

            result.push_back(result[i-1]+nums[i]);

        }

        return result;
    }



// };

int main(){

    vector<int> vec={1, 2, 3, 4};

    vector<int> v=runningSum(vec);

    for(int i:v){
        cout<<i<<" ";
    }

    cout<<endl;
    
    return 0;
}