#include <iostream>
#define SIZE 5 // explained in the end of the question answer

class Queue
{
private:
  int items[SIZE], front, rear;

public:
  Queue()
  {
    front = -1;
    rear = -1;
  }
  bool isFull()
  {
    return (front == 0 && rear == SIZE - 1);
  }
  bool isEmpty()
  {
    return front == -1;
  }
  void enqueue(int element)
  {
    if (isFull())
    {
      std::cout << "Queue is full" << std::endl;
    }
    else
    {
      if (front == -1)
        front = 0;
      rear++;
      items[rear] = element;
      std::cout << "Inserted " << element << std::endl;
    }
  }
  int dequeue()
  {
    int element;
    if (isEmpty())
    {
      std::cout << "Queue is empty" << std::endl;
      return (-1);
    }
    else
    {
      element = items[front];
      if (front >= rear)
      {
        front = -1;
        rear = -1;
      }
      else
      {
        front++;
      }
      std::cout << "Deleted -> " << element << std::endl;
      return (element);
    }
  }
  void display()
  {
    if (isEmpty())
    {
      std::cout << "Queue is empty" << std::endl;
    }
    else
    {
      std::cout << "Front index-> " << front << std::endl;
      std::cout << "Items -> ";
      for (int i = front; i <= rear; i++)
        std::cout << items[i] << " ";
      std::cout << std::endl
                << "Rear index-> " << rear << std::endl;
    }
  }
};
int main()
{
  Queue q;
  q.enqueue(1);
  q.enqueue(2);
  q.enqueue(3);
  q.enqueue(4);
  q.enqueue(5);
  q.display();
  q.dequeue();
  q.display();
  return 0;
}