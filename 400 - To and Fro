// http://www.spoj.com/problems/TOANDFRO/

#include <iostream>
#include <string>
using namespace std;

int main(){
	
	int c;
	while (cin >> c,c!=0){
		
		string s; cin >> s;
		int sl = s.length();
		int cnt1 = 1;
		int cnt0 = 2 * c - 1;
		for (int i = 0; i < c; i++){
			bool f = 0;
			for (int j = i; j < sl; ){
				if (!f){
					cout << s[j];
					j +=cnt0;
					f = 1;
					continue;
				}
				else{
					cout << s[j];
					j += cnt1;
					f = 0;
				}
			}
			cnt0-=2;
			cnt1+=2;
		}
		cout << endl;
	}
	return 0;
}
