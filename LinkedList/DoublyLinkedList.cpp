#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

    // destructor
    ~Node()
    {
        int value = this->data;
        cout << this->next << endl;
        cout << "element deleted from doubly linked list: " << value << endl;
    }
};

// traversing a linked list
void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// length of linked list
int lengthList(Node *head)
{
    int len = 0;

    while (head != NULL)
    {
        len++;
        head = head->next;
    }
    return len;
}

// insertion in doubly linked list
void insertAtHead(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node *&tail, Node *&head, int data)
{

    if (tail == NULL)
    {
        Node *temp = new Node(data);
        tail = temp;
        head = temp;
    }
    else
    {
        Node *temp = new Node(data);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void InsertAtPosition(Node *&head, Node *&tail, int position, int data)
{
    // insert at start
    if (position == 1)
    {
        insertAtHead(head, tail, data);
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
        insertAtTail(tail, head, data);
        return;
    }

    Node *temp = new Node(data);
    temp->next = help->next;
    temp->next->prev = temp;
    temp->prev = help;
    help->next = temp;
}

// linked list deletion
void deleteNode(Node *&head, Node *&tail, int position)
{
    // deleting start node
    if (position == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
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

        // handling deletion of last node
        if (curr->next == NULL)
        {
            tail = prev;
            prev->next = NULL;
            curr->prev = NULL;
            delete curr;
            return;
        }

        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main()
{

    Node *head = new Node(30);
    Node *tail = head;

    cout << lengthList(head) << endl;
    printList(head);

    insertAtHead(head, tail, 19);
    insertAtHead(head, tail, 15);
    insertAtTail(tail, head, 20);
    insertAtTail(tail, head, 56);
    printList(head);

    cout << "head at: " << head->data << endl;
    cout << "tail at: " << tail->data << endl;

    InsertAtPosition(head, tail, 2, 104);
    InsertAtPosition(head, tail, 2, 115);
    printList(head);

    cout << "head at: " << head->data << endl;
    cout << "tail at: " << tail->data << endl;

    deleteNode(head, tail, 10);
    printList(head);

    cout << "head at: " << head->data << endl;
    cout << "tail at: " << tail->data << endl;

    return 0;
}