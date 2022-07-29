#include <bits/stdc++.h>
#include <iostream>

#include <string>

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int k=0;
        vector<int> ans;
        vector<int>::const_iterator i;
        vector<int>::const_iterator j;
        i = nums1.begin();
        j=nums2.begin();

        while(i!=nums1.end() and j!=nums2.end()){
                if(*i>*j){
                    ans.push_back(*j);
                    
                    j++;
                    k++;
                }
                else{
                    ans.push_back(*i);
                    i++;
                    k++;
                }
        }
        while(i!=nums1.end()){
          ans.push_back(*i);

                    i++;
                    k++;
        }
        while(j!=nums2.end()){
            ans.push_back(*j);
            j++;
             k++;
        }
        int n=k; 
        if(n%2){
        return ans[n/2];
        } else{
        return (double)(ans[n/2]+ans[n/2-1])/2;
        }
    }
};