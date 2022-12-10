#include<iostream>
#include<queue>
using namespace std;

class Node {
public:
  int data;
  Node* left;
  Node* right;
Node(int data) {
    this->data = data;
    this->left =NULL;
    this->right =NULL;
}
};

void preOrder(Node* root) {
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(Node* root) {
    if(root == NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

void inOrder(Node* root) {
    if(root == NULL){
        return;
    }

   
    inOrder(root->left);
     cout<<root->data<<" ";
    inOrder(root->right);
}
   


void levelOrderTraversal(Node* root) {

    if(root == NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);

    while(!q.empty()) {
        Node* frontNode = q.front();
        q.pop();

        cout<<frontNode->data<<" ";

        if(frontNode->left) {
            q.push(frontNode->left);
        }

        if(frontNode->right) {
            q.push(frontNode->right);
        }
    }

}

Node* minVal(Node* root) {
    Node* temp = root;

    while(temp->left!=NULL) {
        temp = temp->left;
    }
    return temp;
}

Node* maxVal(Node* root) {
    Node* temp = root;

    while(temp->right!=NULL) {
        temp = temp->right;
    }
    return temp;
}

Node* deleteNode(Node* root,int key) {

    // base case
    if(root==NULL) return NULL;

    if(root->data==key) {
        //0 child
            if(root->left==NULL && root->right==NULL) {
                delete root;
                return NULL;
            } 
        //1 child
            // left child exist
            if(root->left!=NULL && root->right==NULL) {
                Node* temp = root->left;
                delete root;
                return temp;
            }
            // right child exist
            if(root->left==NULL && root->right!=NULL) {
                Node* temp = root->right;
                delete root;
                return temp;
            }

        //2 child

        if(root->left!=NULL && root->right!=NULL) {
            int minval = minVal(root->right)->data;
            root->data = minval;
            root->right = deleteNode(root->right,minval);
            return root;
        }
    }
    else if(root->data>key) {
        //left mai jao
        root->left = deleteNode(root->left,key);
        return root;
    }else {
        //right mai jao
        root->right = deleteNode(root->right,key);
        return root;
    }
}




void findPreSuc(Node* root,Node* &pre,Node* &suc,int key) {
    if(root==NULL) return;

    if(root->data==key) {

    if(root->left!=NULL) {
        Node* temp = root->left;
        while(temp->right!=NULL) {
            temp = temp->right;
        }
        pre = temp;
    }

    if(root->right!=NULL) {
        Node* temp = root->right;
        while(temp->left!=NULL) {
            temp = temp->left;
        }
        suc = temp;
    }
    return ;
    }
    if(root->data > key) {
        suc = root;
        findPreSuc(root->left,pre,suc,key);
    }else{
        pre = root;
        findPreSuc(root->right,pre,suc,key);
    }
   
}

void inserIntoBST(Node* &root,int data) {

    // base case
    if(root==NULL){
        root = new Node(data);
        return;
    }

    if(data>root->data) {
        inserIntoBST(root->right,data);
    }

    if(data<root->data) {
        inserIntoBST(root->left,data);
    }
}

void insertNode(Node* &root) {

    int data;
    cin>>data;

    while(data!=-1) {
        inserIntoBST(root,data);
        cin>>data;
    }

}


int main() {

    //10 8 21 7 27 5 4 3 -1
    Node* root = NULL;
    Node* pre = NULL;
    Node* suc = NULL;
    cout<<"Enter the node data:"<<endl;
    insertNode(root);
    cout<<endl;
    cout<<endl<<"Level order Traversal: "<<endl;
    levelOrderTraversal(root);
    cout<<endl<<"preOrder traversal:"<<endl;
    preOrder(root);
    cout<<endl<<"postOrder traversal:"<<endl;
    postOrder(root);
    cout<<endl<<"inOrder traversal:"<<endl;
    inOrder(root);
    cout<<endl;

    root = deleteNode(root,3);

    cout<<endl<<"inOrder traversal:"<<endl;
    inOrder(root);
    cout<<endl;

    root = deleteNode(root,10);

    cout<<endl<<"inOrder traversal:"<<endl;
    inOrder(root);
    cout<<endl;
    

    // Node* minval = minVal(root);
    // cout<<"minimum value of bst is: "<<minval->data<<endl;
    cout<<"minimum value of bst is: "<<minVal(root)->data<<endl;

    // Node* maxval = maxVal(root);
    // cout<<"maximum value of bst is: "<<maxval->data<<endl;
     cout<<"maximum value of bst is: "<<maxVal(root)->data<<endl;
    int key =27;
     findPreSuc(root,pre,suc,key);

    if (pre != NULL)
	cout << "Predecessor is " << pre->data << endl;
	else
	cout << "No Predecessor";

	if (suc != NULL)
	cout << "Successor is " << suc->data<<endl;
	else
	cout << "No Successor"<<endl;




    return 0;
}

