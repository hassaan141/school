#include <iostream>
#include <vector> 
using namespace std;

class SequentialList {

    private:
        vector<int> array;
        int size;

    public:
        SequentialList() : size(0) {}
        ~SequentialList() {}

        void insert(int index, int value) {

        //Step1: Check if the index makes sense
            // 1. If index is a negative number (you cannot have negative indices)
            // 2. If index is greater than the size of the array (you're making it non-contiguous) 
            //This line should return an error (using a simple cout or however you prefer)
            //incase the above conditions are true and exit out of the function. 

        //Step 2: Else if the indexes are allowable:
        //Check if the size of the array has reached its maximum capacity
        //and if so, resize the array to twice its initial size. 
        if(index<0 || index>size){
            cout<<"cmon bruh, u suck";
            return;
        }   
            else
            {
                if (size >= array.size()) {
                    array.resize(size == 0 ? 1 : size * 2);
                }

        //Step3: A loop to shift the elements of the array with index > given insertion index, by one position up,
        //       to make space for inserting the new element at the current index. 
        //Eg:    Current array: [0, 10, 11, 13, 14] has index from 0 to 4. 
        //       To insert an element at position 2, shift the index of elements 11, 13, 14 to  3, 4 and 5 resp. 
       
        for (int i = index; i<array.size(); i++){                   
                                                                        

            int temp = 0;
            temp = array[i+1];
            array[i+1] = array[i];
            
        }
        //Step4: Insert the value at the given index. 
        //       DON'T FORGET TO UPDATE THE SIZE!
            array[index] = value;
            size++;

            }
        }

        void remove(int index) {

        //Step1: Check if the index makes sense
            // 1. If index is a negative number (you cannot have negative indices)
            // 2. If index is greater than the size of the array (you're making it non-contiguous) 
            //This line should return an error (using a simple cout or however you prefer)
            //incase the above conditions are true and exit out of the function. 
             if(index<0 || index>size){
                cout<<"cmon bruh, u suck";
                return;
            }   
            else
            {

            //Step3: A loop to shift the elements of the array with index > given remove index, by one position down,
            //       to remove space after deleting the new element at the current index. 
            //Eg:    Current array: [0, 10, 11, 13, 14] has index from 0 to 4. 
            //       To delete at position 2, shift the index of elements 13, 14 to  2 and 3 resp. 
            //       DON'T FORGET TO UPDATE THE SIZE!

            for (int j = index; j<array.size();j++){
                                                                      
                array[j] = array[j+1];

            }
            size--;

            }
        }

        void display() 
            {
            cout << endl;
            for (int i = 0; i < size; ++i) {
                cout << array[i] << " ";
            }
            cout << endl;
        }


};

int main() {
   
    //General format to call methods: instance-name.method-name(attributes);
    SequentialList seq;
    seq.insert(0,1);
    seq.insert(1,2);
    seq.insert(2,3);
    seq.insert(3,4);
    seq.display();
    seq.remove(2);
    seq.display();


    return 0;
}

