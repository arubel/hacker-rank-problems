#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int minUnfairness(int numbers[], int size, int k){
    sort(numbers, numbers+size);
    
    int begin = 0, end = begin+k-1;
    int minDiff = numbers[end] - numbers[begin];
    
    
    while(begin<size-k){
        begin++;
        end = begin+k-1;
        if(numbers[end]-numbers[begin]<minDiff){
            minDiff = numbers[end]-numbers[begin];
        }
    }
    
    
    return minDiff;
}

// It is NOT mandatory to use the provided template. You can handle the IO section differently.

int main() {
    /* The code required to enter n,k, candies is provided*/

    int N, K, unfairness;
    cin >> N >> K;
    int candies[N];
    for (int i=0; i<N; i++)
        cin >> candies[i];
    unfairness = minUnfairness(candies, N, K);
    /** Write the solution code here. Compute the result, store in  the variable unfairness --
    and output it**/
    cout << unfairness << "\n";
    return 0;
}
