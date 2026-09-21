#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* binaryTree(){
    int x;
    cin >> x;

    if(x == -1) return NULL;

    Node* root = new Node(x);
    queue<Node*>q;
    q.push(root);

    while(!q.empty()){
        Node* current = q.front();
        q.pop();
        int leftdata, rightdata;
        cin >> leftdata >> rightdata;

        if(leftdata != -1){
            current -> left= new Node(leftdata);
            q.push(current -> left);
        }
        if(rightdata != -1){
            current -> right = new Node(rightdata);
            q.push(current -> right);
        }
    }
    return root;
}

// other function to be written here

int main(){
    Node* root = binaryTree();
    int ans = fucn(root);
    cout << ans;
}
