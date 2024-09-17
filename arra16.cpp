// Container with most water.


#include<bits/stdc++.h>
using namespace std;

// class Solution{
//     public:

    int maxArea(vector<int>& height){

        int left=0;
        int right=height.size()-1;
        int maximumArea=0;

        while(left<=right){

            int area=min(height[left], height[right])*(right-left);
            maximumArea=max(area, maximumArea);

            if(height[left]<height[right]){
                left++;
            }

            else{
                right--;
            }

        }

        return maximumArea;

    }


// };

int main(){

    vector<int> vec={1, 8, 6, 2, 5, 4, 8, 3, 7};
    
    cout<<maxArea(vec)<<endl;

    return 0;
}