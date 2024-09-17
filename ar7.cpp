// Find pivot index.


#include<bits/stdc++.h>
using namespace std;

// class Solution{
//     public:

    int pivotIndex(vector<int>& nums){

        if(nums.size()==1){
            return 0;
        }

        int pivot=0;
        int left_sum=0;
        int right_sum=0;

        for(int j=1;j<nums.size();j++){
            right_sum+=nums[j];
        }

        while(pivot!=nums.size()){
            if(left_sum==right_sum){
                return pivot;
            }

            else{
                left_sum+=nums[pivot];
                pivot++;

                if(pivot!=nums.size()){
                    right_sum-=nums[pivot];
                }
            }
        }

        return -1;
    }



// };

int main(){

    vector<int> vec={1, 7, 3, 6, 5, 6};

    cout<<pivotIndex(vec)<<endl;
    
    return 0;
}