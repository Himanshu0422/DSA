#include <iostream>

using namespace std;

class treenode(){
    int data;
    treenode* left;
    treenode* right;
    treenode(int data);
    this->data = data;
    left = NULL;
    right = NULL;
};

~treenode(){
    delete left;
    delete right;
};

treenode*takeinput(){
    queue<treenode*> pendingnodes;
    cout<<"Enter root dead"<<endl;
    int rootdata;
    cin>>rootdata;
    
}

int main(){
    
    return 0;
}