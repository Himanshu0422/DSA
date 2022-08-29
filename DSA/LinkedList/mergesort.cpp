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
    int count = 1;
    Node *current = head;
    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
}

Node *middle(Node *head)
{
    Node *slow = head;
    Node *fast = head->next;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
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

Node *rmerge(Node *headRef)
{
    Node *head = headRef;
    Node *a;
    Node *b;

    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *mid = middle(head);
    a = head;
    b = mid->next;
    mid->next = NULL;

    a = rmerge(a);
    b = rmerge(b);

    Node *result = merge(a, b);
    return result;
}

Node *reverseKGroup(Node *head, int k)
{

    if (head == NULL)
    {
        return head;
    }

    Node *curr = head;
    Node *prev = NULL;
    Node *next = NULL;
    int count = 0;
    int len = getCount(head);

    while (len >= k)
    {

        while (curr != NULL && count < k)
        {

            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        len -= k;
    }
    if (next != NULL)
    {
        head->next = reverseKGroup(next, k);
    }
    return prev;
}

Node *reverseKGroupI(Node *head, int k)
{

    if (head == NULL)
    {
        return head;
    }

    Node *curr = head;
    Node *prev = NULL;
    Node *next = NULL;
    int count = 0;

    while (curr != NULL && count < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    if (next != NULL)
    {
        head->next = reverseKGroupI(next, k);
    }

    return prev;
}

int listlen(Node *head)
{
    int len = 1;
    while (head != NULL)
    {
        len++;
        head = head->next;
    }
    return len;
}

Node *reverse(Node *head, int k, int length)
{
    if (head == NULL)
    {
        return NULL;
    }

    Node *curr = head;
    Node *prev = NULL;
    Node *next = NULL;
    int count = 0;
    int len = listlen(head);

    while (curr != NULL && count < k)
    {

        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    if (len - k > k)
    {
        head->next = reverse(next, k, len - k);
    }
    else
    {
        head->next = curr;
    }
    return prev;
}

Node *reverseKGroupII(Node *head, int k)
{

    int length = listlen(head);
    if (length <= k)
    {
        return head;
    }

    head = reverse(head, k, length);
    return head;
}

int main()
{
    Node *head = takeInput();

    print(head);

    head = reverseKGroupII(head, 3);
    print(head);

    return 0;
}