#include <bits/stdc++.h>
using namespace std;



void printPer(string nowS, string current){

    if(nowS.size()==0){
        cout<<current<<endl;
        return;
    }

    for(int i=0; i<nowS.size(); i++){

        string next ="";
        for(int j = 0; j<i; j++) next += nowS[j];
        for(int j = i+1; j<nowS.size(); j++) next += nowS[j];

        printPer(next, current+nowS[i]);
    }
}


int main(){
    string s="abc";
    printPer(s,"");
}