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

    // Node *temp = head;
    // while (temp != NULL)
    // {
    //     cout << temp->data << endl;
    //     temp = temp->next;
    // }
}

int main()
{
    Node *head = takeInput();
    print(head);
    /*
        // Statically
        Node n1(1);
        Node *head = &n1;

        Node n2(2);

        Node n3(3);
        Node n4(4);
        Node n5(5);

        n1.next = &n2;
        n2.next = &n3;
        n3.next = &n4;
        n4.next = &n5;

        print(head);

        print(head); */
    // n1.next = &n2;

    // cout << head->data << endl;

    // // Dynamically

    // Node *n4 = new Node(5);
    // Node *head1 = n4;

    // Node *n4 = new Node(6);
    // Node n3->next = n4;

    // Node *n6 = new Node(10);
    // Node *heada = n6;

    // Node *n7 = new Node(20);
    // Node *n8 = new Node(30);
    // Node *n9 = new Node(40);
    // Node *n10 = new Node(50);

    // n6->next = n7;
    // n7->next = n8;
    // n8->next = n9;
    // n9->next = n10;

    // print(heada);

    return 0;
}