#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->right = NULL;
        this->left = NULL;
    }
};

Node *insertBST(Node *root, int d)
{

    if (root == NULL)
    {
        root = new Node(d);
        return root;
    }

    if (d > root->data)
    {
        root->right = insertBST(root->right, d);
    }
    else if (d <= root->data)
    {
        root->left = insertBST(root->left, d);
    }

    return root;
}

void takeInput(Node *&root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        root = insertBST(root, data);
        cin >> data;
    }
}

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

Node *minVal(Node *root)
{
    Node *temp = root;
    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}

Node *maxVal(Node *root)
{
    Node *temp = root;
    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;
}

Node *deletefromBST(Node *root, int val)
{
    if (root == NULL)
    {
        return root;
    }

    if (root->data == val)
    {
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        if (root->left != NULL && root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        if (root->left == NULL && root->right != NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        if (root->left != NULL && root->right != NULL)
        {
            int mini = minVal(root->right)->data;
            root->data = mini;
            root->right = deletefromBST(root->right, mini);
            return root;
        }
    }
    else if (root->data > val)
    {
        root->left = deletefromBST(root->left, val);
        return root;
    }
    else
    {
        root->right = deletefromBST(root->right, val);
        return root;
    }
    return root;
}

int main()
{
    Node *root = NULL;

    cout << "Enter data BST" << endl;
    takeInput(root);
    cout << "Level order" << endl;
    levelOrderTraversal(root);
    cout << "Inorder" << endl;
    inorder(root);
    cout << endl;
    cout << "Preorder" << endl;
    preorder(root);
    cout << endl;
    cout << "PostOrder" << endl;
    postorder(root);

    root = deletefromBST(root, 50);

    cout << "Level order" << endl;
    levelOrderTraversal(root);
    cout << "Inorder" << endl;
    inorder(root);
    cout << endl;
    cout << "Preorder" << endl;
    preorder(root);
    cout << endl;
    cout << "PostOrder" << endl;
    postorder(root);

    return 0;
}