#include <bits/stdc++.h>
using namespace std;

// Node
class Node
{

public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~Node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }
};

// insertion in singly linked list
void InsertionAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void InsertionAtEnd(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = tail->next;
}

void InsertAtPosition(Node *&head, Node *&tail, int position, int data)
{
    // insert at start
    if (position == 1)
    {
        InsertionAtHead(head, data);
        return;
    }

    // insert at position in between
    Node *help = head;
    int count = 1;

    while (count < position - 1)
    {
        help = help->next;
        count++;
    }

    if (help->next == NULL)
    {
        InsertionAtEnd(tail, data);
        return;
    }

    Node *temp = new Node(data);
    temp->next = help->next;
    help->next = temp;
}

// linked list traversal
void printLinkedList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// linked list deletion
void deleteNode(Node *&head, Node *&tail, int position)
{
    // deleting start node
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        // memory free start node
        delete temp;
    }
    else
    {
        // deleting other nodes
        Node *curr = head;
        Node *prev = NULL;
        int count = 1;

        while (count < position)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }

        // handling deletion of last Node
        if (curr->next == NULL)
        {
            prev->next = curr->next;
            tail = prev;
            curr->next = NULL;
            // memory free end node
            delete curr;
            return;
        }

        prev->next = curr->next;
        curr->next = NULL;
        // memory free any node
        delete curr;
    }
}

int main()
{

    // creation of new node
    Node *N1 = new Node(10);

    cout << N1->data << endl;
    cout << N1->next << endl;

    // head pointed to N1
    Node *head = N1;
    Node *tail = N1;

    InsertionAtEnd(tail, 20);
    InsertAtPosition(head, tail, 2, 50);
    InsertAtPosition(head, tail, 3, 80);
    InsertAtPosition(head, tail, 4, 40);

    printLinkedList(head);

    cout << "head at: " << head->data << endl;
    cout << "tail at: " << tail->data << endl;

    deleteNode(head, tail, 5);

    printLinkedList(head);

    cout << "head at: " << head->data << endl;
    cout << "tail at: " << tail->data << endl;

    return 0;
}