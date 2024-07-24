#include <iostream>
using namespace std;

//Creating the Node struct
struct Node {
  int age;
  string name;
  Node * link;
};

//Creating a NodePtr typedef so we dont have to use * everytime calling Node
typedef Node * NodePtr;

//circular linked list class
class Test {
	
	public:
    //create the head pointer
		NodePtr head;
		
    //default constructor
		Test(){
			head = NULL;
		}
		
    //age constrcutor
		Test(NodePtr new_head) {
			head = new_head;
		}
		

    //insert function that adds to the tail
		void TailInsert(int num){
		
		  NodePtr currentPtr = new Node();
		
		  currentPtr->age = num;
		
		  if (head == NULL){
		    head = currentPtr;
		    head->link= head;
		  }  
		  else{
		
		    NodePtr temp = head;
		
        //search for inserting location
		    while(temp->link != head){
		
		      temp = temp->link;
		
		    }
		    temp->link = currentPtr;
		    currentPtr ->link = head;
		  }
		
		
		}
		
		void printList(){
		
		  NodePtr printing = head;
		  if (head == NULL) {
        cout << "There is no age in the linked list"<<endl;
        return;
      }
      else{
        //printing every value in the list
        while (printing->link != head){
          cout<<printing->age<<" -> ";
          printing = printing->link;
        }
        cout<<printing->age<< "-> back to head"<<endl;
      }
		  
		};
		
		
    //searching every occurance of the target
		void searchList (int target){
		
		    NodePtr search = head;
		
		    int count = 0;
        int appearences=0;
        if (head == NULL) {
          cout << "There is no age in the linked list"<<endl;
          return;
        }
        else{
          //special check if our seach is the first index
          if (head->age == target){
            cout << "The number "<<target<<" appears in index 0"<<endl;
            appearences++;
          }
          //seaching through every occurance of the target in the link
          while(search->link != head){
            
            count++;
            search = search->link;
            if(search->age == target){
              cout<<"The number "<<target<<" appears in index "<<count<<endl;
              appearences++;
            }
          }
          
          //if no apperance, then we print out no apperences found
          if (appearences==0){
            cout<<"No appearences of "<<target<<" found.";
          }
          
        }
		}
		
    //delete element in a list
		void deleteElement (int removeNum){
		
		  NodePtr remove = head;
		  NodePtr nodeBefore = head;
		
		  int count = 0;   
		  int last =-1;
      if (head == NULL) {
        cout << "There is no age in the linked list"<<endl;
        return;
      }
      //removing what head points to if our occurance is in the first node
      else if (head->link == head) {  
        if (remove->age != removeNum) {
          cout << "Number is not in the list." << endl;
        }
        else {
          head = NULL;
        }
      }
      //finding the delete location
      else{
        while(remove->link != head){
          
          if (remove->age == removeNum){
              last = count;
          }
          count++;
          remove = remove->link;
        
        }
        //special case if we want to delete the node that head is pointed to 
        if (remove->link == head) {
          if (remove->age == removeNum){
              last = count;
              count++;
          }
          
        }     
        if (last == 0){
          while (nodeBefore->link != head) {
            nodeBefore=nodeBefore->link;
          }
          remove = head;
          nodeBefore->link = remove->link;
          head = nodeBefore->link;
          remove->link = NULL;
          delete remove;
        }
        
        //traversing through the linked list to find our node that we want to delete
        else {
          remove = head->link;
          for (int i = 1; i<last;i++ ){
              
            
            remove=remove->link;
            nodeBefore = nodeBefore->link;
          }
          nodeBefore->link = remove->link;
        
          remove->link = NULL;
        }
      }
  }
};

int main(){

  //creating an instance of the object
  Test linked_list;


  

  

};


