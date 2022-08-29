#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

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
    cout << endl;
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

int rCount(Node *head)
{
    int count = 0;
    if (head == NULL)
    {
        return 0;
    }
    count++;
    return count + rCount(head->next);
}

void find(Node *head, int n)
{
    int count = 0;
    Node *current = head;
    while (current != NULL)
    {
        if (count == n)
        {
            cout << current->data << endl;
        }
        count++;
        current = current->next;
    }
}

int findNode(Node *head, int key)
{
    int count = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return count;
        }
        count++;
        temp = temp->next;
    }
    return -1;
}

Node *insertNode(Node *head, int i, int data)
{
    Node *newNode = new Node(data);
    int count = 0;
    Node *temp = head;

    while (temp != NULL && count < i - 1)
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
    return head;
}

Node *rInsert(Node *head, int i, int data)
{
    Node *newNode = new Node(data);

    if (head == NULL)
    {
        return NULL;
    }

    if (i == 0)
    {
        newNode->next = head;
        head = newNode;

        return head;
    }

    if (i == 1)
    {
        newNode->next = head->next;
        head->next = newNode;
    }

    rInsert(head->next, i - 1, data);

    return head;
}

Node *deleteNode(Node *head, int i)
{
    Node *temp = head;
    int count = 0;

    if (i == 0)
    {
        head = head->next;
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
    }

    return head;
}

Node *rDelete(Node *head, int i)
{
    if (head == NULL)
    {
        return NULL;
    }

    if (i == 0)
    {
        head = head->next;
    }

    if (i == 1)
    {
        Node *temp = head->next;
        Node *a = temp->next;
        head->next = a;
    }

    rDelete(head->next, i - 1);

    return head;
}

Node *appendlastntofirst(Node *head, int n)
{
    // for (int i = 0; i < n; i++)
    // {
    //     Node *temp = head;
    //     Node *a = head;
    //     while (temp != NULL)
    //     {
    //         temp = temp->next;
    //     }

    //     temp->next = a;
    //     head = temp;
    // }
    // return head;

    Node *curr = head;
    Node *temp1 = head;
    int len = getCount(head);
    int i = 0;
    int count = len - n;

    while (i < count - 1)
    {
        curr = curr->next;
        i++;
    }

    head = curr->next;
    curr->next = NULL;
    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = temp1;

    return head;
}

Node *reverse1(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *next;

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    head = prev;
    return head;
}

Node *rreverse(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    Node *p = rreverse(head->next);

    head->next->next = head;
    head->next = NULL;
    return p;
}

Node *duplicates(Node *head)
{
    Node *temp1 = head;
    Node *temp2 = head->next;

    while (temp2 != NULL)
    {
        if (temp1->data == temp2->data)
        {
            temp1->next = temp2->next;
            temp2 = temp1->next;
        }
        else
        {
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }
    return head;
}

Node *middle(Node *head)
{
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
// 1 2 3 4 5
bool palindrome(Node *head)
{
    if (head == NULL)
        return true;

    Node *mid = middle(head);
    Node *last = rreverse(mid->next);

    Node *curr = head;

    while (last != NULL)
    {
        if (last->data != curr->data)
        {
            return false;
        }
        last = last->next;
        curr = curr->next;
    }
    return true;
}

Node *merge(Node *head1, Node *head2)
{
    // Node *dummyNode = new Node();
    Node *head = NULL;
    Node *tail = NULL;

    if (head1 == NULL)
        return head2;
    if (head2 == NULL)
        return head1;

    if (head1->data <= head2->data)
    {
        head = head1;
        tail = head1;
        head1 = head1->next;
    }
    else
    {
        head = head2;
        tail = head2;
        head2 = head2->next;
    }

    while (head1 != NULL && head2 != NULL)
    {
        if (head1->data <= head2->data)
        {
            tail->next = head1;
            tail = head1;
            head1 = head1->next;
        }
        else
        {
            tail->next = head2;
            tail = head2;
            head2 = head2->next;
        }
    }

    if (head1 == NULL)
    {
        tail->next = head2;
    }
    if (head2 == NULL)
    {
        tail->next = head1;
    }
    return head;
}

void split(Node *head, Node *a, Node *b)
{
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    a = head;
    b = slow->next;
    slow->next = NULL;
}

Node* rmerge(Node *headRef)
{
    Node *head = headRef;
    Node *a;
    Node *b;

    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node* mid = middle(head);
    a = head;
    b = mid->next;
    mid->next = NULL;

    a = rmerge(a);
    b = rmerge(b);

    Node* result = merge(a, b);
    return result;
}

int main()
{
    Node *head = takeInput();
    print(head);

    cout << getCount(head) << endl;

    rmerge(head);

    print(head);

    // cout << palindrome(head) << endl;

    // head = rreverse(head);
    // head = duplicates(head);
    // head = appendlastntofirst(head, 3);

    // cout << findNode(head, 1) << endl;

    // cout << rCount(head) << endl;

    // head = rInsert(head, 0, 99);

    // head = rDelete(head, 1);
    // print(head);

    // find(head, 5);

    // insertNode(head, 3, 99);

    // print(head);

    // head = deleteNode(head, 0);
    // print(head);

    return 0;
}