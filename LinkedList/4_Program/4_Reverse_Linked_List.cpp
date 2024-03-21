#include <iostream>

using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int data)
    {
        val = data;
        next = NULL;
    }
};

void insertAtHead(Node *&head, int val)
{
    Node *new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

Node *reverseLinked(Node *head)
{
    Node *prevptr = NULL;
    Node *currptr = head;
    while (currptr != NULL)
    {
        Node *nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
    }
    Node *new_head = prevptr;
    return new_head;
}

int main()
{
    // Node *n = new Node(1);
    // cout << n->val << " " << n->next;
    Node *head = NULL;
    insertAtHead(head, 1);
    insertAtHead(head, 2);
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    insertAtHead(head, 3);
    print(head);
    Node *new_head = reverseLinked(head);
    print(new_head);
}