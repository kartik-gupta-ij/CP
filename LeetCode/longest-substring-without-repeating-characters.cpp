#include <bits/stdc++.h>
#include <iostream>

#include <string>

using namespace std;




class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int p=0,c=0;
        
        if(s.length()){c=1;
        for(int i=0;i<s.length();i++){
             
                for(int j=p;j<i;j++){
                    if(s[i]==s[j]){
                    p=j+1;
                    }
                    
                    
                }
                if(c<i-p+1){c=i-p+1;}
           }
        }
    
        
        return c;
    }
    
};

int main(){
    Solution a;
    cout<<a.lengthOfLongestSubstring("abcabcbb");
}