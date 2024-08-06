#include<iostream>
using namespace std;

class Queue{
    int *q;
    int front,rear,currSize,maxSize;
    public:
        Queue(int s){
            q = new int[s];
            maxSize = s;
            front = -1;
            rear = -1;
            currSize = 0;
        }

        void push(int x){
            if(currSize==maxSize){
                cout<<"Queue is full\n";
                exit(1);
            }
            else if(rear == -1){
                front = 0;
                rear = 0;
            }
            else{
                rear = (rear+1) % maxSize;
            }
            q[rear] = x;
            currSize++;

        }
        void pop(){
            if(front==-1){
                cout<<"Queue is empty\n";
                exit(1);
            }
            if(currSize==1){
                front = -1;
                rear = -1;
            }
            else{
                front = (front+1) % maxSize;
            }
            currSize--;
        }

        int top(){
            if(front==-1){
                cout<<"Queue is empty\n";
                exit(1);
            }
            return q[front];
        }
        int getSize(){
            return currSize;
        }

};

int main() {
    int s;
    cin>>s;
    Queue q(s);
    q.push(4);
    q.push(14);
    q.push(24);
    q.push(34);
    cout << "The peek of the queue before deleting any element " << q.top() << endl;
    cout << "The size of the queue before deletion " << q.getSize() << endl;
    cout << "The first element to be deleted " << q.top() << endl;
    q.pop();
    cout << "The peek of the queue after deleting an element " << q.top() << endl;
    cout << "The size of the queue after deleting an element " << q.getSize() << endl;

    return 0;
}