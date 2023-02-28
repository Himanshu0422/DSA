#include <bits/stdc++.h>
using namespace std;
#include "intro.cpp"

Node *takeInput()
{
    int data;
    cin >> data;

    Node *head = NULL;
    Node *tail = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}

void print(Node *head)
{

    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int getCount(Node *head)
{
    int count = 0;
    Node *current = head;
    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
}

void find(Node *head, int n)
{
    int count = 0;
    Node *current = head;

    while (current != NULL)
    {
        if (count == n)
        {
            cout << current->data;
        }
        count++;
        current = current->next;
    }
    cout << endl;
}

Node *insertNode(Node *head, int i, int data)
{
    Node *newNode = new Node(data);
    int count = 0;
    Node *temp = head;

    if (i == 0)
    {
        newNode->next = head;
        head = newNode;
        return head;
    }
    else
    {
        while (temp != NULL && count < (i - 1))
        {
            temp = temp->next;
            count++;
        }
        if (temp != NULL)
        {
            Node *a = temp->next;
            temp->next = newNode;
            newNode->next = a;
        }
    }
    return head;
}

Node *deleteNode(Node *head, int i)
{

    Node *temp = head;
    int count = 0;

    if (i == 0)
    {
        Node *k = temp->next;
        head = k;
        delete temp;
    }

    while (temp != NULL && count < i - 1)
    {
        count++;
        temp = temp->next;
    }
    if (temp != NULL)
    {
        Node *a = temp->next;
        Node *b = a->next;
        temp->next = b;
        delete a;
    }
    return head;
}

int main()
{
    Node *head = takeInput();
    print(head);

    // cout << getCount(head) << endl;

    // find(head, 2);

    // head = insertNode(head, 2, 99);

    // print(head);
    cout << endl;
    head = deleteNode(head, 0);
    print(head);

    return 0;
}