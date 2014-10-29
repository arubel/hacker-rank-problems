#include <iostream>
using namespace std;

int height(int n) {
    if(n<1)
        return 1;
    int height =2;
    for(int i=1; i<n; ++i){
        if(i%2==0)
            height = height*2;
        else
            height = height+1;
    }
    return height;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << height(n) << endl;
    }
}
