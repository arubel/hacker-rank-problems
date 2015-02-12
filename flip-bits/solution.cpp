#include <cstdio>
#include <iostream>
#include<bitset>

using namespace std;

void flipBits(unsigned number){
    bitset<32> helper;
    size_t i = 0;
    
    while(number >=1){
        helper[i++] = number%2;
        number /= 2;
    }
    
    helper.flip();
    cout<<helper.to_ullong()<<endl;
}

int main() {
    
    int T;
    unsigned input;
    cin>>T;
    
    while(T-->0){
        cin>>input;
        flipBits(input);
    }
    
    return 0;
}