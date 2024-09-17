// Search in rotated sorted array.


#include<bits/stdc++.h>
using namespace std;

// class Solution{
//     public:

    int search(vector<int>& nums, int target){

        int n=nums.size();
        int s=0, l=n-1;

        while(s<=l){
            int mid=(s+l)/2;

            if(nums[mid]==target){
                return mid;
            }

            else if(nums[mid]>=nums[s]){
                if(nums[s]<=target && nums[mid]>=target){
                    l=mid-1;
                }

                else{
                    s=mid+1;
                }
            }

            else{
                if(nums[l]>=target && nums[mid]<target){
                    s=mid+1;
                }

                else{
                    l=mid-1;
                }
            }
        }

        return -1;

    }


// };

int main(){

    vector<int> vec={4, 5, 6, 7, 0, 1, 2};

    cout<<search(vec, 0)<<endl;
    
    return 0;
}