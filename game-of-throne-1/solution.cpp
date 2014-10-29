#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
   
    string s;
    cin>>s;
    int helper[26] = {0};
    for(unsigned i = 0; i<s.size(); ++i){
        if(helper[s[i]-'0'-49] == 0)
            helper[s[i]-'0'-49]++;
        else
            helper[s[i]-'0'-49]--;
    }
    int one_count = 0;
    for(unsigned i=0; i<26; ++i){
        if(helper[i]==1)
            one_count++;
    }
    int flag = 0;
    if(one_count<=1)
        flag = 1;
    else
        flag = 0;
    
    // Assign Flag a value of 0 or 1 depending on whether or not you find what you are looking for, in the given string 
    if(flag==0)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}