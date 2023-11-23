#include <bits/stdc++.h> //circular array o(1) both
using namespace std;

struct Queue
{
    int *arr;
    int front, cap, size;

    Queue(int c)
    {
        arr = new int[c];
        cap = c;
        front = 0;
        size = 0;
    }

    bool isFull()
    {
        return (cap == size);
    }

    bool isEmpty()
    {
        return (size == 0);
    }

    int getFront()
    {
        if (isEmpty())
            return -1;
        else
            return arr[front];
    }

    int getRear()
    {
        if (isEmpty())
            return -1;
        else
            return (front + size - 1) % cap;
    }

    void enqueue(int x)
    {
        if (isFull())
            return;
        int rear = getRear();
        rear = (rear + 1) % cap;
        arr[rear] = x;
        size++;
    }

    void dequeue()
    {
        if (isEmpty())
            return;
        front = (front + 1) % cap;
        size--;
    }
};

int main()

 {
    Queue myQueue(5);

    myQueue.enqueue(10);
    myQueue.enqueue(20);
    myQueue.enqueue(30);

    cout << "Front: " << myQueue.getFront() << endl; 
    cout << "Rear: " << myQueue.getRear() << endl;   

    myQueue.dequeue();

    cout << "Front after dequeue: " << myQueue.getFront() << endl;
    cout << "Rear after dequeue: " << myQueue.getRear() << endl;  

    myQueue.enqueue(40);
    myQueue.enqueue(50);

    cout << "Front after enqueue: " << myQueue.getFront() << endl; 
    cout << "Rear after enqueue: " << myQueue.getRear() << endl;   

    return 0;
}
