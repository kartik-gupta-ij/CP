#include <bits/stdc++.h>
#include <iostream>

#include <string>

using namespace std;



class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> a;
        map<char, int> c;
        for(int i=0;i<words2.size();i++){
            string word=words2[i];
            int flag=1;
            map<char, int> si;
            for(int j=0;j<word.length();j++){
                if (c.find(word[j])==c.end()){
                    c[word[j]]=1;
                    si[word[j]]=1; 
                }else {
                    if(si.find(word[j])==si.end()){
                        si[word[j]]=1;
                    }
                    else if(c[word[j]]<=si[word[j]])
                    {
                        c[word[j]]++;
                        si[word[j]]++;
                    
                    }
                    else{
                        si[word[j]]++;
                    }
                    

                }
            }
        }
        for(int k=0;k<words1.size();k++){
            int flag=1;
            map<char, int> copy;
            copy=c;
            string check=words1[k];
            for(int m=0;m<check.length();m++){
                if(!(copy.find(check[m])==copy.end())){
                    if(copy[check[m]]){
                        copy[check[m]]--;
                    }
                }
            }
            map<char, int>::iterator it;

            for (it=copy.begin(); it != copy.end(); it++)
                {
                    if(it->second!=0){
                        flag=0;
                    }
                }
                
            if(flag){
                    a.push_back(check);
                }
            }
        return a;
  
    }
};





int main(){
    
vector<string> words1={"amazon","apple","facebook","google","leetcode"};
vector<string> words2={"lo","eo"};
Solution a;
a.wordSubsets(words1,words2);
}