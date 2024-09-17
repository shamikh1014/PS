// Move zeroes.


#include<bits/stdc++.h>
using namespace std;

// class Solution{
//     public:

    void moveZeroes(vector<int>& nums){

        if(nums.size()==0){
            return;
        }

        int i=0;
        int j=1;

        while(j<nums.size()){

            if(nums[i]==0 and nums[j]!=0){

                swap(nums[i], nums[j]);
                i++;
                j=i+1;
            }

            else if(nums[i]==0 and nums[j]==0){
                j++;
            }

            else{
                i++;
                j+i+1;
            }
        }

    }


// };

int main(){

    vector<int> vec={0, 1, 0, 3, 12};

    moveZeroes(vec);
    
    return 0;
}