#include <cmath>
#include <vector>
#include <iostream>
using namespace std;
int largestVehicle ( vector<int>&a, int entry, int exit, int size){
   
    int vehicle = a[entry];
    for(int i= entry+1; i<=exit && i<size; ++i){
        if(a[i]>=vehicle)
            continue;
        else 
            vehicle = a[i];
    }
    return vehicle;
    
}

int main() {
    
    int N,T;
    cin >> N>>T;
    vector<int> width(N);
    int i = 0;
    //get the input
    while(i<N)
        cin>>width[i++];
    
    
    while (T--) {
        int entry, exit;
        cin >> entry>>exit;
        cout <<largestVehicle(width, entry, exit, N)<<endl;
    }
    
    return 0;
}