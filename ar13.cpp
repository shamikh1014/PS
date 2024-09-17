// Merge intervals.


#include<bits/stdc++.h>
using namespace std;

// class Solution{
//     public:

    vector<vector<int>> merge(vector<vector<int>>& intervals){

        int arr[10001]={[0 ... 10000]=-1};

        for(int i=0;i<intervals.size();i++){
            arr[intervals[i][0]]=max(arr[intervals[i][0]], intervals[i][1]);
        }

        vector<vector<int>> result;
        int start=-1;
        int end=-1;
        bool flag=false;

        for(int i=0;i<10001;i++){
            if(arr[i]!=-1){
                start=i;
                end=arr[i];

                for(int j=start;j<=end;j++){
                    if(arr[j]!=-1){
                        end=max(arr[j], end);
                    }
                }

                vector<int> temp;
                temp.push_back(start);
                temp.push_back(end);

                result.push_back(temp);

                i=end;
                start=-1;
                end=-1;
            }
        }

        if(start!=-1 and end!=-1){

            vector<int>temp;
            temp.push_back(start);
            temp.push_back(end);

            result.push_back(temp);
        }

        return result;

    }


// };

int main(){
    
    return 0;
}