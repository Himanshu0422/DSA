#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val)
    {
        data = val;
    }
};

Node* bst(Node* root, int val)
{
    Node* n = new Node(val);
    if (root == NULL)
    {
        return n;
    }

    if (val <= root->data)
    {
        root->left = bst(root->left, val);
    }
    if (val > root->data)
    {
        root->right = bst(root->right, val);
    }
    return root;
}

void inorder(Node* root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main()
{
    Node* root = NULL;
    for (int i = 0; i < 5; i++)
    {
        int a;
        cin >> a;
        root = bst(root, a);
    }
    cout << "inorder" << endl;
    inorder(root);
    return 0;
}