#include <iostream>
using namespace std;

int maxXor(int l, int r) {
    int max = 0, temp;
	int curR = l;

	while(l<=r){
		temp = l^curR;
		if(temp>max)
			max = temp;
		curR++;
		if(curR>r){
			l++;
			curR = l;
		}
	}

	return max;


}

int main() {
    int res;
    int _l;
    cin >> _l;
    
    int _r;
    cin >> _r;
    
    res = maxXor(_l, _r);
    cout << res;
    
    return 0;
}
