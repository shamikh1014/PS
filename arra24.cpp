// Merge sorted array.


#include<bits/stdc++.h>
using namespace std;

// class Solution{
//     public:

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){

        int last=m+n-1;

        while(m>0 && n>0){

            if(nums1[m-1]>nums2[n-1]){
                nums1[last]=nums2[m-1];
                m--;
            }

            else{
                nums1[last]=nums2[n-1];
                n--;
            }
            last--;
        }

        // fill the nums1 with remaining elements of num2

        while(n>0){
            nums1[last]=nums2[n-1];
            n--;
            last--;
        }
    }

// };

int main(){

    vector<int> vec1={1, 2, 3, 0, 0, 0};
    vector<int> vec2={2, 5, 6};

    merge(vec1, 6, vec2, 3);
    
    return 0;
}