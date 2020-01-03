#include <iostream>
using namespace std;

int findDivisor(int x){
    int y = 2;
  int ans;

  while(x%y != 0){
      y = y+1;
  }
    ans = y;
  return ans;

}

int main(){
  int y;
  cout << "Enter x =";
  cin >> y;
  cout << "Divisor =" << findDivisor(y);
  
  return 0;
}