#include <iostream>

using std::cout;

// Treap v1.0.0
template <typename DataType, typename KeyType = DataType>
class Treap{
public:

    Treap();

    ~Treap();


    void        insert(KeyType key, DataType val);

    bool        remove(KeyType key);

    DataType *  find(KeyType key);

    void        clear();


    void        print();


    // Functions for case KeyType == Datatype;

    void        insert(DataType key);

private:

    struct Node{

        KeyType     key;

        int         priority;

        DataType    val;

        Node *      left;

        Node *      right;
    };
    

    void    split(Node * node, KeyType key, Node * & left, Node * & right);

    Node *  merge(Node * left, Node * right);


    void    clearRec(Node * node);

    void    printRec(Node * node, int depth);


    Node *  root_;

};

/****************************TREAP*********************************************/

// Public:

template <typename DataType, typename KeyType>
Treap<DataType, KeyType>::Treap():
        root_(nullptr)
{
    srand(time(NULL));
}



template <typename DataType, typename KeyType>
Treap<DataType, KeyType>::~Treap(){
    clear();
}



template <typename DataType, typename KeyType>
void Treap<DataType, KeyType>::insert(KeyType key, DataType val){
    int priority = rand();
    Node * left = nullptr;
    Node * right = nullptr;
    Node * tmp = new Node;

    Node * node = root_;
    Node * nodeFather = nullptr;
    while (node != nullptr && node->priority >= priority){
        nodeFather = node;
        node = (key <= node->key)?(node->left):(node->right);
    }
    split(node, key, left, right);
    if(nodeFather == nullptr)
        root_ = tmp;
    else if(key <= nodeFather->key)
        nodeFather->left = tmp;
    else
        nodeFather->right = tmp;

    tmp->val = val;
    tmp->priority = priority;
    tmp->key = key;
    tmp->left = left;
    tmp->right = right;
}



template <typename DataType, typename KeyType>
void Treap<DataType, KeyType>::clear(){
    clearRec(root_);
}



template <typename DataType, typename KeyType>
void Treap<DataType, KeyType>::print(){
    printRec(root_, 0);
}



template <typename DataType, typename KeyType>
bool Treap<DataType, KeyType>::remove(KeyType key){
    Node * node = root_;
    Node * nodeFather = nullptr;
    while (node != nullptr && node->key != key){
        nodeFather = node;
        node = (key <= node->key)?(node->left):(node->right);
    }
    if(node == nullptr)
        return false;
    Node * tmp = node;
    if(nodeFather == nullptr)
        root_ = merge(node->left, node->right);
    else if(key <= nodeFather->key)
        nodeFather->left = merge(node->left, node->right);
    else
        nodeFather->right = merge(node->left, node->right);
    delete tmp;
    return true;
}



template <typename DataType, typename KeyType>
DataType * Treap<DataType, KeyType>::find(KeyType key){
    Node * node = root_;
    while (node != nullptr && node->key != key)
        node = (key <= node->key)?(node->left):(node->right);
    if(node == nullptr)
        return nullptr;
    return &(node->val);
}



template <typename DataType, typename KeyType>
void Treap<DataType, KeyType>::insert(DataType key){
    insert(key, key);
}

// Private:

template <typename DataType, typename KeyType>
void Treap<DataType, KeyType>::clearRec(Node * node){
    if(node == nullptr)
        return;
    clearRec(node->left);
    clearRec(node->right);
    delete node;
}



template <typename DataType, typename KeyType>
void Treap<DataType, KeyType>::printRec(Node * node, int depth){
    if(node == nullptr)
        return;
    printRec(node->right, depth + 1);
    for(int i = 0; i < depth*3; i++)
        cout << ' ';
    cout << node->val << "(" << node->key << "; "<< node->priority << ")\n";
    printRec(node->left, depth + 1);
}



template <typename DataType, typename KeyType>
void Treap<DataType, KeyType>::split(Node * node, KeyType key,
                                     Node * & left, Node * & right){
    if(node == nullptr){
        left = nullptr;
        right = nullptr;
    }
    else if(node->key <= key){
        split(node->right, key, node->right, right);
        left = node;
    }
    else{
        split(node->left, key, left, node->left);
        right = node;
    }
}



template <typename DataType, typename KeyType>
typename Treap<DataType, KeyType>::Node * Treap
        <DataType, KeyType>::merge(Node * left, Node * right){
    if(left == nullptr || right == nullptr)
        return (left == 0)?(right):(left);
    else if(left->priority > right->priority){
        left->right = merge(left->right, right);
        return left;
    }
    right->left = merge(left, right->left);
    return right;
}
