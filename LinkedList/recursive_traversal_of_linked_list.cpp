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

void recursive(Node *head)
{
    if (head == NULL)
    {
        return;
    }

    cout << (head->data) << " ";
    recursive(head->next);
}
int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(5);
    head->next = temp1;
    head->next->next = temp2;
    recursive(head);
    return 0;
}