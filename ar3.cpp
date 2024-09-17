// Merge sorted array.


#include<bits/stdc++.h>
using namespace std;

// class Solution{
//     public:

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){

        vector<int> nums;
        int i=0;
        int j=0;

        while(i<m and j<n){

            if(nums1[i]<nums2[j]){
                nums.push_back(nums1[i]);
                i++;
            }

            else if(nums1[i]>nums2[j]){
                nums.push_back(nums2[j]);
                j++;
            }

            else{
                nums.push_back(nums1[i]);
                nums.push_back(nums2[j]);
                i++;
                j++;
            }
        }

        if(i<m){
            for(int k=i;k<m;k++){
                nums.push_back(nums1[k]);
            }
        }

        else{
            for(int k=j;k<n;k++){
                nums.push_back(nums2[k]);
            }
        }

        nums1=nums;

    }

// };

int main(){

    vector<int> arr1={1};
    vector<int> arr2={};

    merge(arr1, 1, arr2, 0);
    
    return 0;
}