//http://www.spoj.com/problems/FASHION/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	
	int t; cin >> t;
	while (t--){
		vector<int> men, women;
		int n; cin >> n;
		for (int i = 0; i < n; i++){
			int t; cin >> t;
			men.push_back(t);
		}
		for (int i = 0; i < n; i++){
			int t; cin >> t;
			women.push_back(t);
		}
		sort(men.begin(), men.end());
		sort(women.begin(), women.end());

		int sum = 0;
		for (int i = 0; i < n; i++)
			sum += men[i] * women[i];
		cout << sum << endl;
	}
	return 0;
}
