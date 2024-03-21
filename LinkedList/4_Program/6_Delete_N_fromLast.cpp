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

void insertAtHead(Node *&head, int data)
{
    Node *new_node = new Node(data);
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

Node *removeFromLast(Node *&head, int n)
{
    Node *fast = head;
    Node *slow = head;
    for (int i = 0; i < n; i++)
    {
        fast = fast->next;
    }
    if (fast == NULL)
    {
        return head->next;
    }
    while (fast->next != NULL)
    {
        fast = fast->next;
        slow = slow->next;
    }
    Node *delNode = slow->next;
    slow->next = slow->next->next;
    free(delNode);
    return head;
}

int main()
{
    Node *head = NULL;
    insertAtHead(head, 1);
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    insertAtHead(head, 4);
    insertAtHead(head, 5);
    print(head);
    int n = 2;
    Node *res = removeFromLast(head, n);
    print(res);
}