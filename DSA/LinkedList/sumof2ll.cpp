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

Node* takeInput(int n){
	Node* head = NULL;
	Node* tail = NULL;

	while(n--){
		int data;
		cin >> data;
		Node* newNode = new Node(data);

		if(head == NULL){
			head = newNode;
			tail = newNode;
		}else{
			tail->next = newNode;
			tail = tail->next;
		}
	}
	return head;
}

void print(Node* head){
	while(head != NULL){
		cout << head->data << " ";
		head = head->next;
	}
}

Node* solve(Node* head1, Node* head2){
	Node* head = NULL;
	Node* tail = NULL;

	int carry = 0;
	while(head1 != NULL || head2 != NULL){\

		int sum = carry;
		if(head1 != NULL){
			sum += head1->data;
			head1 = head1->next;
		}
		if(head2 != NULL){
			sum += head2->data;
			head2 = head2->next;
		}
		// cout << "Sum " << sum << endl;
		Node* newNode = new Node(sum%10);
		carry = sum/10;
		// cout << "Carry " << carry << endl;

		if(head == NULL){
			head = newNode;
			tail = newNode;
		}else{
			tail->next = newNode;
			tail = tail->next;
		}
	}
	if(carry > 0){
		tail->next = new Node(carry);
	}
	return head;
}

Node* reverseList(Node* head) {
	
	if(head == NULL || head->next == NULL){
		return head;
	}
	
	Node *curr = head;
	Node *prev = NULL;
	Node *next;
	
	while(curr != NULL){
		
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
		
	}
	head = prev;
	return head;
}

int main(){
	int n, m;
	cin >> n >> m;
	
	Node* head1 = takeInput(n);
	Node* head2 = takeInput(m);
	head1 = reverseList(head1);
	head2 = reverseList(head2);
	// print(head1);
	// print(head2);

	Node* head = solve(head1, head2);
	head = reverseList(head);
	print(head);

	return 0;
}