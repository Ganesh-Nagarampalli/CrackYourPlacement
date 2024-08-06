// #include<iostream>
// using namespace std;

// class Stack{

//     int topIndex = -1;
//     int st[100];

//     public:    
//         void push(int x){
//             if (topIndex >= 99) {
//                 cout << "Stack overflow\n";
//                 return;
//             }
//             topIndex++;
//             st[topIndex] = x;
//         }
        
//         void pop(){
//             if (topIndex < 0) {
//                 cout << "Stack underflow\n";
//                 return;
//             }
//             topIndex--;
//         }
        
//         int top(){
//             if (topIndex < 0) {
//                 cout << "Stack is empty\n";
//                 return -1;
//             }
//             return st[topIndex];
//         }
        
//         int getSize(){
//             return topIndex + 1;
//         }
// };

// int main(){
//     Stack st;
//     st.push(10);
//     st.push(20);
    
//     cout << "Top element: " << st.top() << endl;
//     cout << "Stack size: " << st.getSize() << endl;
    
//     st.pop();
//     cout << "Top element after pop: " << st.top() << endl;
//     cout << "Stack size after pop: " << st.getSize() << endl;

//     return 0;
// }


#include<iostream>
using namespace std;

class Stack{

    int topIndex = -1;
    int* st;
    int maxSize;
    
    public:  
        Stack(int s){
            maxSize = s;
            st = new int[maxSize];
        }  
        void push(int x){
            if (topIndex >= maxSize-1) {
                cout << "Stack overflow\n";
                return;
            }
            topIndex++;
            st[topIndex] = x;
        }
        
        void pop(){
            if (topIndex < 0) {
                cout << "Stack underflow\n";
                return;
            }
            topIndex--;
        }
        
        int top(){
            if (topIndex < 0) {
                cout << "Stack is empty\n";
                return -1;
            }
            return st[topIndex];
        }
        
        int getSize(){
            return topIndex + 1;
        }
};

int main(){
    int stSize;
    cin>>stSize;
    Stack st(stSize);
    st.push(10);
    st.push(20);
    
    cout << "Top element: " << st.top() << endl;
    cout << "Stack size: " << st.getSize() << endl;
    
    st.pop();
    cout << "Top element after pop: " << st.top() << endl;
    cout << "Stack size after pop: " << st.getSize() << endl;

    return 0;
}
