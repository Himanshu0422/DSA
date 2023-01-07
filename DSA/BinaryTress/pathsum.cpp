// #include <bits/stdc++.h>
// using namespace std;

// class node
// {
// public:
//     int data;
//     node *left;
//     node *right;

//     node(int d)
//     {
//         this->data = d;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// node *buildtree(node *root)
// {

//     cout << "Enter the data: " << endl;
//     int data;
//     cin >> data;
//     root = new node(data);

//     bool left;
//     cout << "Does node " << root->data << " have a left child? Enter 1 for yes, 0 for no: " << endl;
//     cin >> left;
//     if(left == true){
//         root->left = buildtree(root);
//     }
//     bool right;
//     cin >> right;
//     cout << "Does node " << root->data << " have a right child? Enter 1 for yes, 0 for no: " << endl;
//     if(right == true){
//         root->right = buildtree(root);
//     }

//     return root;
// }

// int main()
// {
//     node *root = NULL;
//     root = buildtree(root);
//     cout << root->data << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
node *buildtree(node *root)
{
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);

    bool left;
    cout << "Does node " << root->data << " have a left child? Enter 1 for yes, 0 for no: " << endl;
    cin >> left;
    if (left == true)
    {
        root->left = buildtree(root);
    }

    bool right;
    cout << "Does node " << root->data << " have a right child? Enter 1 for yes, 0 for no: " << endl;
    cin >> right;
    if (right == true)
    {
        root->right = buildtree(root);
    }

    return root;
}

void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
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

void solve(node *root, int k, vector<int> &ans)
{
    if (root == NULL)
    {
        return;
    }

    k = k - root->data;
    ans.push_back(root->data);
    if (root->left == NULL && root->right == NULL && k == 0)
    {
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
    }
    solve(root->left, k, ans);
    solve(root->right, k, ans);
    ans.pop_back();
}

int main()
{
    node *root = NULL;
    root = buildtree(root);
    // cout << "Root node is: " << root->data << endl;
    levelOrderTraversal(root);
    int k;
    cin >> k;
    vector<int> ans;
    solve(root, k, ans);
    return 0;
}