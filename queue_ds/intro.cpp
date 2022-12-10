#include<iostream>
#include<queue>
using namespace std;


int main() {

//creating a queue
queue<int> q;

q.push(11);
q.push(12);
q.push(13);

cout<<"first element: "<<q.front()<<endl;
cout<<"last element:"<<q.back()<<endl;
cout<<"size of queue:"<<q.size()<<endl;
q.pop();
cout<<"first element: "<<q.front()<<endl;
q.pop();
cout<<"first element: "<<q.front()<<endl;
cout<<"size of queue:"<<q.size()<<endl;

if(q.empty()){
    cout<<"queue is empty!"<<endl;
}else{
    cout<<"queue is not empty!"<<endl;
}




return 0;


}