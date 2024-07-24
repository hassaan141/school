#include <iostream>
using namespace std;

int power (int x, int n){

  if ( n ==0 )
    return 1;

  else{
    return (x * power(x, n-1));
  }

};


int main() {
  
  int x = 2;
  int n = 5;
  int total = power(x, n);
  cout<<total;

}