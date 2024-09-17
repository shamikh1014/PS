// Print al the duplicate characters in a string.


#include<bits/stdc++.h>
using namespace std;

void printDuplicates(string str){

    int len=str.length();

    // Sorting the string
    sort(str.begin(), str.end());

    // Loop through the sorted string to find duplicates
    for(int i=0;i<len;i++){
        int count=1;

        // Counting the occurences of each character
        while(i<len-1 && str[i]==str[i+1]){
            count++;
            i++;
        }

        // Printing the duplicate character and its count
        if(count>1){
            cout<<str[i]<<", count="<<count<<endl;
        }
    }
}

void printDups(string str){

    unordered_map<char, int> count;

    for(int i=0;i<str.length();i++){
        // increase the count of character str[i] by 1
        count[str[i]]++;
    }

    // iterating through the unordered map
    for(auto it:count){
        // if the count of characters is greater than 1 the duplicate found
        if(it.second>1){
            cout<<it.first<<", count="<<it.second<<"\n";
        }
    }
}

int main(){

    string str="test string";

    // printDuplicates(str);

    printDups(str);
    
    return 0;
}