#include <iostream>
using namespace std;

double findDistance(double u, double a, double t){
     return u*t+(0.5)*a*(t*t); 
} 

int main(){

  cout << "S =" << findDistance(5,4,3);

  return 0;
}
