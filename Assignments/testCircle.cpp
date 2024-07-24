#include <iostream>
using namespace std;

struct Node {
  int data;
  Node * link;
};
typedef Node * NodePtr;

void TailInsert(NodePtr& head, int num){

  NodePtr currentPtr = new Node();

  currentPtr->data = num;
  // currentPtr -> link = nullptr;

  if (head == NULL){
    head = currentPtr;
    head->link= head;
  }  
  else{

    NodePtr temp = head;

    while(temp->link != head){

      temp = temp->link;

    }
    temp->link = currentPtr;
    currentPtr ->link = head;
  }

  // currentPtr = NULL;

};

void printList (NodePtr& head){

  //Ask if we need a bound check
  NodePtr printing = head;


  while (printing->link != head){
    cout<<printing->data<<" -> ";
    printing = printing->link;
    
  }
  cout<<printing->data<< "-> back to head"<<endl;

  
};

void searchList (NodePtr& head, int target){

    NodePtr search = head;

    int count = 0;

    //ask if we want to find what number of node or the index
    while(search->data != target){
      //flip the order of count++ and search = search->link depending on if we want index or node number

      count++;
      search = search->link;

    }
    cout<<"The node number for "<<target<<" is "<<count<<endl;
}

void deleteElement (NodePtr &head, int removeNum){

  NodePtr remove = head;
  NodePtr nodeBefore = head;

  int count = 0;   //check to see 
  int last =-1;
  while(remove->link != head){
    count++;

    remove = remove->link;

     if (remove->data == removeNum){
        last = count;
    }
   
  }

    remove = head->link;
    for (int i = 1; i<last;i++ ){
      
        nodeBefore = nodeBefore->link;
        remove=remove->link;
        

    }

    nodeBefore->link = remove->link;

    remove = NULL;

}

int main(){

  //ask why head has to be null
  NodePtr head = NULL;


  TailInsert(head, 5);
  // printList(head);
  TailInsert(head, 6);
  // printList(head);  
  TailInsert(head, 7);
  // printList(head);
  TailInsert(head, 8);
  TailInsert(head, 9);
  TailInsert(head, 10);
  TailInsert(head, 11);
  

  ///////////////////////////////////////////////
  printList(head);
  deleteElement(head, 6);
  printList(head);
  

};





