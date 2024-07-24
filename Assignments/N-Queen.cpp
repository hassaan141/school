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
  
  int n = 0;
  cout<<"Enter the board size you want?";
  cin>>n;

  int boardSize = 4;

  for (int i = 0; i<n; i++){
    Queen queen(i);

    cout << queen.count << endl;
  }

}
