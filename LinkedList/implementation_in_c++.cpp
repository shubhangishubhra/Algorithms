#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int d)
    {
        d = data;
        next = NULL;
    }
};

int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(5);
    head->next= temp1;
    temp1->next = temp2;
    temp2->next = NULL;
    return 0;
}