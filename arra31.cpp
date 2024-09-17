// Largest rectangle in histogram.


#include<bits/stdc++.h>
using namespace std;

// class Solution{
//     public:

    // TC: O(N)
    // SC: O(N)

    int largestRectangleArea(vector<int>& heights){

        int n=heights.size();
        stack<int> st;

        int leftSmall[n], rightSmall[n];
        // leftSmall - O(N)
        for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()]>=heights[i]){
                st.pop();
            }

            if(st.empty()){
                leftSmall[i]=0;
            }

            else{
                leftSmall[i]=st.top()+1;
            }

            st.push(i);
        }

        // clear the stack - O(N)

        while(!st.empty()){
            st.top();
        }

        // rightSmall - O(N)
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && heights[st.top()]>=heights[i]){
                st.top();
            }

            if(st.empty()){
                rightSmall[i]=n-1;
            }

            else{
                rightSmall[i]=st.top()-1;
            }

            st.push(i);
        }

        // O(N)
        int maxArea=0;
        for(int i=0;i<n;i++){
            maxArea=max(maxArea, heights[i]*rightSmall[i]-leftSmall[i]+1);
        }

        return maxArea;
    }

// };

int main(){

    vector<int> vec={2, 1, 5, 6, 2, 3};

    cout<<largestRectangleArea(vec)<<endl;
    
    return 0;
}