//http://www.spoj.com/problems/CANDY3/

#include <iostream>
using namespace std;

int main(){
	unsigned long long int t; cin >> t;
	while (t--){
		unsigned long long int n; cin >> n;
		unsigned long long int sum = 0;
		for (int i = 0; i < n; i++){
			unsigned long long int temp; cin >> temp;
			sum += temp%n;
		}
		if (sum%n == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
			
	}

	return 0;
}
