#include<iostream>
#include<stack>
using namespace std;

class Queen{
  public:
  int col;
  int count = 0;
  stack<int>stack1;
  stack<int>stack2;


  Queen(int numQueen){
    int col = numQueen;
    count++;
  };
    

  void queenCheck(){

    if (stack1.empty()){
      stack1.push(col);
    }
    else if (stack1.size() !=8){

      if (  ){

        for (int i = 0; i<8; i++){
          int temp = 3

        } 
      }

    }
    else{
      
    }
    
  }


};

int main(){
  
  stack<int> goodStack;
  stack<int> badStack;

  Queen queen1(1,1);
  Queen queen2(2,2);
  Queen queen3(3,3);
  Queen queen4(4,4);

 
}
