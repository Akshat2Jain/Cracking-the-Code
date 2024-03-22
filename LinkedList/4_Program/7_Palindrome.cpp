#include <iostream>
#include <bits/stdc++.h>

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

bool isPalindrome(Node *head)
{
    stack<int> st;
    Node *temp = head;
    while (temp != NULL)
    {
        st.push(temp->val);
        temp = temp->next;
    }
    temp = head;
    while (temp != NULL)
    {
        if (temp->val != st.top())
        {
            return false;
        }
        st.pop();
        temp = temp->next;
    }
    return true;
}

int main()
{
    Node *head = NULL;
    insertAtHead(head, 1);
    insertAtHead(head, 2);
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    print(head);
    if (isPalindrome(head))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
};