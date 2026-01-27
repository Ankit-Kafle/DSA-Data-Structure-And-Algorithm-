// CIRCULAR QUEUE IMPLEMENTATION USING STATIC MEMORY BY USING ARRAY METHOD
#define N 5
#include <iostream>
using namespace std;
int queue[N];
int front = -1;
int rear = -1;

void enqueue(int x)
{
    if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else if ((rear + 1) % N == front)
    {
        cout << "\n Queue is full";
    }
    else
    {
        rear = (rear + 1) % N;
        queue[rear] = x;
    }
}

void dequeue()
{
    if (front == -1 && rear == -1)
    {
        cout << "\n queue is empty";
    }

    else if (front == rear)
    {
        cout << "The dequeue element is: \n " << queue[front];
        front = rear = -1;
    }
    else
    {
        cout << queue[front];
        front = (front + 1) % N;
    }
}

void display()
{
    int i = front;
    if (front == -1 && rear == -1)
    {
        cout << " \n queue is empty";
    }
    else
    {
        cout << "\n queue is:\n ";
        while (i != rear)
        {
            cout << queue[i] << "\n";
            i = (i + 1) % N;
        }
        cout << queue[rear] << "\n";
    }
}

void peek()
{
    cout << queue[front];
}

int main()
{
    enqueue(2);
    enqueue(-1);
    enqueue(5);
    enqueue(6);
    enqueue(7);
    display();
    dequeue();
    enqueue(10);
    enqueue(11);
    display();
    peek();
    return 0;
}
