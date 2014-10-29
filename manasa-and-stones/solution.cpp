#include <iostream>
#include<set>
using namespace std;


int main() {
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T, n, a ,b;
    cin>>T;
    while(T--){
        
        cin>>n>>a>>b;
        
        set <int> numbers;
        
        for(int i =0 ; i<n; ++i){
            numbers.insert(i*a + (n-i-1)*b);
                     
        }
        
        set<int>:: iterator it;
        for(it=numbers.begin(); it != numbers.end(); ++it)
            cout<<*it<<" ";
        cout<<"\n";
    }
  
    return 0;
}
