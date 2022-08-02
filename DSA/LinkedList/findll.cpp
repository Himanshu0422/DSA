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
            // tail = tail->next
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

    // for using a temp
    // Node *temp = head;
    // while (temp != NULL)
    // {
    //     cout << temp->data << endl;
    //     temp = temp->next;
    // }
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
}

Node *appendN(Node *head, int n)
{
    Node *curr = head;
    Node *temp1 = head;
    int len = getCount(head);
    int count = len - n;
    int i = 1;
    while (i <= count)
    {
        curr = curr->next;
        i++;
    }

    Node *head2 = curr->next;
    curr->next = NULL;
    Node *temp = head2;

    while (temp != NULL)
    {
        temp = temp->next;
    }

    temp->next = temp1;

    return head;
}

int main()
{
    Node *head = takeInput();
    print(head);

    cout << getCount(head) << endl;

    head = appendN(head, 3);
    print(head);

    return 0;
}