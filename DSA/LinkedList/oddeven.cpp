#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node *next;
	
	Node(int data){
		this->data = data;
		next = NULL;
	}
};

Node *takeInput(int n)
{
    int data;
    cin >> data;

    Node *head = NULL;
    Node *tail = NULL;
    while (n > 0)
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
		n--;
    }
    return head;
}

Node* solve(Node* &head){

	Node* even=new Node(-1);
	Node* evenHead=even;
	Node* odd=new Node(-2);
	Node* oddHead=odd;
	Node* temp=head;

	while(temp!=NULL)
	{
		if(temp->data%2==0)
		{
			even->next=new Node(temp->data);
			even=even->next;
		}
		else{
			odd->next=new Node(temp->data);
			odd=odd->next;
		}
		temp=temp->next;
	}

	odd->next=evenHead->next;
	return oddHead->next;
}

void print(Node* head, int n){
	// while(head != NULL){
	// 	cout << head->data << " ";
	// 	head = head->next;
	// }

	while(head != NULL){
		cout << head->data << " ";
		head = head->next;
	}
}

int main() {

	int n;
	cin >> n;

	Node *head = takeInput(n);

	// print(head, n);

	head = solve(head);

	print(head, n);

	return 0;
}