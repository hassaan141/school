#include <iostream>
using namespace std;

void reverseNum(int num);
int main(){

  int num = 12345678;
  reverseNum(num);


}

void reverseNum(int num){

    if (num<10)
      cout<<num;

    else{
      cout<<num%10;
      reverseNum(num/10);
    }
}

