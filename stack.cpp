#include <iostream>

#define Size 100

using namespace std;

class Stack{
    int *arr;
    int top;

    public:
    Stack(){
        arr = new int[Size];
        top = -1; 
    }

    void push(int x){
        if(top == Size-1){
            cout << "Stack OverFlow" << endl;

        }

        top++;
        arr[top] = x;
        
    }

    void pop(){
        if(top == -1){
            cout << "There is no element to pop" <<endl;
        }

        top--;
    }
        int Top(){
            if(top == -1){
                cout << "There is no element in stack";
                return -1;
            }
            return arr[top];
        }


        bool empty(){
            return top ==-1;
        }
        
        
        
};

int main(){
    Stack st;
    st.push(1);
    st.push(2);
    
    cout << st.Top() << endl;
    st.pop();
    st.pop();
    st.pop();
    cout<<st.empty()<<endl;
}