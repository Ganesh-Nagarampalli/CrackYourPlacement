// stack using linked list

#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int x){
            data = x;
            next = NULL;
        }
};

class Stack{
    int currSize=0;
    Node* head;
    public:
        Stack(){
            head = NULL;
        }
        void push(int x){
            Node* temp = new Node(x);
            temp->next = head;
            head = temp;
            currSize++;
        }
        void pop(){
            if(head==NULL){
                cout<<"Stack is empty\n";
                return;
            }
            Node* temp = head;
            head = head->next;
            delete temp;
            currSize--;
        }
        int top(){
            if(head==NULL){
                cout<<"Stack is empty\n";
                return -1;
            }
            return head->data;
        }
        int getSize(){
            return currSize;
        }
};

int main(){
    Stack st;
    st.push(10);
    st.push(20);
    
    cout << "Top element: " << st.top() << endl;
    cout << "Stack size: " << st.getSize() << endl;
    
    st.pop();
    cout << "Top element after pop: " << st.top() << endl;
    cout << "Stack size after pop: " << st.getSize() << endl;

    return 0;
}