// Find all duplicates in an array.


#include<bits/stdc++.h>
using namespace std;

// class Solution{
//     public:

    vector<int> findDuplicates(vector<int>& nums){

        vector<int> ans;

        for(int i=0;i<nums.size();i++){

            int index=abs(nums[i])-1;

            if(nums[index]<0){
                ans.push_back(index+1);
            }

            nums[index]=nums[index]*-1;

        }

        return ans;
    }

// };

int main(){

    vector<int> vec={4, 3, 2, 7, 8, 2, 3, 1};

    vector<int> v=findDuplicates(vec);

    for(int i:v){
        cout<<i<<" ";
    }

    cout<<endl;
    
    return 0;
}