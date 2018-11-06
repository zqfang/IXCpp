//
// Created by 方卓清 on 2018/11/6.
//

#include <iostream>
#include <queue>
#include <cassert>
using namespace std;

template <typename Key, typename Value>
class BST {
private:
    struct Node {
        Key key;
        Value value;
        Node* left;
        Node* right;
        Node(Key key, Value value){
            this->key = key;
            this->value = value;
            this->left = this->right = NULL;
        }
        Node(Node* node){
            this->key = node->key;
            this->value = node->value;
            this->left = node->left;
            this->right = node->right;
        }
    };
    Node * root;
    int count;
public:
    BST(){
        root = NULL;
        count=0;
    }
    ~BST(){
        destroy(root);
    }
    int size(){
        return count;
    }
    bool isEmpty() {
        return count == 0;
    }
    void insert(Key key, Value value){
        root = insert(root, key, value);
    }
    bool contain(Key key) {
        return contain(root, key);
    }
    Value* search(Key key){
        return search(root, key);
    }
    //深度优先：前序遍历
    void preOrder() {
        preOrder(root);
    }
    //深度优先：中序遍历
    void inOrder() {
        inOrder(root);
    }
    //深度优先：后序遍历
    void postOrder(){
        backOrder(root);
    }
    //广度优先：层序遍历
    void levelOrder(){
        queue<Node*> q;
        while(!q.empty()){
            Node* node = q.front();
            q.pop();
            cout << node->key << endl;
            if (node->left)
                q.push(node->left);
            if (node->right)
                q.push(node->right);
        }
    }
    Key minimum(){
        assert(count!=0);
        Node* minNode = minimum(root);
        return minNode-> key;
    }
    Key maximum(){
        assert(count!=0);
        Node* minNode = maximum(root);
        return minNode-> key;
    }
    void removeMin(){
        if(root)
            root = removeMin(root);
    }
    void removeMax(){
        if(root)
            root = removeMax(root);
    }
    void remove(Key key) {
        root = remove(root, key);
    }

private:
    Node* insert(Node* node, Key key, Value value){
        if(node == NULL){
            count ++;
            return new Node(key, value);
        }

        if (key == node->key)
            node->value = value;
        else if (key < node-> key)
            node->left = insert(node->left, key, value);
        else
            node->right = insert(node->right, key, value);

        return node;
    }

    bool contain(Node* node, Key key){
        if (node == NULL)
            return false;

        if (key == node->key){
            return true;
        } else if (key < node-> key){
            return contain(node->left, key);
        } else{
            return contain(node-> right, key)
        }
    }
    Value* search(Node* node, Key key){
        if (node == NULL)
            return NULL;
        if (key == node-> key )
            return &(node->value);
        else if (key < node->key)
            return search(node->left, key);
        else
            return search(node->right, key);
    }
    Node* preOrder(Node* node){
        if(node !=NULL){
            cout << node->key << endl;
            preOrder(node->left);
            preOrder(node->right);
        }
    }
    Node* inOrder(Node* node){
        if (node != NULL){
            inOrder(node->left);
            cout << node -> key <<endl;
            inOrder(node->right);
        }
    }
    Node* postOrder(Node* node){
        if (node != NULL){
            postOrder(node->left);
            postOrder(node->right);
            cout << node -> key <<endl;
        }
    }
    // release space using post order
    void destroy(Node* node){
        if (node != NULL){
            destroy(node->left);
            destroy(node->right);
            delete node;
            count --;
        }
    }
    Node* minimum(Node* node){
        if(node->left == NULL)
            return node;
        return minimum(node->left);
    }
    Node* maximum(Node* node){
        if(node->right == NULL)
            return node;
        return maximum(node->right)
    }
    Node* removeMin(Node* node){
        if(root->left == NULL) {
            Node* rightNode = node->right;
            delete node;
            count --;
            return rightNode;
        }
        node->left = removeMin(node->left);
        return node;
    }
    Node* removeMax(Node* node){
        if(root->right == NULL) {
            Node* leftNode = node->left;
            delete node;
            count --;
            return leftNode;
        }
        node->right = removeMin(node->right);
        return node;
    }
    Node* remove(Node* node, Key key) {
        if (node == NULL)
            return NULL;
        if (key < node->key){
            node->left = remove(node->left, key);
            return node;
        } else if {
            node-> right = remove(node->right, key);
            return node;
        } else {
            if (node->left == NULL) {
                Node* rightNode = node->right;
                delete node;
                count --;
                return rightNode;
            }

            if (node->right == NULL) {
                Node* leftNode = node->left;
                delete node;
                count --;
                return leftNode;
            }

            //huber deletion 找到右子树最小节点或左子树节点的最大值
            Node* successor = new Node(minimum(node->right));
            count ++;
            successor->right = removeMin(node->right);
            successor->left = node->left;
            delete node;
            return successor;

        }


    }

};

