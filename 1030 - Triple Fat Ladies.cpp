//http://www.spoj.com/problems/EIGHTS/

#include <iostream>
#include <string>
using namespace std;

int main(){
	int t; cin >> t;
	while (t--){
		unsigned long long int in; cin >> in;
		if (in == 1)
			cout << 192 << endl;
		else{
			in = (in - 1) * 250 + 192;
			cout << in << endl;
		}
	}
	return 0;
}
