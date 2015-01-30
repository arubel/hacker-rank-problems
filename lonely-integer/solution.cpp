#include <map>
#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
int lonelyinteger(vector < int > a) {
     map <int, int> helper;
    int answer=0;
    for(unsigned i = 0; i<a.size(); ++i){
        helper[a[i]]++;
    }
    for(auto it = helper.begin(); it!=helper.end(); ++it){
        if(it->second==1){
            answer = it->first;
            break;
        }    
    }
    
    return answer;
   

}
int main() {
    int res;
    
    int _a_size;
    cin >> _a_size;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n'); 
    vector<int> _a;
    int _a_item;
    for(int _a_i=0; _a_i<_a_size; _a_i++) {
        cin >> _a_item;
        _a.push_back(_a_item);
    }
    
    res = lonelyinteger(_a);
    cout << res;
    
    return 0;
}