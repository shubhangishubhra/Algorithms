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

Node *insert_at_end(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
        return temp;

    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }

    // Move these lines outside the while loop
    curr->next = temp;
    temp->next = NULL;

    return head;
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
    head = insert_at_end(head, 10);
    head = insert_at_end(head, 5);
    head = insert_at_end(head, 1);
    printall(head);
    return 0;
}
