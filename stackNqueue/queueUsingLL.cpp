// queue using linked list

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

class Queue{
    Node* front;
    Node* rear;
    int currSize;
    public:
        Queue(){
            front = NULL;
            rear = NULL;
            currSize = 0;
        }
        void push(int x){
            Node* temp = new Node(x);
            if(front==NULL){
                front = temp;
                rear = temp;
            }
            else{
                rear->next = temp;
                rear = temp;
            }
            currSize++;
        }
        void pop(){
            if(front==NULL){
                cout<<"Queue is empty\n";
                return;
            }
            Node* temp = front;
            front = front->next;
            delete temp;
            currSize--;
        }
        int top(){
            if(front==NULL){
                cout<<"Queue is empty\n";
                return -1;
            }
            return front->data;
        }
        int getSize(){
            return currSize;
        }
};

int main(){
    Queue q;
    q.push(10);
    q.push(20);
    
    cout << "Front element: " << q.top() << endl;
    cout << "Queue size: " << q.getSize() << endl;
    
    q.pop();
    cout << "Front element after pop: " << q.top() << endl;
    cout << "Queue size after pop: " << q.getSize() << endl;

    return 0;
}