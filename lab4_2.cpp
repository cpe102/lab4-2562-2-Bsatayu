#include <iostream>
using namespace std;

double findDistance(double u, double a, double t){
     return u*t+(0.5)*a*(t*t); 
} 

int main(){
  double u,a,t;
  cout << "enter u";
  cin >> u;
  cout << "enter a";
  cin >> a;
  cout << "enter t";
  cin >> t;
  
   cout << "S =" << findDistance(u,a,t);

  return 0;
}
