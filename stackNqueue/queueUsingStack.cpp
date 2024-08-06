// queue using stack

#include<iostream>
#include<stack>
using namespace std;

// Method 1: By making push operation costly

class Queue{
    stack<int> s1,s2;
    public:
        void push(int x){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            s1.push(x);
            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
        }
        void pop(){
            if(s1.empty()){
                cout<<"Queue is empty\n";
                return;
            }
            s1.pop();
        }
        int top(){
            if(s1.empty()){
                cout<<"Queue is empty\n";
                return -1;
            }
            return s1.top();
        }
        int getSize(){
            return s1.size();
        }
};

int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    cout << "Top element: " << q.top() << endl;
    cout << "Queue size: " << q.getSize() << endl;
    q.pop();
    cout << "Top element after pop: " << q.top() << endl;
    cout << "Queue size after pop: " << q.getSize() << endl;
    return 0;
}

// Method 2: By making pop operation costly

// class Queue{
//     stack<int> s1,s2;
//     public:
//         void push(int x){
//             s1.push(x);
//         }
//         void pop(){
//             if(s1.empty() && s2.empty()){
//                 cout<<"Queue is empty\n";
//                 return;
//             }
//             if(s2.empty()){
//                 while(!s1.empty()){
//                     s2.push(s1.top());
//                     s1.pop();
//                 }
//             }
//             s2.pop();
//         }
//         int top(){
//             if(s1.empty() && s2.empty()){
//                 cout<<"Queue is empty\n";
//                 return -1;
//             }
//             if(s2.empty()){
//                 while(!s1.empty()){
//                     s2.push(s1.top());
//                     s1.pop();
//                 }
//             }
//             return s2.top();
//         }
//         int getSize(){
//             return s1.size() + s2.size();
//         }
// };