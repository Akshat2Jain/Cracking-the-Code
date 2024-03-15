#include <iostream>

using namespace std;

// Insertion at kth position in a singly linked list
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
// Insertint at the kth Pos
void insertAtKth(Node *&head, int val, int pos)
{
    if (pos == 0)
    {
        insertAtHead(head, val);
    }
    Node *new_node = new Node(val);
    Node *temp = head;
    int curr_pos = 0;
    while (curr_pos != pos - 1)
    {
        temp = temp->next;
        curr_pos++;
    }
    new_node->next = temp->next;
    temp->next = new_node;
}
// Updating the kth value
void updateKthValue(Node *&head, int val, int pos)
{
    Node *temp = head;
    int curr_pos = 0;
    while (curr_pos != pos)
    {
        temp = temp->next;
        curr_pos++;
    }
    temp->val = val;
}
// deletion of a node
void deleteNodeFromStart(Node *&head)
{
    Node *temp = head;
    head = head->next;
    free(temp);
}
void deleteNodeFromKTH(Node *&head, int pos)
{
    if (pos == 0)
    {
        deleteNodeFromStart(head);
    }
    int curr_pos = 0;
    Node *prev = head;
    while (curr_pos != pos - 1)
    {
        prev = prev->next;
        curr_pos++;
    }
    Node *temp = prev->next;
    prev->next = prev->next->next;
    free(temp);
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

int main()
{
    // Node *n = new Node(1);
    // cout << n->val << " " << n->next;
    Node *head = NULL;
    insertAtHead(head, 4);
    insertAtHead(head, 3);
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    print(head);
    insertAtKth(head, 8, 2);
    print(head);
    updateKthValue(head, 7, 2);
    print(head);
    deleteNodeFromStart(head);
    print(head);
    deleteNodeFromKTH(head, 3);
    print(head);
}