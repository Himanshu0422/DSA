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
}

void cycle(Node* head){
    Node* temp = head;
    int n = 2;
    while(n--){
        temp = temp->next;
    }
    Node* temp2 = head;
    while(temp2->next != NULL){
        temp2 = temp2->next;
    }
    temp2->next = temp;
}

bool detect(Node* head){
    Node* fast = head;
    Node* slow = head;
    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;

        if(fast == slow){
            return true;
        }
    }
    return false;
}

int main()
{
    Node* head = takeInput();
    print(head);
    cycle(head);
    bool ans = detect(head);
    if(ans){
        cout << "Found";
    }else{
        cout << "Not Found";
    }
    return 0;
}