#include <iostream>
#include <string>
#include<map>
#include<cmath>
using namespace std;
int opCount(string word){
 
    int helper[26] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26};
    int result = 0;
    unsigned mid = word.size()/2, front = 0, back = word.size()-1;
    while(front <= mid && (back >= word.size()-mid)){
        
        if(word[front] != word[back]){
            
            result += abs(helper[word[front]-'0'-('a'-'0')]-helper[word[back]-'0'-('a'-'0')]);
            front++;
            back--;

        }
        
        else{
            front++;
            back--;
        }
    }
    return result;
    
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int T;
    string word;
    cin>>T;
    while(T--){
        cin>>word;
        cout<<opCount(word)<<endl;
    }
    return 0;
}
