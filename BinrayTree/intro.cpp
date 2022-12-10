#include<iostream>
#include<queue>
#include<stack>
using namespace std;


class node {
    public: 
        int data;
        node* left;
        node* right;
    
    node(int data) {
        this->data = data;
        this->left =NULL;
        this->right =NULL;
    }
};


node* createTree(node* root) {

    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;

    if(data == -1) {
        return NULL;
    }
    root = new node(data);

    cout<<"Enter data for inserting for left "<<data<<endl;
    root->left = createTree(root->left);
     cout<<"Enter data for inserting for right "<<data<<endl;
    root->right = createTree(root->right);

    return root;
}

void levelOrderReversal(node* root) {

    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();


        if(temp==NULL) {
            // agar NULL mil rha hai to previous level complete ho gya hai
            cout<<endl;

            // ab jo bhi element bache honege wo next level ka honga isliye NULL push kr rhe
            if(!q.empty()){
                q.push(NULL);
            }

        }else {
            cout<<temp->data<<" ";
            if(temp->left) {
                q.push(temp->left);
            }

            if(temp->right) {
                q.push(temp->right);
            }
        }
    }
    cout<<endl;
}


void reverseLevelOrder(node* root) {

    stack<node*> st;
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {

        node* temp = q.front();
        q.pop();
        st.push(temp);

        if(temp==NULL) {
            if(!q.empty()) {
                q.push(NULL);
            }

        }else{

            if(temp->right) {
                q.push(temp->right);
            }

            if(temp->left) {
                q.push(temp->left);
            }

        }


    }


    while(!st.empty()) {

        if(st.top() == NULL) {
            cout<<endl;
            st.pop();
        }else {
            node* temp = st.top();
            cout<<temp->data<<" ";
            st.pop();
        }
    }

    cout<<endl;


}

void inorderTraversal(node* root) {

    if(root==NULL) {
        return;
    }

    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);
    
}


void preorderTraversal(node* root) {

    if(root==NULL) {
        return;
    }
     cout<<root->data<<" ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
    
}

void postorderTraversal(node* root) {

    if(root==NULL) {
        return;
    }
  
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout<<root->data<<" ";
    
}


void buildfromLevelOrderTraversal(node* &root) {

    queue<node*> q;
    cout<<"Enter data for root:"<<endl;
    int data;
    cin>>data;
    root = new node(data);
    q.push(root);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        cout<<"Enter the left child of "<<temp->data<<endl;
        int leftData;
        cin>>leftData;

        if(leftData!=-1) {
        temp->left = new node(leftData);
        q.push(temp->left);
        }


        cout<<"Enter the right child of "<<temp->data<<endl;
        int rightData;
        cin>>rightData;

        if(rightData!=-1) {
        temp->right = new node(rightData);
        q.push(temp->right);
        }
    }





}



int main() {

    node *root = NULL;

    /*
    root = createTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 20 -1 -1
    cout<<endl;
    cout<<"level order traversal: "<<endl;
    levelOrderReversal(root);
    cout<<endl;
    cout<<"reverse level order traversal: "<<endl;
    reverseLevelOrder(root);
    cout<<endl;
    cout<<"Inordered traversal: ";
    inorderTraversal(root);
    cout<<endl;

    cout<<"Preorder traversal: ";
    preorderTraversal(root);
    cout<<endl;

    cout<<"Postorder traversal: ";
    postorderTraversal(root);
    cout<<endl;
    */

   buildfromLevelOrderTraversal(root);
    cout<<"level order traversal: "<<endl;
    levelOrderReversal(root);
    return 0;

}