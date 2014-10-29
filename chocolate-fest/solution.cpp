#include <iostream>
using namespace std;

int chocolateProblem(int n, int c, int m){
    int purchased = n/c;
    int wrapper = purchased;
    if ( wrapper>=m){
        while(wrapper>=m){
            purchased = purchased + wrapper/m;
            wrapper = wrapper/m+ (wrapper)%m;
        }
    }
    return purchased;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,n,c,m;
    cin>>t;
    while(t--){
        cin>>n>>c>>m;
        int answer=chocolateProblem(n,c,m);
        // Computer answer
        
        cout<<answer<<endl;
    }
    return 0;
}