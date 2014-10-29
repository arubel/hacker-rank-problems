#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T;
    cin>>T;
    int count = 0;
    string st;
    int counter[26] = {0};
    while(T--){
        cin>>st;
        count++;
        for(int i=0; i<st.size(); ++i){
                if((counter[st[i]-'0'-49]) == count-1)
                     counter [(st[i]-'0')-49] =count ;
        }
    }
    int result = 0;
    for(int i=0; i<26; ++i){
        if(counter[i] == count )
            result += 1;
    }
    cout<<result<<endl;
    
    return 0;
}