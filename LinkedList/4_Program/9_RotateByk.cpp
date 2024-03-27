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

Node *rotateRight(Node *&head, int k)
{
    if (head == NULL || head->next == NULL || k == 0)
        return head;
    int length = 1;
    Node *temp = head;
    while (temp->next != NULL)
    {
        ++length;
        temp = temp->next;
    }
    temp->next = head;
    k = k % length;
    int end = length - k;
    while (end--)
    {
        temp = temp->next;
    }
    head = temp->next;
    temp->next = NULL;
    return head;
}
int main()
{
    // Node *n = new Node(1);
    // cout << n->val << " " << n->next;
    Node *head = NULL;
    insertAtHead(head, 1);
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    insertAtHead(head, 4);
    insertAtHead(head, 5);
    print(head);
    int k = 2;
    Node *newHead = rotateRight(head, k);
    print(newHead);
}