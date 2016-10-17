//http://www.spoj.com/problems/HANGOVER/

#include <iostream>
using namespace std;
int doo(float a){
  float x = 0;
  int n = 1;
  while(x<=a){
    x+= (float)1/(n+1);
    n++;
  }
return n-1;
}
int main() {
  float a;
  while(cin >> a,a!=0){
    cout <<doo(a) << " card(s)"<<endl;
  }
  return 0;
}
