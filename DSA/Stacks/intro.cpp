#include<bits/stdc++.h>
#include<stack>
using namespace std;

class Stack{

    public:
        int *arr;
        int top;
        int size;
    
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }else{
            cout << "Stack Overflow" << endl;
        }
    }

    void pop(){
        if(top >= 0){
            top--;
        }else{
            cout << "Stack UnderFlow" << endl;
        }
    }

    int peek(){
        if(top >= 0)
            return arr[top];
        else{
            cout << "Stack is Empty" << endl;
        }
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }else{
            return false;
        }
    }

}

int main(){

    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(44);

    cout << st.peek() << endl;

    // //create
    // stack<int>s;

    // // push elements
    // s.push(1);
    // s.push(2);

    // // pop elements
    // s.pop();

    // //print;
    // cout << s.top() << endl;
    
    // if(s.empty()){
    //     cout << "stack is empty"<<endl;
    // }else{
    //     cout<<"not empty"<<endl;
    // }

    return 0;
}