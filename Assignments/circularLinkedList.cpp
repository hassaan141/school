#include <iostream>
using namespace std;

struct Node {

  int data;
  Node* next;
  
  Node(): data(0), next(nullptr) {};
  Node(int num): data(num), next(nullptr) {};

};



class CircularLinkedList{

  private:
    Node *head;
    Node *last;

  public:
    CircularLinkedList(): head(nullptr){};//constructor

  
    void insert(int num){

      Node *NodePtr = new Node(num);
     
      if (head->next == nullptr){
        head = NodePtr;  
        head->next = head;
      }
      else if (head->next && last->next == NodePtr){

        last->next = NodePtr;
        last = NodePtr;

          

      }

    else{

    }


    }
      
    
};

int main(){

};