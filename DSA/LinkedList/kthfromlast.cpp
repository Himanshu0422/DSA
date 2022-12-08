#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node* next;
	Node(int data){
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
            // tail = tail->next
        }
        cin >> data;
    }
    return head;
}


void print(Node* head){
	while(head != NULL){
		cout << head->data << " ";
		head = head->next;
	}
}

int count(Node* head){
	int count = 0;
	while(head != NULL){
		count++;
		head = head->next;
	}
	return count;
}

int deleteNode(Node* head, int k){

	Node* curr = head;

	while(k > 1){
		curr = curr->next;
		k--;
	}

	return curr->data;
}

Node* reverse(Node* head){
	Node* curr = head;
	Node* prev = NULL;
	Node* next = NULL;

	while(curr != NULL){
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	return prev;
}

int main() {
	Node* head = takeInput();
	int k;
	cin >> k;

	head = reverse(head);
	int ans = deleteNode(head, k);

	cout << ans;
	return 0;
}