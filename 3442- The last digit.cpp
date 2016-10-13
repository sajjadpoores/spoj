//http://www.spoj.com/problems/LASTDIG/

#include <iostream>
using namespace std;

int power(int x, unsigned int y, int p)
{
	int res = 1;
	x = x % p; 
	while (y > 0)
	{
		if (y & 1)
			res = (res*x) % p;
		y = y >> 1;
		x = (x*x) % p;
	}
	return res;
}

int main(){
	
	int t; cin >> t;
	while (t--){
		int a, b; cin >> a >> b;
		cout << power(a, b, 10) << endl;
	}
	return 0;
}
