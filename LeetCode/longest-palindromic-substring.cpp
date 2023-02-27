#include <bits/stdc++.h>
#include <iostream>


using namespace std;



class Solution {
public:
    string longestPalindrome(string s) {
        int nowMax=0;
        int postion[2];
        postion[0]=0;
        postion[1]=1;
        for(int i=0 ;i<s.length();i++){
            for(int k=i-1, j=i+1;k>=0 && j<s.length();k--,j++){

            if(s[k]==s[j]){
                if(j-k>postion[1]-1){
                    postion[0]=k;
                    postion[1]=j-k+1;
                }
                }
                else {
                    break;
                }
                }
                
            for(int k=i-1, j=i;k>=0 && j<s.length();k--,j++){
            if(s[k]==s[j]){
                if(j-k>postion[1]-1){
                    postion[0]=k;
                    postion[1]=j-k+1;
                }
            }else {
                    break;
                }}
                            
        }
        
    
        return s.substr(postion[0], postion[1]);
        }
                

};