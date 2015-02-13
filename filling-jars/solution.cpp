#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
     
    long long N , M, a, b, k;
    cin>>N>>M;
    long long totalCandies = 0;
    while(M--){
        cin>>a>>b>>k;
        totalCandies += (b-a+1)*k;
    }
    cout<<totalCandies/N<<endl;
    
    
    return 0;
}
