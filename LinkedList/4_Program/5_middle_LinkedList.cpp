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

int getLen(Node *head)
{
    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}

Node *findMiddle(Node *head)
{
    int len = getLen(head);
    int ans = len / 2 + 1;
    Node *temp = head;
    while (temp != NULL)
    {
        ans = ans - 1;
        if (ans == 0)
        {
            break;
        }
        temp = temp->next;
    }
    return temp;
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
    Node *res = findMiddle(head);
    print(res);
}