#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long maximize (long number){
	long max = 0;
	for(long i=1; i<number; ++i){
		if((i*(number-i))>max)
			max = (i*(number-i));

	}
	return max;

}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long T,k;
    cin>>T;
    while(T--){
        cin>>k;
        cout<<maximize(k)<<endl;
    }
    
    return 0;
}
