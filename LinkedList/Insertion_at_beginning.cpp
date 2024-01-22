#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

Node *insert_at_beginning(Node *head, int x)
{
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}

void printall(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << (curr->data) << " ";
        curr = curr->next;
    }
}
int main()
{
    Node *head = NULL;
    head = insert_at_beginning(head, 10);
    head = insert_at_beginning(head, 5);
    head = insert_at_beginning(head, 1);
    printall(head);
    return 0;
}