#include <bits/stdc++.h>
#include <iostream>

#include <string>

using namespace std;
class Solution {
public:
    
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> a;
        for(int i=0;i<words.size();i++){
            
            
            if(pattern.length()==words[i].length()){
            map<char, char> g;map<char, int> c;

            int flag=1;
            for(int j=0;j<pattern.length();j++){
                if (g.find(pattern[j]) == g.end() && c.find(words[i][j])==c.end()){
                    g[pattern[j]]=words[i][j];
                    c[words[i][j]]=1;  
                }else if(g.find(pattern[j]) == g.end() && c[words[i][j]]==1){
                    flag=0;
                }
                if(g[pattern[j]]!=words[i][j]){
                    flag=0;
                    
                }
            }
            if(flag){
                a.push_back(words[i]);
            }
            }
        }
        return a;
    }
};