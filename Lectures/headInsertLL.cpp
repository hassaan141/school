#include <iostream>
using namespace std;

  //This creates our strucutre for our code
  //Giving strcutre to a bunch of stuff, ask if it is a n object
  struct Node {
    int data;
    Node * link;
  };
  struct Node {
    int data;
    Node * link;
  };

  //This makes a global variable for our object that we can use througout our code
  typedef Node* NodePtr;

  //prototyping function
  void Headinsert(NodePtr& head,  int num);


int main(){

  //Making the head node of the linked lists.
  //Head is an instance for our node structure
  NodePtr Head;
  Head = new Node;

  //assinging values to Head
  Head -> data = 3;
  Head -> link = NULL;

  cout<<"The data is "<<Head->data<<endl;

  NodePtr temp_ptr;
  temp_ptr = new Node;
  temp_ptr ->data = 15;
  temp_ptr ->link = Head;
  Head = temp_ptr;

   cout<<"The data is "<<Head->data<<","<<Head->link->data<<endl;

   Headinsert(Head, 12);

   cout<<"The data is "<<Head->data<<","<<Head->link->data<<","<<Head->link->link->data<<endl;

};

void Headinsert(NodePtr& head,  int num){

  //now we make a temp instance for our linked list strcutre
  NodePtr tempPtr;
  tempPtr = new Node;
  tempPtr -> data = num;
  tempPtr -> link = head;
  head = tempPtr;

}

