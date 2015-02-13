#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
#include<bitset>

using namespace std;

int topicCount(const string  &word1, const string &word2){
    
    int count = 0;
    for(int i=0; i<word1.size(); ++i){
        if(word1[i]=='1' || word2[i]=='1')
            count++;
    }
    
    return count;    
}



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N, M;
    string word;
    cin>>N>>M;
    
    vector<int>people;
    
    vector<string>topics;
    
    while(N--){
        
        cin>>word;
        topics.push_back(word);
        
    }
    
    int begin =0;
    while(begin<topics.size()-1){
        for(int i=begin+1; i<topics.size(); i++){
            people.push_back(topicCount(topics[begin], topics[i]));
        }
        begin++;
    }
    int max = people[0];
    for(int i=1; i<people.size(); ++i){
        if(people[i]>max)
            max = people[i];
    }
    
    int numMax=0;
    for(int i=0; i<people.size(); ++i){
        if(people[i]==max)
            numMax++;
    }
    
    cout<<max<<endl;
    cout<<numMax<<endl;
    
   
    
    
    
    return 0;
}