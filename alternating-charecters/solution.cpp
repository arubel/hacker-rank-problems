#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;
int numbDeletion(string word){
    int count = 0;
    for(size_t i=0;i<word.size()-1; ++ i){
        if(word[i]==word[i+1])
            count++;
    }
    return count;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T;
    cin>>T;
    string word="";
    while(T--){
        cin>>word;
        cout<<numbDeletion(word)<<endl;;
    }
    return 0;
}
