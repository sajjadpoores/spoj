//http://www.spoj.com/problems/COINS/

#include <iostream>
#include <string>
#include <map>
using namespace std;

map<int,long long int > maxn;
long long int maxx(int n){
	if (!n)
		return 0;

	if (maxn[n] != 0)
		return maxn[n];

	long long int recur = maxx(n / 2) + maxx(n / 3) + maxx(n / 4);
	if (n > recur)
		maxn[n] = n;
	else
		maxn[n] = recur;
	return maxn[n];
}
int main(){
	maxn[0] = 0;
	maxn[1] = 1;
	maxn[2] = 2;
	maxn[3] = 3;
	maxn[4] = 4;
	maxn[5] = 5;
	long long int n;
	while (cin >> n){
		cout << maxx(n) << endl;
	}

	return 0;
}
