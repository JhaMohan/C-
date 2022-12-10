#include<iostream>
#include<stack>
using namespace std;



int main() {

    // creation of stack
    stack<int> st;

    //push operation
    st.push(2);
    st.push(3);

    //pop operation
    st.pop();

    cout<<"Top element of stack is: "<<st.top()<<endl;
    
    if(st.empty()) {
        cout<<"Empty stack."<<endl;
    }else {
        cout<<"Stack is not empty."<<endl;
    }

    cout<<"size of stack is: "<<st.size()<<endl;
    
    return 0;
    
    }