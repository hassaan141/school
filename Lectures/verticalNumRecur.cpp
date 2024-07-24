#include <iostream>
using namespace std;

void verticalNum(int num);
int main(){

  int num = 123;
  verticalNum(num);


}

void verticalNum(int num){

    if (num<10)
      cout<<num<<endl;

    else{
      verticalNum(num/10);
      cout<<num%10<<endl;
      
    }
}

